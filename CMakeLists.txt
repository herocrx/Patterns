cmake_minimum_required(VERSION 2.8.9)
project (Patterns)

add_subdirectory(Creational)

include_directories(Patterns PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/ExternalRepositories)


add_executable(Patterns main.cpp)
