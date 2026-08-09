cmake_minimum_required(VERSION 3.16)
project(cra_demo LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(cra_demo src/device.cpp)

install(TARGETS cra_demo RUNTIME DESTINATION bin)
