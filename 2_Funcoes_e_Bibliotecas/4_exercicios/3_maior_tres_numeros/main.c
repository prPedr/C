// 3. Encontrar o maior de três números

// Crie uma função que receba três inteiros e retorne o maior deles.

#include <stdio.h>

int maiorNumero(int num1, int num2, int num3) {
  if (num1 > num2 && num1 > num3) {
    return num1;
  } else if (num2 > num1 && num2 > num3) {
    return num2;
  } else if (num3 > num1 && num3 > num2) {
    return num3;
  }
}

int main() {
  int n1, n2, n3, resultado;

  printf("Primeiro numero: ");
  scanf("%d", &n1);

  printf("Segundo numero: ");
  scanf("%d", &n2);

  printf("Terceiro numero: ");
  scanf("%d", &n3);

  resultado = maiorNumero(n1, n2, n3);

  printf("O maior numero informado e o: %d", resultado);

  return 0;
}
