/*
Copyright (C) 2009 Electronic Arts, Inc.  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1.  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
2.  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
3.  Neither the name of Electronic Arts, Inc. ("EA") nor the names of
    its contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY ELECTRONIC ARTS AND ITS CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL ELECTRONIC ARTS OR ITS CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

///////////////////////////////////////////////////////////////////////////////
// EASTL/heap.h
//
// Copyright (c) 2005, Electronic Arts. All rights reserved.
// Written and maintained by Paul Pedriana.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// This file implements heap functionality much like the std C++ heap algorithms.
// Such heaps are not the same thing as memory heaps or pools, but rather are
// semi-sorted random access containers which have the primary purpose of 
// supporting the implementation of priority_queue and similar data structures.
// 
// The primary distinctions between this heap functionality and std::heap are:
//    - This heap exposes some extra functionality such as is_heap and change_heap.
//    - This heap is more efficient than versions found in typical STL 
//      implementations. This comes
//      about due to better use of array dereferencing and branch prediction.
//      You should expect of 5-30%, depending on the usage and platform.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// The publicly usable functions we define are:
//    push_heap     -- Adds an entry to a heap.           Same as C++ std::push_heap.
//    pop_heap      -- Removes the top entry from a heap. Same as C++ std::pop_heap.
//    make_heap     -- Converts an array to a heap.       Same as C++ std::make_heap.
//    sort_heap     -- Sorts a heap in place.             Same as C++ std::sort_heap.
//    remove_heap   -- Removes an arbitrary entry from a heap.
//    change_heap   -- Changes the priority of an entry in the heap.
//    is_heap       -- Returns true if an array appears is in heap format.
///////////////////////////////////////////////////////////////////////////////



#ifndef EASTL_HEAP_H
#define EASTL_HEAP_H


#include <EASTL/internal/config.h>
#include <EASTL/iterator.h>
#include <stddef.h>



namespace eastl
{

    ///////////////////////////////////////////////////////////////////////
    // promote_heap (internal function)
    ///////////////////////////////////////////////////////////////////////

    /// promote_heap
    ///
    /// Moves a value in the heap from a given position upward until 
    /// it is sorted correctly. It's kind of like bubble-sort, except that
    /// instead of moving linearly from the back of a list to the front,
    /// it moves from the bottom of the tree up the branches towards the
    /// top. But otherwise is just like bubble-sort.
    ///
    /// This function requires that the value argument refer to a value
    /// that is currently not within the heap.
    ///
    template <typename RandomAccessIterator, typename Distance, typename T>
    inline void promote_heap(RandomAccessIterator first, Distance topPosition, Distance position, const T& value)
    {
        for(Distance parentPosition = (position - 1) >> 1; // This formula assumes that (position > 0). // We use '>> 1' instead of '/ 2' because we have seen VC++ generate better code with >>.
            (position > topPosition) && (*(first + parentPosition) < value);
            parentPosition = (position - 1) >> 1)
        {
            *(first + position) = *(first + parentPosition); // Swap the node with its parent.
            position = parentPosition;
        }

        *(first + position) = value;
    }

    /// promote_heap
    ///
    /// Takes a Compare(a, b) function (or function object) which returns true if a < b.
    /// For example, you could use the standard 'less' comparison object.
    ///
    /// The Compare function must work equivalently to the compare function used
    /// to make and maintain the heap.
    ///
    /// This function requires that the value argument refer to a value
    /// that is currently not within the heap.
    ///
    template <typename RandomAccessIterator, typename Distance, typename T, typename Compare>
    inline void promote_heap(RandomAccessIterator first, Distance topPosition, Distance position, const T& value, Compare compare)
    {
        for(Distance parentPosition = (position - 1) >> 1; // This formula assumes that (position > 0). // We use '>> 1' instead of '/ 2' because we have seen VC++ generate better code with >>.
            (position > topPosition) && compare(*(first + parentPosition), value);
            parentPosition = (position - 1) >> 1)
        {
            *(first + position) = *(first + parentPosition); // Swap the node with its parent.
            position = parentPosition;
        }

        *(first + position) = value;
    }



    ///////////////////////////////////////////////////////////////////////
    // adjust_heap (internal function)
    ///////////////////////////////////////////////////////////////////////

    /// adjust_heap
    ///
    /// Given a position that has just been vacated, this function moves
    /// new values into that vacated position appropriately. The value
    /// argument is an entry which will be inserted into the heap after
    /// we move nodes into the positions that were vacated.
    ///
    /// This function requires that the value argument refer to a value
    /// that is currently not within the heap.
    ///
    template <typename RandomAccessIterator, typename Distance, typename T>
    void adjust_heap(RandomAccessIterator first, Distance topPosition, Distance heapSize, Distance position, const T& value)
    {
        // We do the conventional approach of moving the position down to the 
        // bottom then inserting the value at the back and moving it up.
        Distance childPosition = (2 * position) + 2;

        for(; childPosition < heapSize; childPosition = (2 * childPosition) + 2)
        {
            if(*(first + childPosition) < *(first + (childPosition - 1))) // Choose the larger of the two children.
                --childPosition;
            *(first + position) = *(first + childPosition); // Swap positions with this child.
            position = childPosition;
        }

        if(childPosition == heapSize) // If we are at the very last index of the bottom...
        {
            *(first + position) = *(first + (childPosition - 1));
            position = childPosition - 1;
        }

        eastl::promote_heap<RandomAccessIterator, Distance, T>(first, topPosition, position, value);
    }


    /// adjust_heap
    ///
    /// The Compare function must work equivalently to the compare function used
    /// to make and maintain the heap.
    ///
    /// This function requires that the value argument refer to a value
    /// that is currently not within the heap.
    ///
    template <typename RandomAccessIterator, typename Distance, typename T, typename Compare>
    void adjust_heap(RandomAccessIterator first, Distance topPosition, Distance heapSize, Distance position, const T& value, Compare compare)
    {
        // We do the conventional approach of moving the position down to the 
        // bottom then inserting the value at the back and moving it up.
        Distance childPosition = (2 * position) + 2;

        for(; childPosition < heapSize; childPosition = (2 * childPosition) + 2)
        {
            if(compare(*(first + childPosition), *(first + (childPosition - 1)))) // Choose the larger of the two children.
                --childPosition;
            *(first + position) = *(first + childPosition); // Swap positions with this child.
            position = childPosition;
        }

        if(childPosition == heapSize) // If we are at the bottom...
        {
            *(first + position) = *(first + (childPosition - 1));
            position = childPosition - 1;
        }

        eastl::promote_heap<RandomAccessIterator, Distance, T, Compare>(first, topPosition, position, value, compare);
    }




    ///////////////////////////////////////////////////////////////////////
    // push_heap
    ///////////////////////////////////////////////////////////////////////

    /// push_heap
    ///
    /// Adds an item to a heap (which is an array). The item necessarily
    /// comes from the back of the heap (array). Thus, the insertion of a 
    /// new item in a heap is a two step process: push_back and push_heap.
    ///
    /// Example usage:
    ///    vector<int> heap;
    ///    
    ///    heap.push_back(3);
    ///    push_heap(heap.begin(), heap.end()); // Places '3' appropriately.
    ///
    template <typename RandomAccessIterator>
    inline void push_heap(RandomAccessIterator first, RandomAccessIterator last)
    {
        typedef typename eastl::iterator_traits<RandomAccessIterator>::difference_type difference_type;
        typedef typename eastl::iterator_traits<RandomAccessIterator>::value_type      value_type;

        const value_type tempBottom(*(last - 1));

        eastl::promote_heap<RandomAccessIterator, difference_type, value_type>
                           (first, (difference_type)0, (difference_type)(last - first - 1), tempBottom);
    }


    /// push_heap
    ///
    /// This version is useful for cases where your object comparison is unusual 
    /// or where you want to have the heap store pointers to objects instead of 
    /// storing the objects themselves (often in order to improve cache coherency
    /// while doing sorting).
    ///
    /// The Compare function must work equivalently to the compare function used
    /// to make and maintain the heap.
    ///
    template <typename RandomAccessIterator, typename Compare>
    inline void push_heap(RandomAccessIterator first, RandomAccessIterator last, Compare compare)
    {
        typedef typename eastl::iterator_traits<RandomAccessIterator>::difference_type difference_type;
        typedef typename eastl::iterator_traits<RandomAccessIterator>::value_type      value_type;

        const value_type tempBottom(*(last - 1));

        eastl::promote_heap<RandomAccessIterator, difference_type, value_type, Compare>
                           (first, (difference_type)0, (difference_type)(last - first - 1), tempBottom, compare);
    }




    ///////////////////////////////////////////////////////////////////////
    // pop_heap
    ///////////////////////////////////////////////////////////////////////

    /// pop_heap
    ///
    /// Removes the first item from the heap (which is an array), and adjusts
    /// the heap so that the highest priority item becomes the new first item.
    ///
    /// Example usage:
    ///    vector<int> heap;
    ///    
    ///    heap.push_back(2);
    ///    heap.push_back(3);
    ///    heap.push_back(1);
    ///    <use heap[0], which is the highest priority item in the heap>
    ///    pop_heap(heap.begin(), heap.end());  // Moves heap[0] to the back of the heap and adjusts the heap.
    ///    heap.pop_back();                     // Remove value that was just at the top of the heap
    ///
    template <typename RandomAccessIterator>
    inline void pop_heap(RandomAccessIterator first, RandomAccessIterator last)
    {
        typedef typename eastl::iterator_traits<RandomAccessIterator>::difference_type difference_type;
        typedef typename eastl::iterator_traits<RandomAccessIterator>::value_type      value_type;

        const value_type tempBottom(*(last - 1));
        *(last - 1) = *first;
        eastl::adjust_heap<RandomAccessIterator, difference_type, value_type>
                          (first, (difference_type)0, (difference_type)(last - first - 1), 0, tempBottom);
    }



    /// pop_heap
    ///
    /// This version is useful for cases where your object comparison is unusual 
    /// or where you want to have the heap store pointers to objects instead of 
    /// storing the objects themselves (often in order to improve cache coherency
    /// while doing sorting).
    ///
    /// The Compare function must work equivalently to the compare function used
    /// to make and maintain the heap.
    ///
    template <typename RandomAccessIterator, typename Compare>
    inline void pop_heap(RandomAccessIterator first, RandomAccessIterator last, Compare compare)
    {
        typedef typename eastl::iterator_traits<RandomAccessIterator>::difference_type difference_type;
        typedef typename eastl::iterator_traits<RandomAccessIterator>::value_type      value_type;

        const value_type tempBottom(*(last - 1));
        *(last - 1) = *first;
        eastl::adjust_heap<RandomAccessIterator, difference_type, value_type, Compare>
                          (first, (difference_type)0, (difference_type)(last - first - 1), 0, tempBottom, compare);
    }




    ///////////////////////////////////////////////////////////////////////
    // make_heap
    ///////////////////////////////////////////////////////////////////////


    /// make_heap
    ///
    /// Given an array, this function converts it into heap format.
    /// The complexity is O(n), where n is count of the range.
    /// The input range is not required to be in any order.
    ///
    template <typename RandomAccessIterator>
    void make_heap(RandomAccessIterator first, RandomAccessIterator last)
    {
        // We do bottom-up heap construction as per Sedgewick. Such construction is O(n).
        typedef typename eastl::iterator_traits<RandomAccessIterator>::difference_type difference_type;
        typedef typename eastl::iterator_traits<RandomAccessIterator>::value_type      value_type;

        const difference_type heapSize = last - first;

        if(heapSize >= 2) // If there is anything to do... (we need this check because otherwise the math fails below).
        {
            difference_type parentPosition = ((heapSize - 2) >> 1) + 1; // We use '>> 1' instead of '/ 2' because we have seen VC++ generate better code with >>.

            do{
                --parentPosition;
                const value_type temp(*(first + parentPosition));
                eastl::adjust_heap<RandomAccessIterator, difference_type, value_type>
                                  (first, parentPosition, heapSize, parentPosition, temp);
            } while(parentPosition != 0);
        }
    }


    template <typename RandomAccessIterator, typename Compare>
    void make_heap(RandomAccessIterator first, RandomAccessIterator last, Compare compare)
    {
        typedef typename eastl::iterator_traits<RandomAccessIterator>::difference_type difference_type;
        typedef typename eastl::iterator_traits<RandomAccessIterator>::value_type      value_type;

        const difference_type heapSize = last - first;

        if(heapSize >= 2) // If there is anything to do... (we need this check because otherwise the math fails below).
        {
            difference_type parentPosition = ((heapSize - 2) >> 1) + 1; // We use '>> 1' instead of '/ 2' because we have seen VC++ generate better code with >>.

            do{
                --parentPosition;
                const value_type temp(*(first + parentPosition));
                eastl::adjust_heap<RandomAccessIterator, difference_type, value_type, Compare>
                                  (first, parentPosition, heapSize, parentPosition, temp, compare);
            } while(parentPosition != 0);
        }
    }




    ///////////////////////////////////////////////////////////////////////
    // sort_heap
    ///////////////////////////////////////////////////////////////////////

    /// sort_heap
    ///
    /// After the application if this algorithm, the range it was applied to 
    /// is no longer a heap, though it will be a reverse heap (smallest first).
    /// The item with the lowest priority will be first, and the highest last.
    /// This is not a stable sort because the relative order of equivalent 
    /// elements is not necessarily preserved.
    /// The range referenced must be valid; all pointers must be dereferenceable 
    /// and within the sequence the last position is reachable from the first 
    /// by incrementation.
    /// The complexity is at most O(n * log(n)), where n is count of the range.
    ///
    template <typename RandomAccessIterator>
    inline void sort_heap(RandomAccessIterator first, RandomAccessIterator last)
    {
        for(; (last - first) > 1; --last) // We simply use the heap to sort itself.
            eastl::pop_heap<RandomAccessIterator>(first, last);
    }


    /// sort_heap
    ///
    /// The Compare function must work equivalently to the compare function used
    /// to make and maintain the heap.
    ///
    template <typename RandomAccessIterator, typename Compare>
    inline void sort_heap(RandomAccessIterator first, RandomAccessIterator last, Compare compare)
    {
        for(; (last - first) > 1; --last) // We simply use the heap to sort itself.
            eastl::pop_heap<RandomAccessIterator, Compare>(first, last, compare);
    }



    ///////////////////////////////////////////////////////////////////////
    // remove_heap
    ///////////////////////////////////////////////////////////////////////

    /// remove_heap
    ///
    /// Removes an arbitrary entry from the heap and adjusts the heap appropriately.
    /// This function is unlike pop_heap in that pop_heap moves the top item
    /// to the back of the heap, whereas remove_heap moves an arbitrary item to
    /// the back of the heap.
    ///
    /// Note: Since this function moves the element to the back of the heap and 
    /// doesn't actually remove it from the given container, the user must call
    /// the container erase function if the user wants to erase the element 
    /// from the container.
    ///
    template <typename RandomAccessIterator, typename Distance>
    inline void remove_heap(RandomAccessIterator first, Distance heapSize, Distance position)
    {
        typedef typename eastl::iterator_traits<RandomAccessIterator>::difference_type difference_type;
        typedef typename eastl::iterator_traits<RandomAccessIterator>::value_type      value_type;

        const value_type tempBottom(*(first + heapSize - 1));
        *(first + heapSize - 1) = *(first + position);
        eastl::adjust_heap<RandomAccessIterator, difference_type, value_type>
                          (first, (difference_type)0, (difference_type)(heapSize - 1), (difference_type)position, tempBottom);
    }


    /// remove_heap
    ///
    /// The Compare function must work equivalently to the compare function used
    /// to make and maintain the heap.
    ///
    /// Note: Since this function moves the element to the back of the heap and 
    /// doesn't actually remove it from the given container, the user must call
    /// the container erase function if the user wants to erase the element 
    /// from the container.
    ///
    template <typename RandomAccessIterator, typename Distance, typename Compare>
    inline void remove_heap(RandomAccessIterator first, Distance heapSize, Distance position, Compare compare)
    {
        typedef typename eastl::iterator_traits<RandomAccessIterator>::difference_type difference_type;
        typedef typename eastl::iterator_traits<RandomAccessIterator>::value_type      value_type;

        const value_type tempBottom(*(first + heapSize - 1));
        *(first + heapSize - 1) = *(first + position);
        eastl::adjust_heap<RandomAccessIterator, difference_type, value_type, Compare>
                          (first, (difference_type)0, (difference_type)(heapSize - 1), (difference_type)position, tempBottom, compare);
    }



    ///////////////////////////////////////////////////////////////////////
    // change_heap
    ///////////////////////////////////////////////////////////////////////

    /// change_heap
    ///
    /// Given a value in the heap that has changed in priority, this function
    /// adjusts the heap appropriately. The heap size remains unchanged after
    /// this operation. 
    ///
    template <typename RandomAccessIterator, typename Distance>
    inline void change_heap(RandomAccessIterator first, Distance heapSize, Distance position)
    {
        typedef typename eastl::iterator_traits<RandomAccessIterator>::difference_type difference_type;
        typedef typename eastl::iterator_traits<RandomAccessIterator>::value_type      value_type;

        // To do: This can be done more efficiently by migrating the value up or down in place.
        //        Bug Paul Pedriana if you want to have the more efficient version implemented.
        eastl::remove_heap<RandomAccessIterator, Distance>(first, heapSize, position);

        eastl::promote_heap<RandomAccessIterator, difference_type, value_type>
                           (first, (difference_type)0, (difference_type)(heapSize - 1), value_type(*(first + heapSize - 1)));
    }


    /// change_heap
    ///
    /// The Compare function must work equivalently to the compare function used
    /// to make and maintain the heap.
    ///
    template <typename RandomAccessIterator, typename Distance, typename Compare>
    inline void change_heap(RandomAccessIterator first, Distance heapSize, Distance position, Compare compare)
    {
        typedef typename eastl::iterator_traits<RandomAccessIterator>::difference_type difference_type;
        typedef typename eastl::iterator_traits<RandomAccessIterator>::value_type      value_type;

        // To do: This can be done more efficiently by migrating the value up or down in place.
        //        Bug Paul Pedriana if you want to have the more efficient version implemented.
        eastl::remove_heap<RandomAccessIterator, Distance, Compare>(first, heapSize, position, compare);

        eastl::promote_heap<RandomAccessIterator, difference_type, value_type, Compare>
                           (first, (difference_type)0, (difference_type)(heapSize - 1), value_type(*(first + heapSize - 1)), compare);
    }





    ///////////////////////////////////////////////////////////////////////
    // is_heap
    ///////////////////////////////////////////////////////////////////////

    /// is_heap
    ///
    /// This is a useful debugging algorithm for verifying that a random  
    /// access container is in heap format. 
    ///
    template <typename RandomAccessIterator>
    inline bool is_heap(RandomAccessIterator first, RandomAccessIterator last)
    {
        int counter = 0;

        for(RandomAccessIterator child = first + 1; child < last; ++child, counter ^= 1)
        {
            if(*first < *child)
                return false;
            first += counter; // counter switches between 0 and 1 every time through.
        }

        return true;
    }


    /// is_heap
    ///
    /// The Compare function must work equivalently to the compare function used
    /// to make and maintain the heap.
    ///
    template <typename RandomAccessIterator, typename Compare>
    inline bool is_heap(RandomAccessIterator first, RandomAccessIterator last, Compare compare)
    {
        int counter = 0;

        for(RandomAccessIterator child = first + 1; child < last; ++child, counter ^= 1)
        {
            if(compare(*first, *child))
                return false;
            first += counter; // counter switches between 0 and 1 every time through.
        }

        return true;
    }



    // Faster implementation for most cases:
    //
    // template <typename RandomAccessIterator>
    // inline bool is_heap(RandomAccessIterator first, RandomAccessIterator last)
    // {
    //     if(((uintptr_t)(last - first) & 1) == 0)
    //         --last;
    // 
    //     RandomAccessIterator parent = first, child = first + 1;
    // 
    //     for(; child < last; child += 2, ++parent)
    //     {
    //         if((*parent < *child) || (*parent < *(child + 1)))
    //             return false;
    //     }
    // 
    //     if((((uintptr_t)(last - first) & 1) == 0) && (*parent < *child))
    //         return false;
    // 
    //     return true;
    // }


} // namespace eastl


#endif // Header include guard




