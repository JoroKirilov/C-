cmake_minimum_required(VERSION 3.16)

project(cmake_exercises)

#Set directories below
set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
#set(HEADERS_DIR ${BASE_DIR}/include)
#set(SOURCES_DIR ${BASE_DIR}/src)

add_executable(
        ${PROJECT_NAME}

        ${BASE_DIR}/print.h
        
        ${BASE_DIR}/main.c
        ${BASE_DIR}/print.c
        

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
