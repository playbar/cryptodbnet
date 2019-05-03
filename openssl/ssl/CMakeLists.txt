include_directories(../include)

add_library(
  ssl

  bio_ssl.c
  d1_lib.c

)

target_link_libraries(ssl crypto)

#add_executable(
#  ssl_test
#
#  ssl_test.cc
#
#  $<TARGET_OBJECTS:gtest_main>
#  $<TARGET_OBJECTS:test_support>
#)
#
#target_link_libraries(ssl_test ssl crypto gtest)
#add_dependencies(all_tests ssl_test)
