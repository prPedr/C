#include <stdio.h>

int main() {
  int num1, num2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);

  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  int soma = num1 + num2;
  printf("%d + %d = %d", num1, num2, soma);

  int menos = num1 - num2;
  printf("\n%d - %d = %d", num1, num2, menos);

  int multiplicacao = num1 * num2;
  printf("\n%d x %d = %d", num1, num2, multiplicacao);

  float divisao = num1 / num2;
  printf("\n%d / %d = %.2f", num1, num2, divisao);
}
