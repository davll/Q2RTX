/*
Copyright (C) 2019, NVIDIA CORPORATION. All rights reserved.

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

#ifndef  _CONSTANTS_H_
#define  _CONSTANTS_H_

#define GRAD_DWN (3)

#define SHADOWMAP_SIZE 4096

#define HISTOGRAM_BINS 128

#define ALBEDO_TRANSFORM_SCALE 1.0
#define ALBEDO_TRANSFORM_BIAS -0.05
#define ALBEDO_TRANSFORM_POWER 0.4545

#define EMISSIVE_TRANSFORM_BIAS -0.001

#define MAX_MIRROR_ROUGHNESS 0.02

#define NUM_GLOBAL_TEXTUES 2048

#define NUM_BLUE_NOISE_TEX (128 * 4)
#define BLUE_NOISE_RES     (256)

#define NUM_LIGHT_STATS_BUFFERS 3

#define PRIMARY_RAY_T_MAX 10000

#define MAX_CAMERAS 8

#define AA_MODE_OFF 0
#define AA_MODE_TAA 1
#define AA_MODE_UPSCALE 2

// Scaling factors for lighting components when they are stored in textures.
// FP16 and RGBE textures have very limited range, and these factors help bring the signal within that range.
#define STORAGE_SCALE_LF 1024
#define STORAGE_SCALE_HF 32
#define STORAGE_SCALE_SPEC 32
#define STORAGE_SCALE_HDR 128

#define MATERIAL_KIND_MASK           0xf0000000
#define MATERIAL_KIND_INVALID        0x00000000
#define MATERIAL_KIND_REGULAR        0x10000000
#define MATERIAL_KIND_CHROME         0x20000000
#define MATERIAL_KIND_WATER          0x30000000
#define MATERIAL_KIND_LAVA           0x40000000
#define MATERIAL_KIND_SLIME          0x50000000
#define MATERIAL_KIND_GLASS          0x60000000
#define MATERIAL_KIND_SKY            0x70000000
#define MATERIAL_KIND_INVISIBLE      0x80000000
#define MATERIAL_KIND_EXPLOSION      0x90000000
#define MATERIAL_KIND_TRANSPARENT    0xa0000000
#define MATERIAL_KIND_SCREEN         0xb0000000
#define MATERIAL_KIND_CAMERA         0xc0000000
#define MATERIAL_KIND_CHROME_MODEL   0xd0000000

#define MATERIAL_FLAG_LIGHT          0x08000000
#define MATERIAL_FLAG_CORRECT_ALBEDO 0x04000000
#define MATERIAL_FLAG_HANDEDNESS     0x02000000
#define MATERIAL_FLAG_WEAPON         0x01000000
#define MATERIAL_FLAG_WARP           0x00800000
#define MATERIAL_FLAG_FLOWING        0x00400000
#define MATERIAL_FLAG_DOUBLE_SIDED   0x00200000
#define MATERIAL_FLAG_SHELL_RED      0x00100000
#define MATERIAL_FLAG_SHELL_GREEN    0x00080000
#define MATERIAL_FLAG_SHELL_BLUE     0x00040000

#define MATERIAL_LIGHT_STYLE_MASK    0x0003f000
#define MATERIAL_LIGHT_STYLE_SHIFT   12
#define MATERIAL_INDEX_MASK          0x00000fff

#define CHECKERBOARD_FLAG_PRIMARY    1
#define CHECKERBOARD_FLAG_REFLECTION 2
#define CHECKERBOARD_FLAG_REFRACTION 4

#define MEDIUM_NONE  0
#define MEDIUM_WATER 1
#define MEDIUM_SLIME 2
#define MEDIUM_LAVA  3
#define MEDIUM_GLASS 4

#define ENVIRONMENT_NONE 0
#define ENVIRONMENT_STATIC 1
#define ENVIRONMENT_DYNAMIC 2

#define SHADER_MAX_ENTITIES                  1024
#define SHADER_MAX_BSP_ENTITIES              128
#define MAX_LIGHT_SOURCES                    32
#define MAX_LIGHT_STYLES                     64

#define AS_FLAG_OPAQUE          (1 << 0)
#define AS_FLAG_TRANSPARENT     (1 << 1)
#define AS_FLAG_PARTICLES       (1 << 2)
#define AS_FLAG_VIEWER_MODELS   (1 << 3)
#define AS_FLAG_VIEWER_WEAPON   (1 << 4)
#define AS_FLAG_EXPLOSIONS      (1 << 5)
#define AS_FLAG_SKY             (1 << 6)
#define AS_FLAG_CUSTOM_SKY      (1 << 7)
#define AS_FLAG_EVERYTHING      0xFF

#define AS_INSTANCE_FLAG_DYNAMIC        (1 << 23)
#define AS_INSTANCE_FLAG_SKY            (1 << 22)
#define AS_INSTANCE_MASK_OFFSET (AS_INSTANCE_FLAG_SKY - 1)

#define SBT_RGEN_PRIMARY_RAYS 0
#define SBT_RGEN_REFLECT_REFRACT1 1
#define SBT_RGEN_REFLECT_REFRACT2 2
#define SBT_RGEN_DIRECT_LIGHTING 3
#define SBT_RGEN_DIRECT_LIGHTING_CAUSTICS 4
#define SBT_RGEN_INDIRECT_LIGHTING_FIRST 5
#define SBT_RGEN_INDIRECT_LIGHTING_SECOND 6
#define SBT_RMISS_PATH_TRACER 7
#define SBT_RMISS_SHADOW 8
#define SBT_RCHIT_OPAQUE 9
#define SBT_RAHIT_PARTICLE 10
#define SBT_RAHIT_BEAM 11
#define SBT_RAHIT_EXPLOSION 12
#define SBT_RAHIT_SPRITE 13
#define SBT_RCHIT_EMPTY 14

#endif /*_CONSTANTS_H_*/
