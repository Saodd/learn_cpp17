#include <iostream>
#include <cstring>
#include <string>


int add(int a) {
    static int sum = 0;
    return sum += a;
}

void playStruct() {
    struct Student {
        std::string name;
        char desc[50];
    };

    std::cout << "Hello, World!"
              << add(1)
              << add(3)
              << std::endl;

    auto s = Student{};
    s.name = "lewin";
    strcpy(s.desc, "这是一个普通的学生");

    std::cout << s.name;
};

/**
 * 数组变量实际上是第1项的内存位置（指针）。
 * 直接做指针计算，+1加的不是1字节，而是数组元素的尺寸（例如double是8）。
 */
void playArray() {
    double numbers[10] = {};
    for (int i = 0; i < 10; i++) {
        numbers[i] = i + 100;
    }
    std::cout << numbers << std::endl << numbers + 1;
}

int main() {
    playArray();

    return 0;
}
