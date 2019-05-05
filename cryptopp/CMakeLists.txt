#variant test
#crypto-aes
set(cryptopp_src
        arc4.cpp
        )

add_library( cryptopp STATIC
        ${cryptopp_src})


target_include_directories(cryptopp PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR})

#

set(dump2def_src
       TestPrograms/dump2def.cxx)
add_executable(dump2def ${dump2def_src})
target_include_directories(dump2def PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR})

