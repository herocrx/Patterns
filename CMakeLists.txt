cmake_minimum_required(VERSION 2.8.9)
project (Patterns)

set(DEFAULT_BUILD_TYPE "Release")

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(STATUS "Setting build type to '${DEFAULT_BUILD_TYPE}' as none was specified.")
  set(CMAKE_BUILD_TYPE "${DEFAULT_BUILD_TYPE}" CACHE STRING "Choose the type of build." FORCE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

include_directories(Patterns PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/source/app
)

add_subdirectory(source/app)
add_subdirectory(source/lib/creational)
add_executable(Patterns main.cpp)
target_link_libraries(Patterns Application)

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_BINARY_DIR}/install/bin)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/utilities/set_env_path.sh DESTINATION ${CMAKE_BINARY_DIR})

