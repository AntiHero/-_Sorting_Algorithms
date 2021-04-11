#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include "../utils/utils.h"

int get_max(std::vector<int> &V) {
    std::vector<int>::iterator max;

    max = std::max_element(V.begin(), V.end());

    return *max;
}

void radix_sort(std::vector<int> &V) {
    std::cout << "radix_sort" << std::endl;

    const int n = int(V.size());

    std::vector<std::vector<int>> count(10, std::vector<int>());
    std::vector<int> output;

    int radix = 0;

    int max = get_max(V);

    while (max >= 1) {
        for (int i = 0; i < n; i++) {
            int digit = int(V[i] / std::pow(10, radix)) % 10;
            count[digit].push_back(V[i]);
        }

        V.clear();

        for (int i = 0; i < 10; i++) {
            if (int(count[i].size())) {
                V.insert(V.end(), count[i].begin(), count[i].end());
                count[i].clear();
            }
        }

        radix++;
        max = max / 10.0;
    }
};

int main() {
    std::vector<int> V;

    V = input_vector();
    print_vector(V);
    radix_sort(V);
    print_vector(V);

    if (is_ascending_order(V)) {
        std::cout << "ascending\n";
    } else {
        std::cout << "not ascending";
    }

    return 0;
}