#include <iostream>
#include <vector>
#include <iterator>

void printVector(const std::vector<int>& V) {
    int half = V.size() / 2;

    std::cout << "Вторая половина: ";
    for (auto it = V.begin() + half; it != V.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << "\nПервая половина: ";
    for (auto it = V.begin(); it != V.begin() + half; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}


void fillVector(std::vector<int>& V) {
    int n;
    std::cout << "Введите количество элементов (чётное число): ";
    std::cin >> n;

    if (std::cin.fail()) {
        std::cout << "Неправильные входные данные.";
        return;
    }

    if (n % 2 != 0) {
        std::cout << "Колличество не четное!" << std::endl;
        return;
    }

    if (n < 0) {
        std::cout << "Неверное количество элементов!" << std::endl;
        return;
    }

    V.resize(n);
    std::cout << "Введите " << n << " целых чисел:\n";
    for (int& num : V) {
        std::cin >> num;

        if (std::cin.fail()) {
            std::cout << "Неправильные входные данные.";
            return;
        }
    }

    printVector(V);
}

int main() {
    std::vector<int> V;
    fillVector(V);
}