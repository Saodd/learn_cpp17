#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

struct Books {
    char title[50];
    char author[50];
    string subject;
    int book_id;
};

// 该函数以结构指针作为参数
void printBook(Books *book) {
    cout << "书标题  : " << book->title << endl;
    cout << "书作者 : " << book->author << endl;
    cout << "书类目 : " << book->subject << endl;
    cout << "书 ID : " << book->book_id << endl;
}


int main() {
    Books Book1{
            .title =  "123",
            .author = "lewin",
            .subject = "一些内容",
            .book_id = 1,
    };        // 定义结构体类型 Books 的变量 Book1
    Books Book2{};        // 定义结构体类型 Books 的变量 Book2

    strcpy(Book2.title, "我是标题");
    strcpy(Book2.author, "我是作者");
    Book2.subject = "另一些内容";
    Book2.book_id = 12346;

    printBook(&Book1);
    printBook(&Book2);

    return 0;
}
