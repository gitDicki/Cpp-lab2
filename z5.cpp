#include <iostream>
#include <vector>
#include <algorithm>

 std::vector<int> deleteZero(std::vector<int> V){
    auto first_zero = std::find(V.begin(), V.end(), 0);
    
    if (first_zero != V.end()) {
        auto second_zero = std::find(std::next(first_zero), V.end(), 0);
        
        if (second_zero != V.end()) {
            V.erase(second_zero);
        }
    }
    return V;
 }

int main() {
    std::vector<int> V = {1, 0, 2, 3, 4};


    std::cout << "Изначальный вектор" << std::endl;
    for (int num : V) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    V = deleteZero(V);

    std::cout << "Удаление второго нуля" << std::endl;

    for (int num : V) {
        std::cout << num << " ";
    }
    
    std::cout << std::endl;
}