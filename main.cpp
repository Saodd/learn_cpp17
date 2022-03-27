#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

class Rectangle {
protected:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {
        cout << "正在创建Rectangle " << this->width << ' ' << this->height << endl;
    }

    ~Rectangle() {
        cout << "正在析构Rectangle " << this->width << ' ' << this->height << endl;
    }

    virtual int Area() {
        return this->width * this->height;
    }
};

class Square : public Rectangle {
public:
    Square(int w) : Rectangle(w, w) {
        cout << "正在创建Square " << this->width << endl;
    }

    ~Square() {
        cout << "正在析构Square " << this->width << endl;
    }

    int Area() override {
        return this->width * this->width;
    }
};

int main() {
    Square r(2);
    cout << r.Area() << endl;

    return 0;
}
