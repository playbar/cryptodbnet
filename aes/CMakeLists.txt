#variant test
#crypto-aes
set(crypto_aes_src
        aes/main.c
        aes/aes.c)
add_executable(crypto_aes ${crypto_aes_src})
target_include_directories(crypto_aes PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/aes)

#crypto-aes_2
set(crypto_aes_2_src
        aes_2/aes.c
        aes_2/base64.c
        aes_2/main.cpp)
add_executable(crypto_aes_2 ${crypto_aes_2_src})
target_include_directories(crypto_aes_2 PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/aes_2)


#base64_test
set(base64_test_src
        base64/test.c
        base64/base64.c)
add_executable(base64_test ${base64_test_src})
target_include_directories(base64_test PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/base64)

#base64_test
set(base64_src
        base64/b64f.c
        base64/base64.c)
add_executable(base64 ${base64_src})
target_include_directories(base64 PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/base64)


