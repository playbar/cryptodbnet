include_directories(../../include)

add_library(
  asn1

  OBJECT

  a_bitstr.c

)

#add_executable(
#  asn1_test
#
#  asn1_test.cc
#
#  $<TARGET_OBJECTS:test_support>
#)
#
#target_link_libraries(asn1_test crypto)
#add_dependencies(all_tests asn1_test)
