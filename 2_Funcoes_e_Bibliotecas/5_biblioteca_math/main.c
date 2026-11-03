#include <math.h>
#include <stdio.h>

int main() {
  int base, expoente, raizQuadrada;

  printf("Informe a base: ");
  scanf("%d", &base);

  printf("Informe o expoente: ");
  scanf("%d", &expoente);

  printf("Informe o numero para calcular a raiza quadrada: ");
  scanf("%d", &raizQuadrada);

  printf("%d elevado a %d: %.2lf\n", base, expoente, pow(base, expoente));

  printf("Raiza quadrada de %d: %.2lf\n", raizQuadrada, sqrt(25));
}
