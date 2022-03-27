#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;


int main() {
    auto now = time(nullptr);
    cout << "本地日期和时间：" << ctime(&now) << endl;

    string line;
    fstream f;
    // ios::in是读取文件，ios::out是写入文件
    f.open(R"(C:\Users\LanLin\code\learn\learn-cpp17\main.cpp)", ios::in);
    if (f.is_open()) {
        while (getline(f, line)) {
            cout << line << '\n';
        }
        f.close();
    }
    return 0;
}