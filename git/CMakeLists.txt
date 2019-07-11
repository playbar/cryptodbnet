cmake_minimum_required(VERSION 3.4.1)

project(git LANGUAGES C)


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pthread -O2 -g -W -Wall -Wno-unused-parameter -Wbad-function-cast -Wuninitialized")

add_definitions(-DNO_GETTEXT)
add_definitions(-DUSE_ST_TIMESPEC)
add_definitions(-DETC_GITATTRIBUTES="./gitattributes")
add_definitions(-DETC_GITCONFIG="./gitconfig")
add_definitions(-DFALLBACK_RUNTIME_PREFIX="./runtime")
add_definitions(-DGIT_EXEC_PATH="./")
add_definitions(-DGIT_HTML_PATH="./html")
add_definitions(-DGIT_MAN_PATH="./man")
add_definitions(-DGIT_INFO_PATH="./info")
add_definitions(-DGIT_HOST_CPU="host_cpu")
add_definitions(-DPAGER_ENV="LESS=FRX LV=-c")
add_definitions(-DGIT_VERSION="2.22.0")
add_definitions(-DGIT_BUILT_FROM_COMMIT="commit")
add_definitions(-DGIT_USER_AGENT="git/${GIT_VERSION}")
add_definitions(-DLIBICONV_PLUG)

#set(ETC_GITATTRIBUTES  /etc/gitattributes)

file(GLOB GIT_BUILTIN_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/builtin/*.c)

file(GLOB GIT_COMPAT_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/compat/obstack.c)

file(GLOB GIT_EWAH_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/ewah/*.c)

file(GLOB GIT_NEGOTIATOR_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/negotiator/*.c)

file(GLOB GIT_REFS_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/refs/*.c)


file(GLOB GIT_TRACE2_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/trace2/*.c)

file(GLOB GIT_VCSSVN_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/vcs-svn/*.c)

file(GLOB GIT_XDIFF_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/xdiff/*.c)

file(GLOB GIT_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/*.c)

add_executable(git
        ${GIT_SRC}
        ${GIT_BUILTIN_SRC}
        ${GIT_COMPAT_SRC}
        ${GIT_EWAH_SRC}
        ${GIT_NEGOTIATOR_SRC}
        ${GIT_REFS_SRC}
        ${GIT_TRACE2_SRC}
        ${GIT_VCSSVN_SRC}
        ${GIT_XDIFF_SRC}
        )

target_include_directories(git PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

target_link_libraries(git
        ssl
        libcurl
        iconv
)

#####
