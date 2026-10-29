// 3 - Conversão de Minutos para Tempo de Jogo

// Peça ao usuário para digitar o tempo
// jogado em minutos. Depois, converta
// esse valor para horas e minutos e exiba
// o resultado.

#include <stdio.h>

int main() {
  int tempoJogadoMinutos;

  printf("Quantos minutos voce jogou? ");
  scanf("%d", &tempoJogadoMinutos);

  float conversaoTempoJogadoHorasMinutos = (float)tempoJogadoMinutos / 60;

  printf("Minutos Jogados: %d | Horas e Minutos: %.2f", tempoJogadoMinutos, conversaoTempoJogadoHorasMinutos);

  return 0;
}
