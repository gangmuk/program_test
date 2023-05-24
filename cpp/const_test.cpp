#include <iostream>

int main() {
  const int value = 10;

  // Case 1
  const int* ptr1 = &value;
  
  // Case 2
  int* const ptr2 = &value;

  // Case 3
  int* ptr3 = &value;
}
