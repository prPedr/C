// 6. Avaliação de desempenho

// Você tem 5 jogadores. Para cada jogador, leia 3 notas de
// avaliação (float). Calcule a média de cada jogador.
// Use if/else para classificar:

// Excelente: média >= 9
// Bom: entre 7 e 9
// Regular: entre 5 e 7
// Ruim: abaixo de 5

#include <stdio.h>

float avaliacao(int qtdJogadores) {
  int i;
  char nomeJogador[50];
  float n1, n2, n3, resultado;

  for (i = 1; i <= qtdJogadores; i++) {
    printf("\n===================\n");
    printf("\nNome do jogador: ");
    scanf("%s", nomeJogador);
    printf("Avaliacao do '%s'\n", nomeJogador);

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    printf("Nota 3: ");
    scanf("%f", &n3);

    resultado = (n1 + n2 + n3) / 3;
    printf("Media final: %.2f -> ", resultado);

    if (resultado >= 9) {
      printf("Exelente");
    } else if (resultado >= 7) {
      printf("Bom"); 
    } else if (resultado >= 5) {
      printf("Regular");
    } else {
      printf("Ruim");
    }
  }

  return 0;
}

int main() {
  int totalJogadores;

  printf("Quantidade de jogadores: ");
  scanf("%d", &totalJogadores);

  avaliacao(totalJogadores);

  return 0;
}
