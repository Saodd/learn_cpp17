#include <iostream>
#include <cstring>
#include <string>

using namespace std;

double vals[] = {1, 2,3,4,5};

double *setValues1(int i) {
    double *ref = &vals[i];
    return ref;
}


double &setValues(int i) {
    double &ref = vals[i];
    return ref;
}

int main() {
    cout << "改变前的值" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }

    setValues(1) = 666; // 引用
    *setValues1(3) = 2333;  // 指针

    cout << "改变后的值" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    return 0;
}