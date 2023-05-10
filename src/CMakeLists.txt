add_executable(learn_cpp17 main.cpp)

add_subdirectory(leetcode)
add_subdirectory(webserver)

target_link_libraries(learn_cpp17
        PRIVATE
        leetcode
        webserver
        )