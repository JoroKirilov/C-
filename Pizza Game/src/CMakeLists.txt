cmake_minimum_required(VERSION 3.16)

project(DinnerDashC LANGUAGES C)

#Set directories below
set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(HEADERS_DIR ${BASE_DIR}/include)
set(SOURCES_DIR ${BASE_DIR}/src)

add_executable(
        ${PROJECT_NAME}

        ${HEADERS_DIR}/tables.h
        ${HEADERS_DIR}/restaurant.h
        ${HEADERS_DIR}/Kitchen.h
        ${HEADERS_DIR}/Dish.h
        ${HEADERS_DIR}/defines.h
        ${HEADERS_DIR}/Customer.h
        ${HEADERS_DIR}/order.h
        ${HEADERS_DIR}/Score.h



        ${SOURCES_DIR}/main.c
        ${SOURCES_DIR}/tables.c
        ${SOURCES_DIR}/restaurant.c
        ${SOURCES_DIR}/Kitchen.c
        ${SOURCES_DIR}/Dish.c
        ${SOURCES_DIR}/Customer.c
        ${SOURCES_DIR}/order.c
        ${SOURCES_DIR}/Score.c

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
