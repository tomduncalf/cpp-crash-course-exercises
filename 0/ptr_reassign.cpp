#include <iostream>

int main() {
  int a = 100;
  int *a_ptr = &a;
  int *a_ptr_2 = &a;
  int b = 4;
  // This assigns the value of b to the memory pointed to by a_ptr (i.e. a)
  *a_ptr = b;
  // This reassigns the pointer so a_ptr_2 now points to b
  a_ptr_2 = &b;
  b = 5;

  std::cout << "a is: " << a << std::endl;
  std::cout << "b is: " << b << std::endl;
  std::cout << "a_ptr is: " << *a_ptr << std::endl;
  std::cout << "a_ptr_2 is: " << *a_ptr_2 << std::endl;
}