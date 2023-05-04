#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include <cstring>

using namespace std;

#define DEBUG


const int BUFFER_SIZE = 1024;

int main(int argc, char *argv[]) {
#ifdef DEBUG
    cout << "****当前工作路径: " << filesystem::current_path() << endl;
    for (int i = 0; i < argc; ++i) {
        cout << "****环境变量" << i << ": " << argv[i] << endl;
    }
#endif

    if (argc != 3) {
        cerr << "you should give exactly 3 args: execute_file search_file_path search_keyword";
        exit(1);
    }
    char *filepath = argv[1];
    auto keyword = argv[2];


    ifstream file;
    file.open(filepath);

    char line[BUFFER_SIZE];
    while (!file.eof()) {
        file.getline(line, BUFFER_SIZE);
        if (strstr(line, keyword) != nullptr) {
            cout << line << endl;
        }
    };
}
