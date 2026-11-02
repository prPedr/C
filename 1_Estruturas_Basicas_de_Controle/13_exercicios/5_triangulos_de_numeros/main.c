// 5 – Triângulo de Números

// Escreva um programa que exiba um triângulo numérico
// com N linhas, onde cada linha tem os números de 1
// até a posição atual (N).

#include <stdio.h>

int main() {
  int i, j, escolhaNumero;

  printf("Informe o numero: ");
  scanf("%d", &escolhaNumero);

  for (i = 1; i <= escolhaNumero; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d ", j);
    }

    printf("\n");
  }

  return 0;
}
