// 2 – Soma dos Números de 1 a n

// O usuário digita um número n, e o programa
// calcula a soma de todos os números de 1 até n.

#include <stdio.h>

int main() {
  int i, n, soma = 0;

  printf("Informe o numero para contagem: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    soma += i;

    printf("%d", i);

    if (i < n) {
      printf(" + ");
    }
  }

  // printf("A soma de 1 ate %d e: %d\n", n, soma);
  printf(" = %d\n", soma);

  return 0;
}
