#include <cstdio>

enum class Operation { Add, Subtract, Multiply, Divide };

struct Calculator {
  Calculator(Operation op) { operation = op; }

  int calculate(int a, int b) {
    switch (operation) {
    case Operation::Add: {
      return a + b;
    }
    case Operation::Subtract: {
      return a - b;
    }
    case Operation::Multiply: {
      return a * b;
    }
    case Operation::Divide: {
      return a / b;
    }
    }
  }

private:
  Operation operation;
};

int main() {
  Calculator c1{Operation::Add};
  printf("%d\n", c1.calculate(3, 4));

  Calculator c2 = {Operation::Subtract};
  printf("%d\n", c2.calculate(3, 4));

  Calculator c3(Operation::Multiply);
  printf("%d\n", c3.calculate(3, 4));
}