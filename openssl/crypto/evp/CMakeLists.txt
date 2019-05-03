include_directories(../../include)

add_library(
  evp

  OBJECT

        bio_b64.c

)


#add_executable(
#  evp_test
#
#  evp_test.cc
#
#  $<TARGET_OBJECTS:test_support>
#)
#
#add_executable(
#  pbkdf_test
#
#  pbkdf_test.cc
#
#  $<TARGET_OBJECTS:test_support>
#)
#
#target_link_libraries(evp_test crypto)
#target_link_libraries(pbkdf_test crypto)
#add_dependencies(all_tests evp_test pbkdf_test)
