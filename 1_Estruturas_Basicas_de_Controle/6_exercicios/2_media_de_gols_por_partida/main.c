// 2 - Média de Gols por Partida

// Escreva um programa que receba o número
// total de gols de um jogador e a quantidade
// de partidas jogadas. Depois, calcule e exiba
// a média de gols por partida.


#include <stdio.h>

int main() {
  char nomeJogador[25];
  int idadeJogador, quantidadePartidas, golsMarcados;

  printf("Nome do jogador: ");
  scanf("%s", &nomeJogador);

  printf("Idade do jogador: ");
  scanf("%d", &idadeJogador);

  printf("Partidas jogadas: ");
  scanf("%d", &quantidadePartidas);

  printf("Gols marcados: ");
  scanf("%d", &golsMarcados);

  float mediaGolsMarcados = (float)golsMarcados / quantidadePartidas;
  printf(
    "\nNome: %s | Idade: %d | Partidas: %d | Gols: %d | Media: %.2f",
    nomeJogador, idadeJogador,quantidadePartidas, golsMarcados, mediaGolsMarcados
  );

  return 0;
}
