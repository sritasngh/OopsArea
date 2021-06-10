# set minimum cmake version required
cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(oopsarea LANGUAGES CXX 
    VERSION 0.0.1
    DESCRIPTION "this is my area project"
    HOMEPAGE_URL "https://github.com/itssingh/oopsarea")

include_directories(include/shape)

add_subdirectory(src buildc)
add_executable(oopsarea_exec area.cc)
target_link_libraries(oopsarea_exec oopsarea)


