/*
Copyright (C) 2018 Christoph Schied
Copyright (C) 2019, NVIDIA CORPORATION. All rights reserved.
Copyright (C) 2022, David Lin

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include "shared/shared.h"
#include "common/bsp.h"
#include "common/cmd.h"
#include "common/common.h"
#include "common/cvar.h"
#include "common/files.h"
#include "common/math.h"
#include "client/video.h"
#include "client/client.h"
#include "refresh/refresh.h"
#include "refresh/images.h"
#include "refresh/models.h"
#include "system/hunk.h"

#include <SDL.h>
#include <dxgi.h>
#include <d3d12.h>

/* called when the library is loaded */
bool
R_Init_DX12(bool total)
{
	registration_sequence = 1;

	if (!VID_Init(GAPI_D3D12)) {
		Com_Error(ERR_FATAL, "VID_Init failed\n");
		return false;
	}

    return true;
}

/* called before the library is unloaded */
void
R_Shutdown_DX12(bool total)
{
    VID_Shutdown();
}

void R_RegisterFunctionsDX12()
{
	R_Init = R_Init_DX12;
	R_Shutdown = R_Shutdown_DX12;
	R_BeginRegistration = R_BeginRegistration_DX12;
	R_EndRegistration = R_EndRegistration_DX12;
	R_SetSky = R_SetSky_DX12;
	R_RenderFrame = R_RenderFrame_DX12;
	R_LightPoint = R_LightPoint_DX12;
	R_ClearColor = R_ClearColor_DX12;
	R_SetAlpha = R_SetAlpha_DX12;
	R_SetAlphaScale = R_SetAlphaScale_DX12;
	R_SetColor = R_SetColor_DX12;
	R_SetClipRect = R_SetClipRect_DX12;
	R_SetScale = R_SetScale_DX12;
	R_DrawChar = R_DrawChar_DX12;
	R_DrawString = R_DrawString_DX12;
	R_DrawPic = R_DrawPic_DX12;
	R_DrawStretchPic = R_DrawStretchPic_DX12;
	R_TileClear = R_TileClear_DX12;
	R_DrawFill8 = R_DrawFill8_DX12;
	R_DrawFill32 = R_DrawFill32_DX12;
	R_BeginFrame = R_BeginFrame_DX12;
	R_EndFrame = R_EndFrame_DX12;
	R_ModeChanged = R_ModeChanged_DX12;
	R_AddDecal = R_AddDecal_DX12;
	R_InterceptKey = R_InterceptKey_DX12;
	R_IsHDR = R_IsHDR_DX12;
	IMG_Load = IMG_Load_DX12;
	IMG_Unload = IMG_Unload_DX12;
	IMG_ReadPixels = IMG_ReadPixels_DX12;
	IMG_ReadPixelsHDR = IMG_ReadPixelsHDR_DX12;
	MOD_LoadMD2 = MOD_LoadMD2_DX12;
	MOD_LoadMD3 = MOD_LoadMD3_DX12;
	MOD_LoadIQM = MOD_LoadIQM_DX12;
	MOD_Reference = MOD_Reference_DX12;
}

// vim: shiftwidth=4 noexpandtab tabstop=4 cindent
