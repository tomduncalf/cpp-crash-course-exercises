#include <cstdio>

int main() {
  int *my_ptr;
  printf("%p\n", my_ptr);

  char letters[] = "abcde";
  *(letters + 2) = 'z';
  printf("%s\n", letters);
}