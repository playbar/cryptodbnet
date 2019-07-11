cmake_minimum_required(VERSION 3.4.1)

project(iconv LANGUAGES C)

add_definitions(-DO_BINARY)
add_definitions(-DLIBICONV_PLUG)


file(GLOB GIT_SCR_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/src/iconv.c)

file(GLOB GIT_SRCLIB_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/srclib/iconv.c)

add_library(iconv STATIC
        ${GIT_SCR_SRC}
        ${GIT_SRCLIB_SRC}
        )

target_include_directories(iconv PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/srclib
)
