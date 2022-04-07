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


int main() {
    int numbers[]{1, 4, 5, 2, 1};

    for (int number: numbers) {
        cout << number << ' ';
    }
    cout << endl;

    mySort(numbers, size(numbers));

    for (int number: numbers) {
        cout << number << ' ';
    }
    cout << endl;
}
