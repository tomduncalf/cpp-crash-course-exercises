#include <cstdio>
#include <cstring>
#include <stdexcept>

char lower[] = "abc?e";
char upper[] = "ABC?E";

void write_to(char *array, int index, char character) {
  if (index < strlen(array)) {
    array[index] = character;
  } else {
    throw std::invalid_argument("Index out of bounds");
  }
}

char read_from(char *array, int index) {
  if (index < strlen(array)) {
    return array[index];
  } else {
    throw std::invalid_argument("Index out of bounds");
  }
}

int main() {
  write_to(lower, 3, 'd');
  printf("%c\n", read_from(lower, 3));
}