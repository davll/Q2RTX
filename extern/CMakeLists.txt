#
# External source code
#

add_library(stb INTERFACE)
target_include_directories(stb INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/stb)

add_library(tinyobjloader INTERFACE)
target_include_directories(tinyobjloader INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/tinyobjloader-c)
