cmake_minimum_required(VERSION 3.5)

add_library(Creational SHARED
    lib/Creational.cpp
    lib/Adapter/Adapter.cpp
    lib/Bridge/Bridge.cpp
    lib/Composite/Composite.cpp
    lib/Decorator/Decorator.cpp
    lib/Facade/Facade.cpp
    lib/Flyweight/Flyweight.cpp
    lib/Proxy/Proxy.cpp
)

target_include_directories(Creational PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/source/utils
    )


