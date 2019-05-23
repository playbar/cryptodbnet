include_directories(../include)

add_library(
        md4

        OBJECT

        md4_dgst.c
        md4_one.c
)
