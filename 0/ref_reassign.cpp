#include <iostream>

int main() {
  int a = 100;
  int &a_ref = a;
  int b = 4;
  // a_ref can't be reseated - always points to a, so this sets a's value to 4
  // Putting a ref on the left hand side sets the pointed-to value equal to the
  // right hand side
  a_ref = b;
  b = 5;

  std::cout << "a is: " << a << std::endl;
  std::cout << "b is: " << b << std::endl;
  std::cout << "a_ref is: " << a_ref << std::endl;
}