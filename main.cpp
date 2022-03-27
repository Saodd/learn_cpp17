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
    Rectangle(int w) : width(w), height(w) {
        cout << "正在创建Rectangle " << this->width << ' ' << this->height << endl;
    }

    ~Rectangle() {
        cout << "正在析构Rectangle " << this->width << ' ' << this->height << endl;
    }

    virtual int Area() {
        return this->width * this->height;
    }

    Rectangle operator+(Rectangle &b){
        Rectangle r(this->width + b.width, this->height + b.height);
        return r;
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

    Square operator+(Square &b){
        Square r(this->width + b.width);
        return r;
    }
};

int main() {
    Square r1(2);
    Square r2(3);
    auto r3 = r1 + r2;
    cout << r3.Area() << endl;

    return 0;
}
