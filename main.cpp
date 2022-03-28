#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
#include <fstream>
#include <exception>

using namespace std;

struct MyException : public exception {
    [[nodiscard]] const char *what() const noexcept override {
        return "这是一个自定义异常";
    }
};


int main() {
    try {
        throw MyException();
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}
