#include <iostream>
#include <string>

int main() {
  std::string str = "0123456789";
  int substr_len = 4;
  for (size_t i = 0; i < 3; i++) {
    std::string substr = str.substr(i*substr_len, substr_len);
    std::cout << "str.substr(" << i << ", " << substr_len << "): " << substr << std::endl;
  }



  std::string substr2 = str.substr(0,4);
  std::string substr3 = str.substr(4,4);
  std::string substr4 = str.substr(0);
  std::string substr5 = str.substr(1);
  std::cout << "str.substr(0,4): " << substr2 << std::endl;
  std::cout << "str.substr(4,4): " << substr3 << std::endl;
  std::cout << "str.substr(0): " << substr4 << std::endl;
  std::cout << "str.substr(1): " << substr5 << std::endl;
  return 0;
}
