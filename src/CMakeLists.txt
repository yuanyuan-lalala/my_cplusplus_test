file(GLOB SOURCES "*.cpp")

add_executable(new ${SOURCES})

target_include_directories(new PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)


