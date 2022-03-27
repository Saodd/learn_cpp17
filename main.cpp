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
 * 作为参数传递的时候，数组会转化为第1项的指针。
 * 写法1： double *numbers
 * 写法2： double numbers[]
 */
double average(const double *numbers, int size) {
    if (size < 1) {
        return 0;
    }
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return sum / size;
}

/**
 * 数组变量实际上是第1项的内存位置（指针）。
 */
void playArray() {
    double numbers[10] = {};
    for (int i = 0; i < 10; i++) {
        numbers[i] = i + 100;
    }
    //  直接做指针计算，+1加的不是1字节，而是数组元素的尺寸（例如double是8）。
    double *ptr = numbers + 1;
    std::cout << numbers << '\n'
              << ptr << '\n'
              << (numbers[1] == *ptr) << std::endl;

    std::cout << average(numbers, std::size(numbers));
}


void printArray() {
    double numbers[] = {1, 2, 4};
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << std::endl;
    }
}

int main() {
    playArray();

    return 0;
}
