#include <iostream>
#include <vector>
#include <string>
#include "../utils/utils.h"

void bubble_sort(std::vector<int> &V) {
    std::cout << "bubble sort" << std::endl;

    bool sorted_flag = false;
    int bypass_counter = 0;

    while (not sorted_flag) {
        sorted_flag = true;
        for (int i = 0; i < int(V.size()) - 1 - bypass_counter; i++) {
            if (V[i] > V[i + 1]) {
                std::swap(V[i], V[i + 1]);
                sorted_flag = false;
            }
        }
        bypass_counter++;
        print_vector(V);
    }
}

int main() {
    std::vector<int> V;

    V = input_vector();
    print_vector(V);
    bubble_sort(V);

    if (is_ascending_order(V)) {
        std::cout << "ascending\n";
    } else {
        std::cout << "not ascending";
    }

    return 0;
}