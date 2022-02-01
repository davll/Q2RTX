#
#
#

SET(SRC_BASEQ2
	baseq2/g_ai.c
	baseq2/g_chase.c
	baseq2/g_cmds.c
	baseq2/g_combat.c
	baseq2/g_func.c
	baseq2/g_items.c
	baseq2/g_main.c
	baseq2/g_misc.c
	baseq2/g_monster.c
	baseq2/g_phys.c
	baseq2/g_ptrs.c
	baseq2/g_save.c
	baseq2/g_spawn.c
	baseq2/g_svcmds.c
	baseq2/g_target.c
	baseq2/g_trigger.c
	baseq2/g_turret.c
	baseq2/g_utils.c
	baseq2/g_weapon.c
	baseq2/m_actor.c
	baseq2/m_berserk.c
	baseq2/m_boss2.c
	baseq2/m_boss3.c
	baseq2/m_boss31.c
	baseq2/m_boss32.c
	baseq2/m_brain.c
	baseq2/m_chick.c
	baseq2/m_flipper.c
	baseq2/m_float.c
	baseq2/m_flyer.c
	baseq2/m_gladiator.c
	baseq2/m_gunner.c
	baseq2/m_hover.c
	baseq2/m_infantry.c
	baseq2/m_insane.c
	baseq2/m_medic.c
	baseq2/m_move.c
	baseq2/m_mutant.c
	baseq2/m_parasite.c
	baseq2/m_soldier.c
	baseq2/m_supertank.c
	baseq2/m_tank.c
	baseq2/p_client.c
	baseq2/p_hud.c
	baseq2/p_trail.c
	baseq2/p_view.c
	baseq2/p_weapon.c
)

SET(HEADERS_BASEQ2
	baseq2/g_local.h
	baseq2/g_ptrs.h
	baseq2/m_actor.h
	baseq2/m_berserk.h
	baseq2/m_boss2.h
	baseq2/m_boss31.h
	baseq2/m_boss32.h
	baseq2/m_brain.h
	baseq2/m_chick.h
	baseq2/m_flipper.h
	baseq2/m_float.h
	baseq2/m_flyer.h
	baseq2/m_gladiator.h
	baseq2/m_gunner.h
	baseq2/m_hover.h
	baseq2/m_infantry.h
	baseq2/m_insane.h
	baseq2/m_medic.h
	baseq2/m_mutant.h
	baseq2/m_parasite.h
	baseq2/m_player.h
	baseq2/m_rider.h
	baseq2/m_soldier.h
	baseq2/m_supertank.h
	baseq2/m_tank.h
)


SET(SRC_CLIENT
	client/ascii.c
	client/console.c
	client/cin.c
	client/crc.c
	client/demo.c
	client/download.c
	client/effects.c
	client/entities.c
	client/gtv.c
	client/input.c
	client/keys.c
	client/locs.c
	client/main.c
	client/newfx.c
#	client/null.c
	client/parse.c
	client/precache.c
	client/predict.c
	client/refresh.c
	client/screen.c
	client/tent.c
	client/view.c
	client/ui/demos.c
	client/ui/menu.c
	client/ui/playerconfig.c
	client/ui/playermodels.c
	client/ui/script.c
	client/ui/servers.c
	client/ui/ui.c
	client/sound/dma.c
	client/sound/al.c
	client/sound/main.c
	client/sound/mem.c
	client/sound/mix.c
	client/sound/ogg.c
#	client/sound/qal/fixed.c
	client/sound/qal/dynamic.c
)

SET(SRC_CLIENT_HTTP
	client/http.c
)

SET(HEADERS_CLIENT
	client/client.h
	client/ui/ui.h
	client/sound/sound.h
	client/sound/qal/dynamic.h
	client/sound/qal/fixed.h
)

SET(SRC_SERVER
	server/commands.c
	server/entities.c
	server/game.c
	server/init.c
	server/main.c
	server/mvd.c
	server/send.c
	server/user.c
	server/world.c
	server/mvd/client.c
	server/mvd/parse.c
	server/mvd/game.c
	server/save.c
)

SET(HEADERS_SERVER
	server/server.h
)

SET(SRC_COMMON
	common/bsp.c
	common/cmd.c
	common/cmodel.c
	common/common.c
	common/cvar.c
	common/error.c
	common/field.c
	common/fifo.c
	common/files.c
	common/math.c
	common/mdfour.c
	common/msg.c
	common/pmove.c
	common/prompt.c
	common/sizebuf.c
#	common/tests.c
	common/utils.c
	common/zone.c
	common/net/chan.c
	common/net/net.c
)

SET(HEADERS_COMMON
	common/net/inet_ntop.h
	common/net/inet_pton.h
	common/net/win.h
)

SET(SRC_REFRESH
	refresh/images.c
	refresh/models.c
	refresh/model_iqm.c
	refresh/stb/stb.c
)


SET(SRC_GL
	refresh/gl/draw.c
	refresh/gl/hq2x.c
	refresh/gl/texture.c
	refresh/gl/main.c
	refresh/gl/mesh.c
	refresh/gl/models.c
	refresh/gl/sky.c
	refresh/gl/state.c
	refresh/gl/surf.c
	refresh/gl/tess.c
	refresh/gl/world.c
	refresh/gl/qgl.c
	refresh/gl/legacy.c
	refresh/gl/shader.c
)

SET(HEADERS_GL
	refresh/gl/arbfp.h
	refresh/gl/gl.h
)

SET(SRC_SHARED
	shared/m_flash.c
	shared/shared.c
)

SET(SRC_LINUX
	unix/hunk.c
	unix/system.c
	unix/tty.c
)

SET(SRC_LINUX_CLIENT
	unix/sound.c
	unix/video.c
)

SET(SRC_WINDOWS
	windows/ac.c
	windows/debug.c
	windows/hunk.c
	windows/system.c
)

SET(SRC_WINDOWS_CLIENT
	windows/wave.c
	unix/video.c
)

	#windows/client.c
	#windows/dinput.c
	#windows/dsound.c
	#windows/glimp.c
	#windows/swimp.c
	#windows/wgl.c
	#unix/sdl2/sound.c

SET(HEADERS_WINDOWS
	windows/wgl.h
	windows/glimp.h
	windows/client.h
	windows/threads/threads.h
)

SET(SRC_VKPT
	refresh/vkpt/asvgf.c
	refresh/vkpt/bloom.c
	refresh/vkpt/bsp_mesh.c
	refresh/vkpt/draw.c
	refresh/vkpt/fog.c
	refresh/vkpt/cameras.c
	refresh/vkpt/freecam.c
	refresh/vkpt/fsr.c
	refresh/vkpt/main.c
	refresh/vkpt/material.c
	refresh/vkpt/matrix.c
	refresh/vkpt/mgpu.c
	refresh/vkpt/models.c
	refresh/vkpt/path_tracer.c
	refresh/vkpt/physical_sky.c
	refresh/vkpt/precomputed_sky.c
	refresh/vkpt/profiler.c
	refresh/vkpt/shadow_map.c
	refresh/vkpt/textures.c
	refresh/vkpt/tone_mapping.c
	refresh/vkpt/transparency.c
	refresh/vkpt/uniform_buffer.c
	refresh/vkpt/vertex_buffer.c
	refresh/vkpt/vk_util.c
	refresh/vkpt/buddy_allocator.c
	refresh/vkpt/device_memory_allocator.c
	refresh/vkpt/god_rays.c
	refresh/vkpt/conversion.c
)

SET(HEADERS_VKPT
	refresh/vkpt/vkpt.h
	refresh/vkpt/vk_util.h
	refresh/vkpt/buddy_allocator.h
	refresh/vkpt/device_memory_allocator.h
	refresh/vkpt/fog.h
	refresh/vkpt/cameras.h
	refresh/vkpt/material.h
	refresh/vkpt/physical_sky.h
	refresh/vkpt/precomputed_sky.h
	refresh/vkpt/conversion.h
)

set(SHADERS_VKPT
	refresh/vkpt/shader/animate_materials.comp
	refresh/vkpt/shader/god_rays_filter.comp
	refresh/vkpt/shader/god_rays.comp
	refresh/vkpt/shader/bloom_composite.comp
	refresh/vkpt/shader/bloom_blur.comp
	refresh/vkpt/shader/bloom_downscale.comp
	refresh/vkpt/shader/compositing.comp
	refresh/vkpt/shader/checkerboard_interleave.comp
	refresh/vkpt/shader/asvgf_atrous.comp
	refresh/vkpt/shader/asvgf_gradient_atrous.comp
	refresh/vkpt/shader/asvgf_gradient_img.comp
	refresh/vkpt/shader/asvgf_gradient_reproject.comp
	refresh/vkpt/shader/asvgf_lf.comp
	refresh/vkpt/shader/asvgf_taau.comp
	refresh/vkpt/shader/asvgf_temporal.comp
	refresh/vkpt/shader/instance_geometry.comp
	refresh/vkpt/shader/normalize_normal_map.comp
	refresh/vkpt/shader/tone_mapping_histogram.comp
	refresh/vkpt/shader/tone_mapping_curve.comp
    refresh/vkpt/shader/tone_mapping_apply.comp
	refresh/vkpt/shader/physical_sky.comp
	refresh/vkpt/shader/physical_sky_space.comp
	refresh/vkpt/shader/shadow_map.vert
	refresh/vkpt/shader/sky_buffer_resolve.comp
	refresh/vkpt/shader/stretch_pic.frag
	refresh/vkpt/shader/stretch_pic.vert
	refresh/vkpt/shader/final_blit_lanczos.frag
	refresh/vkpt/shader/final_blit.vert
	refresh/vkpt/shader/fsr_easu_fp16.comp
	refresh/vkpt/shader/fsr_easu_fp32.comp
	refresh/vkpt/shader/fsr_rcas_fp16.comp
	refresh/vkpt/shader/fsr_rcas_fp32.comp
)

set(SHADERS_RTX
	refresh/vkpt/shader/primary_rays.rgen
	refresh/vkpt/shader/direct_lighting.rgen
	refresh/vkpt/shader/indirect_lighting.rgen
	refresh/vkpt/shader/path_tracer.rchit
	refresh/vkpt/shader/path_tracer.rmiss
	refresh/vkpt/shader/path_tracer_masked.rahit
	refresh/vkpt/shader/path_tracer_particle.rahit
	refresh/vkpt/shader/path_tracer_sprite.rahit
	refresh/vkpt/shader/path_tracer_beam.rahit
	refresh/vkpt/shader/path_tracer_beam.rint
	refresh/vkpt/shader/path_tracer_explosion.rahit
	refresh/vkpt/shader/reflect_refract.rgen
)

set(SHADERS_VKPT_DEPS
    refresh/vkpt/shader/asvgf.glsl
    refresh/vkpt/shader/brdf.glsl
    refresh/vkpt/shader/constants.h
    refresh/vkpt/shader/fsr_easu.glsl
    refresh/vkpt/shader/fsr_rcas.glsl
    refresh/vkpt/shader/fsr_utils.glsl
    refresh/vkpt/shader/global_textures.h
    refresh/vkpt/shader/global_ubo.h
    refresh/vkpt/shader/god_rays_shared.h
    refresh/vkpt/shader/light_lists.h
    refresh/vkpt/shader/path_tracer_rgen.h
    refresh/vkpt/shader/path_tracer.h
    refresh/vkpt/shader/path_tracer_hit_shaders.h
    refresh/vkpt/shader/path_tracer_transparency.glsl
    refresh/vkpt/shader/precomputed_sky.glsl
    refresh/vkpt/shader/precomputed_sky_params.h
    refresh/vkpt/shader/projection.glsl
    refresh/vkpt/shader/sky.h
    refresh/vkpt/shader/tiny_encryption_algorithm.h
    refresh/vkpt/shader/tone_mapping_utils.glsl
    refresh/vkpt/shader/utils.glsl
    refresh/vkpt/shader/vertex_buffer.h
    refresh/vkpt/shader/water.glsl)

# ======================================================================
# VKPT and RTX Shaders
# ======================================================================

# Only build shaders in 64-bit builds, because the client
# is also only built for 64-bit systems.
IF(CONFIG_VKPT_RENDERER)
	set (shader_outdir "${CMAKE_BINARY_DIR}/shader_vkpt")
	set (shader_pack "${Q2RTX_OUTPUT_DIR}/baseq2/vkpt_shaders.pkz")
	set (shader_pack_dir "${Q2RTX_OUTPUT_DIR}/baseq2")

	function(compile_vkpt_shader)
		set(options "")
		set(oneValueArgs SOURCE_FILE OUTPUT_FILE_NAME OUTPUT_FILE_LIST OUTPUT_SUFFIX STAGE)
		set(multiValueArgs DEFINES INCLUDES)
		cmake_parse_arguments(params "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})
		if (NOT params_SOURCE_FILE)
			message(FATAL_ERROR "compile_vk_shader: SOURCE_FILE argument missing")
		endif()
		if (NOT params_OUTPUT_FILE_LIST)
			message(FATAL_ERROR "compile_vk_shader: OUTPUT_FILE_LIST argument missing")
		endif()
		set(src_file "${CMAKE_CURRENT_SOURCE_DIR}/${params_SOURCE_FILE}")
		if (params_OUTPUT_FILE_NAME)
			set(output_file_name ${params_OUTPUT_FILE_NAME})
		else()
			get_filename_component(output_file_name ${src_file} NAME)
		endif()
		if (params_OUTPUT_SUFFIX)
			set(output_file_name "${output_file_name}${params_OUTPUT_SUFFIX}")
		else()
			set(output_file_name "${output_file_name}.spv")
		endif()
		if (params_STAGE)
			set(stage -S ${params_STAGE})
		else()
			set(stage)
		endif()
		set_source_files_properties(${src_file} PROPERTIES VS_TOOL_OVERRIDE "None")
		set (out_file "${shader_outdir}/${output_file_name}")
		set(glslang_command_line
				${stage}
				--target-env vulkan1.2
				--quiet
				-DVKPT_SHADER
				-V
				${params_DEFINES}
				${params_INCLUDES}
				"${src_file}"
				-o "${out_file}")
		add_custom_command(OUTPUT ${out_file}
						DEPENDS ${src_file}
						DEPENDS ${SHADER_SOURCE_DEPENDENCIES}
						MAIN_DEPENDENCY ${src_file}
						COMMAND ${CMAKE_COMMAND} -E make_directory ${shader_outdir}
						COMMAND ${GLSLANG_COMPILER} ${glslang_command_line})
		
		set(${params_OUTPUT_FILE_LIST} ${${params_OUTPUT_FILE_LIST}} ${out_file} PARENT_SCOPE)
	endfunction()

	# build RTX shaders
	set(rtx_shader_bytecode)
	foreach(shader_file ${SHADERS_RTX})
		get_filename_component(shader_ext ${shader_file} EXT)
		compile_vkpt_shader(
			SOURCE_FILE "${shader_file}"
			OUTPUT_FILE_LIST rtx_shader_bytecode
			OUTPUT_SUFFIX ".pipeline.spv")
		if (shader_ext STREQUAL ".rgen")
			compile_vkpt_shader(
				SOURCE_FILE "${shader_file}"
				OUTPUT_FILE_LIST rtx_shader_bytecode
				OUTPUT_SUFFIX ".query.spv"
				DEFINES "-DKHR_RAY_QUERY"
				STAGE "comp")
		endif()
	endforeach()

    # build VKPT shaders
	set(vkpt_shader_bytecode)
	foreach(shader_file ${SHADERS_VKPT})
		compile_vkpt_shader(
			SOURCE_FILE "${shader_file}"
			INCLUDES "-I${CMAKE_CURRENT_SOURCE_DIR}/refresh/vkpt/fsr"
			OUTPUT_FILE_LIST vkpt_shader_bytecode)
	endforeach()

	# generate compressed pack file
	add_custom_command(OUTPUT "${shader_pack}"
		COMMAND ${CMAKE_COMMAND} -E make_directory "${shader_pack_dir}"
		COMMAND ${CMAKE_COMMAND} -E tar cvf "${shader_pack}" --format=zip
			${vkpt_shader_bytecode} ${rtx_shader_bytecode}
		WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
		DEPENDS ${vkpt_shader_bytecode} ${rtx_shader_bytecode})

	# add target
	add_custom_target(vkpt_shaders
		DEPENDS "${shader_pack}")
ENDIF()

# Embed version number
ADD_DEFINITIONS(-DVERSION_MAJOR=${Q2RTX_VERSION_MAJOR})
ADD_DEFINITIONS(-DVERSION_MINOR=${Q2RTX_VERSION_MINOR})
ADD_DEFINITIONS(-DVERSION_POINT=${Q2RTX_VERSION_POINT})
ADD_DEFINITIONS(-DVERSION_SHA=${Q2RTX_VERSION_SHA})
ADD_DEFINITIONS(-DVERSION_BRANCH=${Q2RTX_VERSION_BRANCH})

ADD_DEFINITIONS(-DHAVE_CONFIG_H=1)

IF(WIN32)
	ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ENDIF()

# ======================================================================
# Baseq2 game module
# ======================================================================

ADD_LIBRARY(baseq2 SHARED
	${SRC_BASEQ2}
	${HEADERS_BASEQ2}
	${SRC_SHARED})

SET_TARGET_PROPERTIES(baseq2
    PROPERTIES
	OUTPUT_NAME "game-${Q2RTX_CPUSTRING}"
    LIBRARY_OUTPUT_DIRECTORY "${Q2RTX_OUTPUT_DIR}/baseq2"
    LIBRARY_OUTPUT_DIRECTORY_DEBUG "${Q2RTX_OUTPUT_DIR}/baseq2"
    LIBRARY_OUTPUT_DIRECTORY_RELEASE "${Q2RTX_OUTPUT_DIR}/baseq2"
    LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO "${Q2RTX_OUTPUT_DIR}/baseq2"
    LIBRARY_OUTPUT_DIRECTORY_MINSIZEREL "${Q2RTX_OUTPUT_DIR}/baseq2"
    RUNTIME_OUTPUT_DIRECTORY "${Q2RTX_OUTPUT_DIR}/baseq2"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${Q2RTX_OUTPUT_DIR}/baseq2"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${Q2RTX_OUTPUT_DIR}/baseq2"
    RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${Q2RTX_OUTPUT_DIR}/baseq2"
    RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${Q2RTX_OUTPUT_DIR}/baseq2"
    PREFIX ""
    DEBUG_POSTFIX "")

TARGET_INCLUDE_DIRECTORIES(baseq2 PRIVATE
	"${CMAKE_SOURCE_DIR}/inc")

IF(WIN32)
	TARGET_SOURCES(baseq2 PRIVATE
		windows/res/baseq2.rc)
	IF(MSVC)
		TARGET_COMPILE_OPTIONS(baseq2 PRIVATE /wd4005 /wd4996)
	ENDIF()
ELSE()
ENDIF()

IF(TARGET vkpt_shaders)
	add_dependencies(baseq2 vkpt_shaders)
ENDIF()

# --------- config files --------------------

add_custom_command(TARGET baseq2
	POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_SOURCE_DIR}/baseq2/pt_toggles.cfg"
        "${CMAKE_SOURCE_DIR}/baseq2/q2rtx.cfg"
        "${CMAKE_SOURCE_DIR}/baseq2/q2rtx.menu"
        "${Q2RTX_OUTPUT_DIR}/baseq2")

# --------- copy asset files --------------------------

SET(ID_ASSETS
	"players"
	"players.pkz"
	"video"
	"video.pkz"
	"q2rtx_assets.pkz"
	"blue_noise.pkz"
	"pak0.pak"
	"pak1.pak"
	"pak2.pak")

FOREACH(file_path ${ID_ASSETS})
	IF(EXISTS "${CMAKE_SOURCE_DIR}/baseq2/${file_path}")
		add_custom_command(TARGET baseq2
			POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_if_different
				"${CMAKE_SOURCE_DIR}/baseq2/${file_path}"
				"${Q2RTX_OUTPUT_DIR}/baseq2")
	ENDIF()
ENDFOREACH()

# --------- Package asset files --------------------------

if(CONFIG_BUILD_RTX_ASSETS)
	set(ASSET_SOURCES
		${CMAKE_SOURCE_DIR}/baseq2/env
		${CMAKE_SOURCE_DIR}/baseq2/maps
		${CMAKE_SOURCE_DIR}/baseq2/models
		${CMAKE_SOURCE_DIR}/baseq2/overrides
		${CMAKE_SOURCE_DIR}/baseq2/pics
		${CMAKE_SOURCE_DIR}/baseq2/sound
		${CMAKE_SOURCE_DIR}/baseq2/sprites
		${CMAKE_SOURCE_DIR}/baseq2/textures
		${CMAKE_SOURCE_DIR}/baseq2/materials
		${CMAKE_SOURCE_DIR}/baseq2/prefetch.txt
		${CMAKE_SOURCE_DIR}/baseq2/sky_clusters.txt
	)

	set(ASSET_FILES)
	foreach(asset_path ${ASSET_SOURCES})
		if(IS_DIRECTORY ${asset_path})
			file(GLOB_RECURSE files "${asset_path}/*")
			set(ASSET_FILES ${ASSET_FILES} ${files})
		else()
			set(ASSET_FILES ${ASSET_FILES} ${asset_path})
		endif()
	endforeach()

	set(ASSET_OUTPUT "${Q2RTX_OUTPUT_DIR}/baseq2/q2rtx_assets.pkz")

	add_custom_command(OUTPUT "${ASSET_OUTPUT}"
		COMMAND ${CMAKE_COMMAND} -E make_directory "${Q2RTX_OUTPUT_DIR}/baseq2"
		COMMAND ${CMAKE_COMMAND} -E tar cvf "${ASSET_OUTPUT}" --format=zip
			${ASSET_SOURCES}
		DEPENDS ${ASSET_FILES}
		WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/baseq2"
	)

	add_custom_target(rtx_assets ALL DEPENDS "${ASSET_OUTPUT}")
endif()

# ======================================================================
# Client
# ======================================================================

ADD_EXECUTABLE(client
	${SRC_CLIENT} ${HEADERS_CLIENT} 
	${SRC_COMMON} ${HEADERS_COMMON} 
	${SRC_REFRESH}
	${SRC_SHARED} 
	${SRC_SERVER} ${HEADERS_SERVER})

IF(WIN32)
	SET_TARGET_PROPERTIES(client
		PROPERTIES
		WIN32_EXECUTABLE TRUE)
	TARGET_SOURCES(client PRIVATE
		${SRC_WINDOWS_CLIENT}
		${SRC_WINDOWS} ${HEADERS_WINDOWS}
		windows/res/q2rtx.rc)
ELSE()
	TARGET_SOURCES(client PRIVATE
		${SRC_LINUX} ${SRC_LINUX_CLIENT})
ENDIF()

TARGET_COMPILE_DEFINITIONS(client PRIVATE
	USE_SERVER=1
	USE_CLIENT=1)

IF(CONFIG_USE_CURL)
	TARGET_SOURCES(client PRIVATE
		${SRC_CLIENT_HTTP})
	TARGET_COMPILE_DEFINITIONS(client PRIVATE
		USE_CURL=1)
	TARGET_LINK_LIBRARIES(client PRIVATE
		CURL::libcurl)
ENDIF()

IF (CONFIG_GL_RENDERER)
	TARGET_SOURCES(client PRIVATE
		${SRC_GL} ${HEADERS_GL})
	TARGET_COMPILE_DEFINITIONS(client PRIVATE
		REF_GL=1
		USE_REF=1)
ENDIF()

IF (CONFIG_VKPT_RENDERER)
	TARGET_SOURCES(client PRIVATE
		${SRC_VKPT} ${HEADERS_VKPT})
	TARGET_INCLUDE_DIRECTORIES(client PRIVATE
		${VULKAN_INCLUDE})
	TARGET_COMPILE_DEFINITIONS(client PRIVATE
		REF_VKPT=1
		USE_REF=1)
	IF (CONFIG_VKPT_ENABLE_DEVICE_GROUPS)
		TARGET_COMPILE_DEFINITIONS(client PRIVATE
			VKPT_DEVICE_GROUPS)
	ENDIF()
	if (CONFIG_VKPT_ENABLE_IMAGE_DUMPS)
		TARGET_COMPILE_DEFINITIONS(client PRIVATE
			VKPT_IMAGE_DUMPS)
	ENDIF()
	TARGET_LINK_LIBRARIES(client PRIVATE ${VULKAN_LIBRARY})
ENDIF()

TARGET_INCLUDE_DIRECTORIES(client PRIVATE ../inc)

SET_TARGET_PROPERTIES(client
	PROPERTIES
	OUTPUT_NAME "q2rtx"
	RUNTIME_OUTPUT_DIRECTORY "${Q2RTX_OUTPUT_DIR}"
	RUNTIME_OUTPUT_DIRECTORY_DEBUG "${Q2RTX_OUTPUT_DIR}"
	RUNTIME_OUTPUT_DIRECTORY_RELEASE "${Q2RTX_OUTPUT_DIR}"
	RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${Q2RTX_OUTPUT_DIR}"
	RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${Q2RTX_OUTPUT_DIR}"
	DEBUG_POSTFIX "")

TARGET_LINK_LIBRARIES(client PRIVATE
	OpenAL::OpenAL
	stb
	tinyobjloader
	SDL2::SDL2
	SDL2::SDL2main
	ZLIB::ZLIB)

IF(WIN32)
	TARGET_LINK_LIBRARIES(client PRIVATE
		winmm
		ws2_32)

	SET_TARGET_PROPERTIES(client PROPERTIES
		VS_DEBUGGER_WORKING_DIRECTORY "${Q2RTX_OUTPUT_DIR}")

	IF(MSVC)
		TARGET_INCLUDE_DIRECTORIES(client PRIVATE
			"${CMAKE_SOURCE_DIR}/extern/msvc")
		TARGET_COMPILE_OPTIONS(client PRIVATE /wd4005 /wd4996)
	ENDIF()
ELSE()
ENDIF()

# ======================================================================
# Server
# ======================================================================

ADD_EXECUTABLE(server
	${SRC_COMMON} ${HEADERS_COMMON} 
	${SRC_SHARED} 
	${SRC_SERVER} ${HEADERS_SERVER}
	server/ac.c
	client/null.c)

IF(WIN32)
	TARGET_SOURCES(server PRIVATE
		${SRC_WINDOWS} ${HEADERS_WINDOWS}
		windows/res/q2rtxded.rc)
ELSE()
	TARGET_SOURCES(server PRIVATE
		${SRC_LINUX})
ENDIF()

TARGET_COMPILE_DEFINITIONS(server PRIVATE
	USE_SERVER=1
	USE_CLIENT=0)

TARGET_LINK_LIBRARIES(server PRIVATE
	ZLIB::ZLIB)

TARGET_INCLUDE_DIRECTORIES(server PRIVATE
	"${CMAKE_SOURCE_DIR}/inc")

SET_TARGET_PROPERTIES(server PROPERTIES
	OUTPUT_NAME "q2rtxded"
    RUNTIME_OUTPUT_DIRECTORY "${Q2RTX_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${Q2RTX_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${Q2RTX_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${Q2RTX_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${Q2RTX_OUTPUT_DIR}"
    DEBUG_POSTFIX "")

IF(WIN32)
	TARGET_LINK_LIBRARIES(server PRIVATE
		winmm
		ws2_32)

	SET_TARGET_PROPERTIES(server PROPERTIES
		VS_DEBUGGER_WORKING_DIRECTORY "${Q2RTX_OUTPUT_DIR}")

	IF(MSVC)
		TARGET_COMPILE_OPTIONS(server PRIVATE /wd4005 /wd4996)
	ENDIF()
ELSE()
	TARGET_LINK_LIBRARIES(server PRIVATE dl rt m pthread)
ENDIF()

# ======================================================================
# Install
# ======================================================================



# ======================================================================

SOURCE_GROUP("baseq2\\sources" FILES ${SRC_BASEQ2})
SOURCE_GROUP("baseq2\\headers" FILES ${HEADERS_BASEQ2})
SOURCE_GROUP("client\\sources" FILES ${SRC_CLIENT})
SOURCE_GROUP("client\\headers" FILES ${HEADERS_CLIENT})
SOURCE_GROUP("server\\sources" FILES ${SRC_SERVER})
SOURCE_GROUP("server\\headers" FILES ${HEADERS_SERVER})
SOURCE_GROUP("common\\sources" FILES ${SRC_COMMON})
SOURCE_GROUP("common\\headers" FILES ${HEADERS_COMMON})
SOURCE_GROUP("refresh\\sources" FILES ${SRC_REFRESH} ${SRC_VKPT})
SOURCE_GROUP("refresh\\headers" FILES ${HEADERS_VKPT})
SOURCE_GROUP("shared\\sources" FILES ${SRC_SHARED})
SOURCE_GROUP("windows\\sources" FILES ${SRC_WINDOWS})
SOURCE_GROUP("windows\\headers" FILES ${HEADERS_WINDOWS})
SOURCE_GROUP("refresh\\shaders\\vkpt" FILES ${SHADERS_VKPT} ${SHADERS_RTX})
