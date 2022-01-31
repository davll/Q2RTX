cmake_minimum_required (VERSION 3.9)
cmake_policy(SET CMP0069 NEW)

project(quake2-RTX)
set(Q2RTX_VERSION_MAJOR 1)
set(Q2RTX_VERSION_MINOR 6)
set(Q2RTX_VERSION_POINT 0)

# get short-hash
execute_process(
	COMMAND git rev-parse --short HEAD
	WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
	OUTPUT_VARIABLE Q2RTX_VERSION_SHA
	OUTPUT_STRIP_TRAILING_WHITESPACE
)

# get branch name
execute_process(
    COMMAND git rev-parse --abbrev-ref HEAD
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    OUTPUT_VARIABLE Q2RTX_VERSION_BRANCH
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

# Config options
OPTION(CONFIG_GL_RENDERER "Enable GL renderer" ON)
# OPTION(CONFIG_VK_RENDERER "Enable VK renderer" ON)
OPTION(CONFIG_DX12_RENDERER "Enable DX12 renderer" ${WIN32})
OPTION(CONFIG_VKPT_RENDERER "Enable VKPT renderer" ON)
OPTION(CONFIG_VKPT_ENABLE_DEVICE_GROUPS "Enable device groups (multi-gpu) support" ON)
OPTION(CONFIG_VKPT_ENABLE_IMAGE_DUMPS "Enable image dumping functionality" OFF)
# OPTION(CONFIG_DXR_RENDERER "Enable DXR renderer" ON)
OPTION(CONFIG_USE_CURL "Use CURL for HTTP support" ON)
OPTION(CONFIG_BUILD_RTX_ASSETS "Pack RTX assets" OFF)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# --------- Dependencies -------------------------------------

IF(MSVC)
    # Enable multi-processor compilation when using MSBuild
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /MP")
ELSEIF(CMAKE_SYSTEM_PROCESSOR STREQUAL "AMD64" OR CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -msse -mfpmath=sse")
ENDIF()

add_subdirectory(extern)

if(CONFIG_USE_CURL)
    find_package(CURL CONFIG REQUIRED)
endif()
find_package(OpenAL CONFIG REQUIRED)
find_package(SDL2 CONFIG REQUIRED)
find_package(ZLIB REQUIRED)

find_path(VULKAN_INCLUDE "vulkan/vulkan.h"
    HINTS "$ENV{VULKAN_SDK}/include"
    REQUIRED)
find_library(VULKAN_LIBRARY vulkan vulkan-1
    HINTS "$ENV{VULKAN_SDK}/lib"
    REQUIRED)

find_program(GLSLANG_COMPILER "glslangValidator"
    HINTS "$ENV{VULKAN_SDK}/bin"
    REQUIRED)

# --------- Build Project -------------------------------------

if (CMAKE_SIZEOF_VOID_P EQUAL 8)
    set( IS_64_BIT 1 )
endif ()

IF(CMAKE_SYSTEM_PROCESSOR STREQUAL "aarch64")
	SET(Q2RTX_CPUSTRING "aarch64")
ELSEIF(CMAKE_SYSTEM_PROCESSOR STREQUAL "AMD64" OR CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
	SET(Q2RTX_CPUSTRING "x86_64")
ELSE()
	MESSAGE(FATAL_ERROR "Unsupported CPU")
ENDIF()

IF(WIN32)
    IF(CMAKE_SIZEOF_VOID_P EQUAL 8)
        SET(Q2RTX_BUILDSTRING "Win64")
    ELSE()
        SET(Q2RTX_BUILDSTRING "Win32")
    ENDIF()
ELSE()
    SET(Q2RTX_BUILDSTRING "Linux")
ENDIF()

set(Q2RTX_OUTPUT_DIR "${CMAKE_BINARY_DIR}/q2rtx")

add_subdirectory(src)
