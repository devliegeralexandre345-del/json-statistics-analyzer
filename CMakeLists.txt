cmake_minimum_required(VERSION 3.16)
project(json_statistics_analyzer LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
include_directories(include)

add_executable(${PROJECT_NAME} src/main.cpp src/json_parser.cpp)

enable_testing()
add_executable(unit_tests tests/test.cpp src/json_parser.cpp)
add_test(NAME AllTests COMMAND unit_tests)