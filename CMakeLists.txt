cmake_minimum_required(VERSION 2.8.9)
project (Patterns)


include_directories(Patterns PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/source/app
)

add_subdirectory(source/app)
add_subdirectory(source/lib/creational)

add_executable(Patterns main.cpp)
target_link_libraries(Patterns Application)
