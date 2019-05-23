include_directories(../../)
include_directories(../include)

file(GLOB CONF_SRC ./*.c)

add_library(
  conf

  OBJECT

  ${CONF_SRC}
)
