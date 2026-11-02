// 5. Criar um padrão de asteriscos

// Crie uma função que imprime um quadrado de asteriscos
// com lado n. O usuário dirá qual o valor de n e qual
// caracter será usado (*, #, $ ...).

#include <stdio.h>

int quadrado(int dimensao, char caracter[2]) {
  int i, j;

  for (i = 1; i <= dimensao; i++) {
    for (j = 1; j <= dimensao; j++) {
      printf("%s ", caracter);
    }

    printf("\n");
  }

  return 0;
}

int main() {
  char simbolo[2];
  int contador;

  printf("Dimensao do quadrado: ");
  scanf("%d", &contador);

  printf("Escolha o caracter (*, #, $ ...): ");
  scanf("%s", simbolo);

  quadrado(contador, simbolo);

  return 0;
}
