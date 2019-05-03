include_directories(../../include)

add_library(
  x509

  OBJECT

        by_dir.c

)

#add_executable(
#  pkcs7_test
#
#  pkcs7_test.c
#
#  $<TARGET_OBJECTS:test_support>
#)
#
#add_executable(
#  x509_test
#
#  x509_test.cc
#
#  $<TARGET_OBJECTS:test_support>
#)
#
#target_link_libraries(pkcs7_test crypto)
#target_link_libraries(x509_test crypto)
#add_dependencies(all_tests pkcs7_test x509_test)
