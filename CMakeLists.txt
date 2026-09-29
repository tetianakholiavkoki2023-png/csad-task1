cmake_minimum_required(VERSION 3.14)
project(HelloWorld LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hello main.cpp)

include(FetchContent)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests tests/unit_tests.cpp math_operations.cpp)
target_link_libraries(unit_tests PRIVATE GTest::gtest_main)

enable_testing()
add_test(NAME unit_tests COMMAND unit_tests)
