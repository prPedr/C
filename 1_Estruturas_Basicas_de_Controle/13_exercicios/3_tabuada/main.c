// 3 – Tabuada

// Escreva um programa que recebe um número inteiro
// do usuário e imprime a tabuada desse número de 0 a 10.

// Exemplo de saída se o usuário digitar 5:

// 5 x 0 = 0​
// 5 x 1 = 5 
// 5 x 2 = 10 
// 5 x 3 = 15 
// ... 
// 5 x 10 = 5

#include <stdio.h>

int main() {
  int i, j;

  for (i = 0; i <= 10; i++) {
    printf("\n==========================\n");
    printf("Tabuada do: %d\n", i);
    
    for (j = 0; j <= 10; j++) {
      printf("%d x %d = %d\n", i, j, i * j);
    }
  }

  return 0;
}
