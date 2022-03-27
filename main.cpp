#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {
    }

    ~Rectangle() {
        cout << "面积为" << this->Area() << "的Rectangle正在析构……";
    }

    int Area() {
        return this->width * this->height;
    }
};

int main() {
    Rectangle r(2, 4);
    cout << r.Area() << endl;

    return 0;
}
