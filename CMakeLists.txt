cmake_minimum_required(VERSION 3.6)
project(crypto)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fvisibility=hidden -std=c++14" )

set(CMAKE_CXX_STANDARD 14)

message(${CMAKE_CXX_COMPILER_ID})

#add_subdirectory(aes)
#add_subdirectory(boringssl)
#add_subdirectory(cryptopp)
add_subdirectory(curl)
add_subdirectory(openssl)


MESSAGE("make files end")




#target_link_libraries()