cmake_minimum_required(VERSION 3.4.1)

project(iconv LANGUAGES C)

add_definitions(-DO_BINARY)


file(GLOB ICONV_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/src/iconv.c)

file(GLOB ICONV_SRCLIB_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/srclib/*.c)

file(GLOB CHARSET_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/libcharset/lib/localcharset.c)

add_library(libiconv STATIC
        ${ICONV_SRC}
#        ${ICONV_SRCLIB_SRC}
        ${CHARSET_SRC}
        )

target_include_directories(libiconv PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/srclib
)


