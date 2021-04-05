#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<int> input_vector() {
  std::vector<int> V;
  std::string line;

  getline(std::cin, line);
  std::stringstream line_stream(line);

  while(not line_stream.eof()) {
    int x;
    line_stream >> x;
    V.push_back(x);
  }
  
  return V;
} 

void print_vector(std::vector<int> V) {
  for (auto x: V) {
    std::cout << x << ' ';
  }

  std::cout << '\n';
}

int main() {
  std::vector<int> V;
  V = input_vector();
  print_vector(V);

  return 0;
}