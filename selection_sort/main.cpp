#include <iostream>
#include <vector>
#include <string>
#include "../utils/utils.h"

void selection_sort(std::vector<int> &V) {
    std::cout << "selection sort" << std::endl;

    for (int pos = 0; pos < int(V.size()) - 1; pos++) {
        for (int i = pos + 1; i < int(V.size()); i++) {
            if (V[i] < V[pos]) {
                std::swap(V[i], V[pos]);
            }
        }
        print_vector(V);
    }
}

int main() {
    std::vector<int> V;

    V = input_vector();
    print_vector(V);
    selection_sort(V);

    if (is_ascending_order(V)) {
        std::cout << "ascending\n";
    } else {
        std::cout << "not ascending";
    }

    return 0;
}

