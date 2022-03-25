#include <iostream>
#include <cstring>
#include <string>

struct Student {
    std::string name;
    char desc[50];
};

int add(int a) {
    static int sum = 0;
    return sum += a;
}

int main() {
    std::cout << "Hello, World!"
              << add(1)
              << add(3)
              << std::endl;

    auto s = Student{};
    s.name = "lewin";
    strcpy(s.desc, "这是一个普通的学生");

    std::cout << s.name;

    return 0;
}
