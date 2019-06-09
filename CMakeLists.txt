cmake_minimum_required(VERSION 2.8.9)
project (Patterns)

add_subdirectory(source/creational)

include_directories(Patterns PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/creational
    ${CMAKE_CURRENT_SOURCE_DIR}/src/operation
    ${CMAKE_CURRENT_SOURCE_DIR}/src/structural
    ${CMAKE_CURRENT_SOURCE_DIR}/src/utils
    ${CMAKE_CURRENT_SOURCE_DIR}/ExternalRepositories)


add_executable(Patterns main.cpp)
target_link_libraries(Patterns Creational)
