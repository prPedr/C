// 4 – Números Pares de 1 a n

// O usuário digita um número n, e o programa
// imprime todos os números pares de 1 até n.

#include <stdio.h>

int main() {
  int i, escolhaNumero;

  printf("Escolha um numero: ");
  scanf("%d", &escolhaNumero);

  for (i = 1; i <= escolhaNumero; i++) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
  }

  return 0;
}
