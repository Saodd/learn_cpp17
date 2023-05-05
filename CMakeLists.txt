cmake_minimum_required(VERSION 3.21)
project(learn_cpp17)

set(CMAKE_CXX_STANDARD 17)

add_executable(learn_cpp17 main.cpp)

# 部分1 ——————————————
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# 部分2 ——————————————
enable_testing()

add_executable(
        learn_cpp17_test
        main_test.cpp
)
target_link_libraries(
        learn_cpp17_test
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(learn_cpp17_test)