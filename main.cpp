#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
#include <fstream>
#include <exception>

using namespace std;

template<typename T>
void mySort(T *array, int size) {
    T temp;
    for (int i = size - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

class Mine {
public:
    int value;
};

template<typename T>
void Sub(T &a, T &b) {
    cout << a.v - b.v;
}


int main() {
    Mine a = Mine{1};
    Mine b = Mine{2};
    Sub(a, b);
}
