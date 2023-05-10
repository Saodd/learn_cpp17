add_library(webserver "")

target_sources(webserver
        PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/webserver.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/webserver.h
        )
target_include_directories(webserver
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
        )

## 测试部分
enable_testing()

add_executable(
        webserver_test
        webserver_test.cpp
)
target_link_libraries(
        webserver_test
        GTest::gtest_main
        webserver
)

include(GoogleTest)
gtest_discover_tests(webserver_test)
