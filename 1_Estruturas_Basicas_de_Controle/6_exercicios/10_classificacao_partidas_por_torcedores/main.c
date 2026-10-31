// 10 – Classificação do nível da partida com base na quantidade de torcedores

// Escreva um programa que solicita ao usuário:
// A capacidade total do estádio.
// A quantidade de torcedores presentes no jogo.

// Com base na taxa de ocupação do estádio, o programa deve classificar a
// partida da seguinte forma:
// ✅ Se o estádio estiver com mais de 90% da capacidade ocupada: "Lotado!"
// ✅ Se estiver entre 70% e 90% (inclusive): "Ótima presença de público!"
// ✅ Se estiver entre 50% e 70% (inclusive): "Público razoável."
// ✅ Se estiver abaixo de 50%: "Morumbis"

#include <stdio.h>

int main() {
  int capacidadeTotal, torcedoresPresentes;

  printf("Qual a capacidade total do estadio: ");
  scanf("%d", &capacidadeTotal);

  printf("Qual o total de torcedores no jogo? ");
  scanf("%d", &torcedoresPresentes);

  if (capacidadeTotal < torcedoresPresentes) {
    printf("Tem mais torcedores que o estadio suporta");
  }

  float taxaOcupacao = ((float)torcedoresPresentes / capacidadeTotal) * 100;

  if (taxaOcupacao > 90) {
    printf("Lotado!");
  } else if (taxaOcupacao >= 50) {
    printf("Otima presenca de publico");
  } else if (taxaOcupacao >= 50) {
    printf("Publico razoavel");
  } else {
    printf("Morumbi");
  }

  return 0;
}
