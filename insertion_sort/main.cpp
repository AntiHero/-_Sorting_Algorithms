#include <iostream>
#include <vector>
#include <string>
#include "../utils/utils.h"

void insertion_sort(std::vector<int> &V) {
    std::cout << "insertion sort" << std::endl;

    int N = int(V.size());

    for (int pos = 1; pos < N; pos++) {
        auto i = pos;

        while (i > 0 and V[i - 1] > V[i]) {
            std::swap(V[i - 1], V[i]);
            i -= 1;
        }
    }
}

int main() {
    std::vector<int> V;

    V = input_vector();
    print_vector(V);
    insertion_sort(V);
    print_vector(V);

    if (is_ascending_order(V)) {
        std::cout << "ascending\n";
    } else {
        std::cout << "not ascending";
    }

    return 0;
}
