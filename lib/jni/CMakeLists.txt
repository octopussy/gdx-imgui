cmake_minimum_required(VERSION 3.1)

set(APP_NAME imgui_test)
project (${APP_NAME})

message("prefix: ${CMAKE_FIND_LIBRARY_PREFIXES}")
message("suffix: ${CMAKE_FIND_LIBRARY_SUFFIXES}")

find_package(OpenGL REQUIRED)

add_subdirectory(glfw)

set(GAME_SRC
        imgui/imgui.cpp
        imgui/imgui_draw.cpp
        imgui/imgui_demo.cpp
        imgui/examples/opengl2_example/imgui_impl_glfw.cpp
        imgui/examples/opengl2_example/main.cpp
        )

include_directories("imgui" "imgui/glfw/include")

add_executable(${APP_NAME} ${GAME_SRC})

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

message(${OPENGL_gl_LIBRARY})
target_include_directories(${APP_NAME} PUBLIC ${OPENGL_INCLUDE_DIR})
target_link_libraries(${APP_NAME} ${OPENGL_gl_LIBRARY})

target_link_libraries(${APP_NAME} glfw)
