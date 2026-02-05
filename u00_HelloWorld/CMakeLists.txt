cmake_minimum_required(VERSION 3.10.0)
project(u00_HelloWorld VERSION 0.1.0 LANGUAGES C CXX)

add_executable(u00_HelloWorld HelloWorld.cpp)

include(CTest)
enable_testing()

