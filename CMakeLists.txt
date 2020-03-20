cmake_minimum_required(VERSION 3.13.4)

project(toyc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(${PROJECT_NAME} src/main.cpp)
add_subdirectory("src/")
