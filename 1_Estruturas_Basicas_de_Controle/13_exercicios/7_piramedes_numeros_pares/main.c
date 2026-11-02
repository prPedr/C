// 7 – Pirâmide de Números Pares

// Escreva um programa que exiba uma pirâmide
// de números pares com N linhas.

#include <stdio.h>

int main() {
  int i, j, n;
  int numeroPar = 2;

  printf("Escolha um numero: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d ", numeroPar);

      numeroPar += 2;
    }

    printf("\n");
  }
  
  return 0;
}
