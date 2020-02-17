project(boost_transformation_compilation)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
cmake_minimum_required(VERSION 3.16)

find_package(Boost 1.71 REQUIRED)
add_executable(foo foo.cpp)
target_link_libraries(foo )
