// 10 - Triângulo de asteriscos ***

// Faça um programa que leia um número N e imprima um
// triângulo de asteriscos com altura N e largura 2N-1.

// Exemplo de N = 4:

//    *
//   ***
//  *****
// *******

#include <stdio.h>

int main() {
  int i, j, k, n;

  printf("Informe a altura da piramide (N): ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n - i; j++) {
      printf(" ");
    }

    for (int k = 1; k <= (2 * i - 1); k++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
