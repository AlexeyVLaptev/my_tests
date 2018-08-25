cmake_minimum_required(VERSION 2.8)

set (CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

project(benchmarks)
add_executable(${PROJECT_NAME} "main.cpp"
"hash_pack.h"
"hash_pack.cpp"
)

#target_include_directories(${PROJECT_NAME} PUBLIC
#${CMAKE_CURRENT_SOURCE_DIR}/include
#somedir
#)

target_link_libraries(${PROJECT_NAME}
benchmark
pthread
)
