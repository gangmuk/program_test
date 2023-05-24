#include <iostream>
#include <string>
#include <stdint.h>

int main() {
  std::string str1 = "1";
  std::string str2 = "a";
  std::string str3 = "a0";

  uint64_t temp1 = (uint64_t)std::stoull(str1, nullptr, 16);
  std::cout << str1 << " => " << temp1 << std::endl;

  uint64_t temp2 = (uint64_t)std::stoull(str2, nullptr, 16);
  std::cout << str2 << " => " << temp2 << std::endl;

  uint64_t temp3 = (uint64_t)std::stoull(str3, nullptr, 16);
  std::cout << str3 << " => " << temp3 << std::endl;
  return 0;
}
