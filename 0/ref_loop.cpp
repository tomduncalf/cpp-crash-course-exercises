#import <iostream>

int main() {
  int x[100];

  // This assigns a new value to each x
  for (auto &v : x)
    v = 1;

  for (auto &v : x)
    std::cout << v << std::endl;
}