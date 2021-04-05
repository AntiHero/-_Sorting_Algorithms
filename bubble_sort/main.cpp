#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<int> input_vector()
{
  std::vector<int> V;
  std::string line;
  std::cout << "Enter numbers separated with space: ";
  getline(std::cin, line);
  std::stringstream line_stream(line);

  while (not line_stream.eof())
  {
    int x;
    line_stream >> x;
    V.push_back(x);
  }

  return V;
}

void print_vector(const std::vector<int> &V)
{
  for (auto &x : V)
  {
    std::cout << x << ' ';
  }

  std::cout << '\n';
}

void bubble_sort(std::vector<int> &V)
{
  bool sorted_flag = false;
  int bypass_counter = 0;

  while (not sorted_flag)
  {
    sorted_flag = true;
    for (int i = 0; i < int(V.size()) - 1 - bypass_counter; i++)
    {
      if (V[i] > V[i + 1])
      {
        std::swap(V[i], V[i + 1]);
        sorted_flag = false;
      }
    }
    bypass_counter++;
    print_vector(V);
  }
}

bool is_ascending_order(const std::vector<int> &V)
{
  int i = 0;
  while (i < int(V.size() - 1))
  {
    if (V[i] > V[i + 1])
    {
      return false;
    }
    i++;
  }

  return true;
}

int main()
{
  std::vector<int> V;

  V = input_vector();
  print_vector(V);
  bubble_sort(V);

  if (is_ascending_order(V))
  {
    std::cout << "ascending\n";
  }
  else
  {
    std::cout << "not ascending";
  }

  return 0;
}