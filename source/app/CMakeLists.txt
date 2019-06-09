
add_library(Application SHARED
    App.cpp
)

target_include_directories(Application PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/source/include
    )


message("----- Application -----")
message("Include path:
    ${CMAKE_SOURCE_DIR}/source/include
    ${CMAKE_CURRENT_SOURCE_DIR}")
message("-----------------------------")

target_link_libraries(Application Creational)


install(TARGETS Application DESTINATION ${CMAKE_BINARY_DIR}/install/lib)

