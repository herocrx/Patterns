cmake_minimum_required(VERSION 3.5)

add_library(Creational SHARED
    Creational.cpp
    adapter/Adapter.cpp
    bridge/Bridge.cpp
    composite/Composite.cpp
    decorator/Decorator.cpp
    facade/Facade.cpp
    flyweight/Flyweight.cpp
    proxy/Proxy.cpp
)

target_include_directories(Creational PUBLIC
    ${CMAKE_SOURCE_DIR}/source/include
    )

install(TARGETS Creational DESTINATION ${CMAKE_BINARY_DIR}/install/lib)


