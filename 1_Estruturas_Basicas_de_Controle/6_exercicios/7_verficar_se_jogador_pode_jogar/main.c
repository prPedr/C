// 7 – Verificar se um Jogador Pode Jogar

// Escreva um programa que solicita
// ao usuário a idade de um jogador
// e verifica se ele pode jogar na
// categoria Sub-20 (jogadores com 20 anos ou menos).
// Se for mais velho, ele deve jogar
// na categoria profissional.

#include <stdio.h>

int main() {
  char nome[25];
  int idadeJogador, idadeLimite = 20;

  printf("Informe o seu nome: ");
  scanf("%s", &nome);

  printf("Informe sua idade: ");
  scanf("%d", &idadeJogador);

  if (idadeJogador <= 15) {
    printf("O jogador é muito novo, nao pode jogar nem o Sub-20 nem o profissional");
  } else if (idadeJogador <= 20) {
    printf("Voce pode jogar a categoria Sub-20");
  } else if (idadeJogador <= 50) {
    printf("Voce vai jogar na categoria de profissional");
  } else if (idadeJogador > 50) {
    printf("Ja pode pensar em aposentar");
  } else {
    printf("Erro ao ler as informacoes");
  }

  return 0;
}
