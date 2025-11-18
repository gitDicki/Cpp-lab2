#include <iostream>
#include <list>
#include <iterator>

void listPermutation(std::list<int>& list) {

    int n = list.size();
    int third_length = n / 3 + 1;

    auto it = list.begin();

    std::list<int> first_third;


    for (int i = 0; i < third_length; ++i) {
        first_third.push_back(*it);
        ++it;
    }

    first_third.reverse();

    list.insert(list.end(), first_third.begin(), first_third.end());

    std::cout << "Получившийся список: ";
    for (const int& num : list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void appendList(std::list<int>& list) {
    int n;
    std::cout << "Введите количество элементов (число делится на 3): ";
    std::cin >> n;

    if (std::cin.fail()) {
        std::cout << "Неправильные входные данные.";
        return;
    }

    if (n % 3 != 0) {
        std::cout << "Количество не делится на 3!" << std::endl;
        return;
    }

    list.resize(n);

    std::cout << "Введите " << n << " целых чисел:\n";
    for (int& num : list) {
        std::cin >> num;

        if (std::cin.fail()) {
            std::cout << "Неправильные входные данные.";
            return;
        }
    }

    listPermutation(list);
}

int main() {
    std::list<int> list;
    appendList(list);
}