set(dump2def_src
       dump2def.cxx)
add_executable(dump2def ${dump2def_src})
target_include_directories(dump2def PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(dump2def cryptopp-static)
