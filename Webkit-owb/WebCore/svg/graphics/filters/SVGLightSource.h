/*
    Copyright (C) 2004, 2005, 2006, 2007 Nikolas Zimmermann <zimmermann@kde.org>
                  2004, 2005 Rob Buis <buis@kde.org>
                  2005 Eric Seidel <eric@webkit.org>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    aint with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#ifndef SVGLightSource_h
#define SVGLightSource_h

#if ENABLE(SVG) && ENABLE(SVG_FILTERS)
#include <wtf/RefCounted.h>

namespace WebCore {

enum SVGLightType {
    LS_DISTANT,
    LS_POINT,
    LS_SPOT
};

class TextStream;

class SVGLightSource : public RefCounted<SVGLightSource> {
public:
    SVGLightSource(SVGLightType type)
        : m_type(type)
    { }

    virtual ~SVGLightSource() { }

    SVGLightType type() const { return m_type; }
    virtual TextStream& externalRepresentation(TextStream&) const = 0;

private:
    SVGLightType m_type;
};


} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(SVG_FILTERS)

#endif // SVGLightSource_h
