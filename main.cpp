#include <iostream>
#include <string>
#include <ctime>


int main() {
    std::srand(std::time(nullptr));
    int rand_num = std::rand() % 100;

    do {
        std::cout << "please guess a number: ";
        char input[50];
        std::cin >> input;
        char *end_of_strtol = nullptr;
        int guess_number = strtol(input, &end_of_strtol, 10);
        if (guess_number == rand_num) {
            std::cout << "you are right. the number is: " << rand_num;
            return 0;
        } else if (guess_number > rand_num) {
            std::cout << "you guessed: " << guess_number << ", it's larger than my number!\n";
        } else {
            std::cout << "you guessed: " << guess_number << ", it's less than my number!\n";
        }
    } while (true);
}
