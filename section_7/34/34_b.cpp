#include <iostream>

int main() {
  int age;
  std::string name;

  std::cout << "Please enter your last name : " << "\n";
  std::cin >> name;

  std::cout << "Please enter your age : " << "\n";
  std::cin >> age;

  std::cout << "Hello " << name << "! You are " << age << " years old." << "\n";
}
