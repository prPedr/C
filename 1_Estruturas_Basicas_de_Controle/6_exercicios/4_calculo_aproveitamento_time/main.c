// 4 - Calculando o Aproveitamento de um Time

// Crie um programa que peça o número
// de vitórias, empates e derrotas de
// um time. Depois, calcule o número
// total de pontos, seguindo a regra:

// Vitória = 3 pontos
// Empate = 1 ponto
// Derrota = 0 pontos

#include <stdio.h>

int main() {
  int numeroVitorias, numeroEmpates, numeroDerrotas;
  int valorVitoria = 3, valorEmpate = 1, valorDerrota = 0;

  printf("Numero de vitorias: ");
  scanf("%d", &numeroVitorias);

  printf("Numero de empates: ");
  scanf("%d", &numeroEmpates);

  printf("Numero de derrotas: ");
  scanf("%d", &numeroDerrotas);

  int totalPontos = (numeroVitorias * valorVitoria) + (numeroEmpates * valorEmpate) + (numeroDerrotas * valorDerrota);

  printf("Vitorias - %d | Empates - %d | Derrotas - %d | Pontos - %d", numeroVitorias, numeroEmpates, numeroDerrotas, totalPontos);

  return 0;
}