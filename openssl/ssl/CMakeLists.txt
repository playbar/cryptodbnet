include_directories(../include)

file(GLOB SSL_SRC ./*.c)

add_library(ssl STATIC
    ${SSL_SRC}
)

target_link_libraries(ssl crypto)


