include_directories(../../include)

if (${ARCH} STREQUAL "x86_64")
  set(
    EC_ARCH_SOURCES

    p256-x86_64-asm.${ASM_EXT}
  )
endif()

add_library(
  ec

  OBJECT

  ec2_oct.c

  ${EC_ARCH_SOURCES}
)

perlasm(p256-x86_64-asm.${ASM_EXT} asm/p256-x86_64-asm.pl)

#add_executable(
#  example_mul
#
#  example_mul.c
#
#  $<TARGET_OBJECTS:test_support>
#)
#
#add_executable(
#  p256-x86_64_test
#
#  p256-x86_64_test.cc
#
#  $<TARGET_OBJECTS:test_support>
#)
#
#target_link_libraries(example_mul crypto)
#target_link_libraries(p256-x86_64_test crypto)
#add_dependencies(all_tests example_mul p256-x86_64_test)
