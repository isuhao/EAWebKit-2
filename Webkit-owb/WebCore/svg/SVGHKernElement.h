/*
   Copyright (C) 2007 Eric Seidel <eric@webkit.org>
   Copyright (C) 2007 Nikolas Zimmermann <zimmermann@kde.org>
   Copyright (C) 2008 Apple, Inc

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
 */

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#ifndef SVGHKernElement_h
#define SVGHKernElement_h

#include <wtf/FastAllocBase.h>
#if ENABLE(SVG_FONTS)
#include "SVGStyledElement.h"

#include <limits>
#include "Path.h"

namespace WebCore {

    class AtomicString;
    struct SVGFontData;

    // Describe an SVG <hkern> element
    struct SVGHorizontalKerningPair: public WTF::FastAllocBase {
        String unicode1;
        String glyphName1;
        String unicode2;
        String glyphName2;
        double kerning;
        
        SVGHorizontalKerningPair()
            : kerning(0)
        {
        }
    };

    class SVGHKernElement : public SVGElement {
    public:
        SVGHKernElement(const QualifiedName&, Document*);
        virtual ~SVGHKernElement();

        virtual void insertedIntoDocument();
        virtual void removedFromDocument();

        virtual bool rendererIsNeeded(RenderStyle*) { return false; }

        SVGHorizontalKerningPair buildHorizontalKerningPair() const;
    };

} // namespace WebCore

#endif // ENABLE(SVG_FONTS)
#endif
