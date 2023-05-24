#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  for (int i = 0; i < 10; i++) {
    vec.push_back(i);
  }
  for (int i = 0; i < vec.size(); i++) {
    std::cout << "vec[" << i << "]: " << vec[i] << std::endl;
  }

  std::cout << "vec[i] = vec[vec.size()/2+i];" << std::endl;
  for (int i = 0; i < vec.size()/2; i++) {
    vec[i] = vec[vec.size()/2+i];
  }
  for (int i = 0; i < vec.size(); i++) {
    std::cout << "vec[" << i << "]: " << vec[i] << std::endl;
  }
  return 1;
}
