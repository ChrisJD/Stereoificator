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

#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED


#define SAFE_RELEASE(x) if(x) { x->Release(); x = NULL; } 

namespace LogName {
	
	const char * const D3D9Log = "Stereoificator.D3D9";

}



//extern const char* SteroificatorD3D9Log;
//extern Log::Logger logs;



#endif
