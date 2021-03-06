/********************************************************************
HMD-Stereoificator
Copyright (C) 2013 Chris Drain

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
********************************************************************/

#include "DCEgoDefault.h"


DCEgoDefault::DCEgoDefault() : DuplicationConditions() {}

DCEgoDefault::~DCEgoDefault() {}



bool DCEgoDefault::ShouldDuplicateRenderTarget(UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality,BOOL Lockable, bool isSwapChainBackBuffer)
{
	if (isSwapChainBackBuffer) {
		return true;
	}

	return (Width != Height) && (Width >= 1680);  
}

bool DCEgoDefault::ShouldDuplicateDepthStencilSurface(UINT Width,UINT Height,D3DFORMAT Format,D3DMULTISAMPLE_TYPE MultiSample,DWORD MultisampleQuality,BOOL Discard)
{
	return (Width != Height) && (Width >= 1680); 
}

bool DCEgoDefault::ShouldDuplicateTexture(UINT Width,UINT Height,UINT Levels,DWORD Usage, D3DFORMAT Format,D3DPOOL Pool)
{
	return IS_RENDER_TARGET(Usage) && ((Width != Height) && (Width >= 1680) && (Format != 21)); 
}

bool DCEgoDefault::ShouldDuplicateCubeTexture(UINT EdgeLength, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool)
{
	return IS_RENDER_TARGET(Usage);
}

//with all except cube on (Width != Height) = shadows broken
// Shadows are done with a (Width != Height) surface which is at (Width >= 1680) && (Height >= 1050)