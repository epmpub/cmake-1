cmake_minimum_required(VERSION 3.9 FATAL_ERROR)
# cmake_language(CXX)
set(CMAKE_CXX_COMPILER "/usr/bin/g++-11")
set(CMAKE_C_COMPILER "/usr/bin/gcc-11")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INSTALL_PREFIX "/usr/local")
project(hellogcc11 LANGUAGES C CXX)

# set_target_properties(gcc11Test SOURCE_DIR src)
# add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_executable(gcc11Test ${PROJECT_SOURCE_DIR}/src/gcc11Test.cpp)
include_directories(${PROJECT_SOURCE_DIR}/src)
message(STATUS ${PROJECT_SOURCE_DIR}/src) 
install(TARGETS gcc11Test
    RUNTIME DESTINATION bin)

