include_directories(../include)
include_directories(../../)

file(GLOB BIO_SRC ./*.c)

add_library(
  bio

  OBJECT

  ${BIO_SRC}

)

#add_executable(
#  bio_test
#
#  bio_test.cc
#
#  $<TARGET_OBJECTS:test_support>
#)
#
#target_link_libraries(bio_test crypto)
#if (WIN32)
#  target_link_libraries(bio_test ws2_32)
#endif()
#add_dependencies(all_tests bio_test)

