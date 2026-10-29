// 1 - Apresentação do Jogador

// Crie um programa que peça o primeiro
// nome de um jogador, sua idade e a
// quantidade de gols que ele já fez na
// carreira. Em seguida, exiba essas
// informações na tela.

#include <stdio.h>

int main() {
  char nomeJogador[25];
  int idadeJogador, totalGolsMarcados;
  
  printf("Qual o seu primeiro nome? ");
  scanf("%s", &nomeJogador);

  printf("Qual a sua idade? ");
  scanf("%d", &idadeJogador);

  printf("Quantos gols voce marcou no campeonato? ");
  scanf("%d", &totalGolsMarcados);

  printf("Nome: %s | Idade: %d | Total de gols: %d", nomeJogador, idadeJogador, totalGolsMarcados);
}
