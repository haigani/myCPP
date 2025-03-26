cmake_minimum_required(VERSION 3.10)
project(project2)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the main executable
add_executable(project2 src/main.cpp src/calculator.cpp)

# Google Test Setup
include(FetchContent)
FetchContent_Declare(
    gtest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(gtest)

enable_testing()

# Add test executable
add_executable(runTests tests/project2Test.cpp src/calculator.cpp)
target_link_libraries(runTests gtest gtest_main)
add_test(NAME MyTests COMMAND runTests)
