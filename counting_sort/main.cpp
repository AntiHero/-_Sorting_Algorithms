#include <iostream>
#include <algorithm>
#include <vector>
#include "../utils/utils.h"

void counting_sort(std::vector<int> &V) {
    std::cout << "counting sort" << std::endl;

    std::vector<int>::iterator max_in_v;

    max_in_v = std::max_element(V.begin(), V.end());

    int N = *max_in_v;

    std::vector<int> hash (N + 1);
    for (auto &x : V) {
        if (x < 0) {
            std::cerr << "Can't sort negative values!!!" << std::endl;
            exit(-1);
        } else {
            hash[x] += 1;
        }
    }

    int n = 0;

    for (int x = 0; x <= N; x++) {
        for (int i = 0; i < hash[x]; i++) {
            V[n] = x;
            n++;
        }
    }

    print_vector(V);
}

int main() {
    std::vector<int> V;

    std::cout << "Numbers should be >= 0." << std::endl;
    V = input_vector();
    print_vector(V);
    counting_sort(V);

    if (is_ascending_order(V)) {
        std::cout << "ascending\n";
    } else {
        std::cout << "not ascending";
    }

    return 0;
}

