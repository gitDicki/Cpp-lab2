#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

int main() {
    std::string input;
    std::cout << "Введите набор символов: ";
    std::getline(std::cin, input);

    std::string output;

    std::replace_copy_if(input.begin(), input.end(), std::back_inserter(output), [](char c) { return std::isdigit(c); }, '_');

    std::cout << "Результат: " << output << std::endl;
}