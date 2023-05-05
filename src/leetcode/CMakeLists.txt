add_library(leetcode "")

target_sources(leetcode
        PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/leetcode.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/leetcode.h
        )
target_include_directories(leetcode
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
        )

## 测试部分
enable_testing()

add_executable(
        leetcode_test
        leetcode_test.cpp
)
target_link_libraries(
        leetcode_test
        GTest::gtest_main
        leetcode
)

include(GoogleTest)
gtest_discover_tests(leetcode_test)
