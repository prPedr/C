#include <stdio.h>

int somar(int num1, int num2) {
  return num1 + num2;
}

int main() {
  printf("Resultado: %d\n", somar(3, 2));
  printf("Resultado: %d\n", somar(10, 1));
  printf("Resultado: %d\n", somar(35, 19));

  return 0;
}
