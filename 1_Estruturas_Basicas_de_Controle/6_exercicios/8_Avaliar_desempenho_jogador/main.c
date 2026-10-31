// 8 – Avaliar o desempenho do jogador

// Escreva um programa que pede ao usuário a quantidade de gols
// marcados por um jogador em uma temporada e verifica:
// Se fez mais de 10 gols, exibir "Excelente temporada!"
// Se fez entre 5 e 10 gols (inclusive), exibir "Boa temporada!"
// Se fez menos de 5 gols, exibir "Temporada abaixo do esperado."

#include <stdio.h>

int main() {
  int golsMarcados;

  printf("Quantos gols o jogador marcou na temporada? ");
  scanf("%d", &golsMarcados);

  if (golsMarcados > 10) {
    printf("Exelente temporada!");
  } else if (golsMarcados <= 10 && golsMarcados >= 5) {
    printf("Boa temporada!");
  } else if (golsMarcados < 5) {
    printf("Temporada abaixa do esperado");
  } else {
    printf("Nao foi possivel avalidar a temporada do jogador");
  }

  return 0;
}
