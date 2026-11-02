// 6 - Triângulo invertido de números

// Crie um programa que imprima um triângulo invertido de números.

// 🔹 O usuário entra com um número N.

// 🔹 A saída esperada, para N = 5, seria:

#include <stdio.h>

int main() {
  int i, j, n;

  printf("Escolha o numero: ");
  scanf("%d", &n);

  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }

    printf("\n");
  }

  return 0;
}
