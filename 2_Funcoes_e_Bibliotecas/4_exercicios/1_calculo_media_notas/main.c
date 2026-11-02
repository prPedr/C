// 1. Calcular a média de dois números

// Crie uma função que recebe duas notas (float)
// e retorna a média com 2 casas decimais.

#include <stdio.h>

float calcularMedia(float nota1, float nota2) {
  float media = (nota1 + nota2) / 2.0;

  return media;
}

int main() {
  float n1, n2, resultado;

  printf("Primeira nota: ");
  scanf("%f", &n1);

  printf("Segunda nota: ");
  scanf("%f", &n2);

  resultado = calcularMedia(n1, n2);

  printf("A media de notas e: %.2f\n", resultado);

  return 0;
}
