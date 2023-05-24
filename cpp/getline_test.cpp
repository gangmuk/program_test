#include <iostream>
#include <fstream>
#include <string>

int main() {
  std::ifstream file("test_input.txt");
  std::string line;
  for (size_t i = 0; i < 5; i++) {
    getline(file, line);
    std::cout << line << std::endl;
  }
  std::cout << "===========" << std::endl;
  for (size_t i = 0; i < 5; i++) {
    getline(file, line);
    std::cout << line << std::endl;
  }
  std::cout << "===========" << std::endl;
  for (size_t i = 0; i < 5; i++) {
    getline(file, line);
    std::cout << line << std::endl;
  }
  std::cout << "===========" << std::endl;
}
