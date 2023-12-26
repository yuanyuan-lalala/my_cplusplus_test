cmake_minimum_required(VERSION 3.0.0)
project(new VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
add_subdirectory(src)



# find_package(OpenCV REQUIRED)

# file(GLOB_RECURSE SOURCES "src/*.cpp")
# add_executable(new ${SOURCES})
# target_include_directories(new PRIVATE include)
# target_link_libraries(new ${OpenCV_LIBS})






