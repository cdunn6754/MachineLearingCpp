cmake_minimum_required(VERSION 3.10)
project(machine_learning_project LANGUAGES CXX)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(SRC_INCLUDE ${CMAKE_SOURCE_DIR}/src/ReadCSV)
set(IMAGE_LIB ${CMAKE_SOURCE_DIR}/build/src/Image/libimage.a)

add_executable(main app/main.cpp)
target_include_directories(main PRIVATE ${SRC_INCLUDE})
target_link_libraries(main read_csv)

add_subdirectory(src)
