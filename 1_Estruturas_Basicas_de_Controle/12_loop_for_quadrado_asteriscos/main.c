#include <stdio.h>

int main() {
  int i, j, tamanhoQuadrado;

  printf("Informe o tamanho do quadrado: ");
  scanf("%d", &tamanhoQuadrado);

  for (i = 0; i < tamanhoQuadrado; i++) {
    for (j = 0; j < tamanhoQuadrado; j++) {
      printf("* ");
    }

    printf("\n");
  }

  return 0;
}
