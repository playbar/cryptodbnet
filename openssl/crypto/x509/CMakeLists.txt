include_directories(../../)
include_directories(../include)

file(GLOB X509_SRC ./*.c)

add_library(
  x509
  OBJECT
  ${X509_SRC}

)

