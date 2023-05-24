#include <iostream>

int main() {
  int **double_ptr = new int*[10];
  for (size_t i = 0; i < 10; i++) {
    double_ptr[i] = new int[5];
  }

  for (size_t i = 0; i < 10; i++) {
    for (size_t j = 0; j < 5; j++) {
      double_ptr[i][j] = i*10 + j;
    }
  }
  std::cout << "double_ptr[0]: " << double_ptr[0] << std::endl;
  std::cout << "&double_ptr[0]: " << &double_ptr[0] << std::endl;
  std::cout << "double_ptr[0][0]: " << double_ptr[0][0] << std::endl;
  std::cout << "&double_ptr[0][0]: " << &double_ptr[0][0] << std::endl;

  return 0;
}
