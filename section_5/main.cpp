#include <iostream>

constexpr int get_value() { return 3; }

int main() {
  constexpr int value = get_value();
  std::cout << "value :" << value << "\n";
  return 0;
}
