cmake_minimum_required(VERSION 3.16)

project(awesome_task)

#Set directories below
set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(HEADERS_DIR ${BASE_DIR}/include)
set(SOURCES_DIR ${BASE_DIR}/src)

add_executable(
        ${PROJECT_NAME}

        ${HEADERS_DIR}/01_whatIsLove.h
        ${HEADERS_DIR}/02_babyDontHurtMe.h
        ${HEADERS_DIR}/04_noMore.h
        ${HEADERS_DIR}/03_dontHurtMe.h


        ${SOURCES_DIR}/01_whatIsLove.c
        ${SOURCES_DIR}/02_babyDontHurtMe.c
        ${SOURCES_DIR}/04_noMore.c
        ${SOURCES_DIR}/03_dontHurtMe.c
        ${SOURCES_DIR}/main.c
        

)

target_include_directories(
        ${PROJECT_NAME}

        PUBLIC
        ${BASE_DIR}
        ${HEADERS_DIR}
        ${SOURCES_DIR}
)

target_compile_options(
        ${PROJECT_NAME}

        PUBLIC
        -Wall
        -Wextra
        -Werror
        -Wundef
        -Wuninitialized
        -Wshadow
        -Wpointer-arith
        -Wunused-parameter
        -Wnull-dereference
) 
