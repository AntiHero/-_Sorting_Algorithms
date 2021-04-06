#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "utils.h"

std::vector<int> input_vector() {
    std::vector<int> V;
    std::string line;
    std::cout << "Enter numbers separated with space: ";
    std::getline(std::cin, line);
    std::stringstream line_stream(line);

    while (not line_stream.eof()) {
        int x;
        line_stream >> x;
        V.push_back(x);
    }

    return V;
}

void print_vector(const std::vector<int> &V) {
    for (auto &x : V) {
        std::cout << x << ' ';
    }

    std::cout << '\n';
}

bool is_ascending_order(const std::vector<int> &V) {
    int i = 0;
    while (i < int(V.size() - 1)) {
        if (V[i] > V[i + 1]) {
            return false;
        }
        i++;
    }

    return true;
}
