cmake_minimum_required(VERSION 3.5.1)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake_helpers/helpers_c.cmake)

project(warcraft)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(INC_DIR_HERO ${CMAKE_SOURCE_DIR}/include/heroes)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(SRC_DIR_HERO ${CMAKE_CURRENT_SOURCE_DIR}/src/heroes)
     
#generate project binary
add_executable(
    ${PROJECT_NAME}
        ${INC_DIR}/Hero.h
        ${INC_DIR_HERO}/ArchMage.h
        ${INC_DIR_HERO}/DeathKnight.h
        ${INC_DIR_HERO}/DrawRanger.h

        ${INC_DIR}/Defines.h
        ${INC_DIR}/GameLogic.h
        ${INC_DIR}/Vector.h
        ${INC_DIR}/ErrorHandler.h
        ${INC_DIR}/Utilities.h


        ${SRC_DIR_HERO}/ArchMage.c
        ${SRC_DIR_HERO}/DeathKnight.c
        ${SRC_DIR_HERO}/DrawRanger.c
        ${SRC_DIR}/GameLogic.c
        ${SRC_DIR}/Hero.c
        ${SRC_DIR}/main.c
        ${SRC_DIR}/Vector.c
        ${SRC_DIR}/ErrorHandler.c
        ${SRC_DIR}/Utilities.c

)
target_include_directories(
    ${PROJECT_NAME} 
        PRIVATE 
            ${INC_DIR}
)  


set_target_c_standard(${PROJECT_NAME} 11)
enable_target_c_warnings(${PROJECT_NAME})

