// 9 – Classificação do jogador baseada em idade e desempenho

// Escreva um programa que solicita ao usuário:
// A idade do jogador.
// A quantidade de gols marcados.
// O programa deve classificar o jogador nas seguintes categorias:
// ✅ Se tem até 20 anos e fez mais de 10 gols: "Jovem talento promissor!"
// ✅ Se tem até 20 anos e fez 10 gols ou menos: "Jovem em desenvolvimento."
// ✅ Se tem mais de 20 anos e fez mais de 15 gols: "Jogador experiente em grande fase!"
// ✅ Se tem mais de 20 anos e fez 15 gols ou menos: "Estevão"

#include <stdio.h>

int main() {
  int idadeJogador;

  printf("Qual a idade do jogador? ");
  scanf("%d", &idadeJogador);

  if (idadeJogador < 15 || idadeJogador > 55) {
    if (idadeJogador < 15) {
      printf("O jogador ainda esta nas categorias de base.\n");
    } else {
      printf("A idade do jogador e muito avancada.\n");
    }
  } else {
    int golsMarcados;

    printf("Quantos gols o jogador marcou na temporada? ");
    scanf("%d", &golsMarcados);

    if (idadeJogador <= 20 && golsMarcados > 10) {
      printf("Jovem talento promissor!\n");
    } 
    else if (idadeJogador <= 20 && golsMarcados <= 10) {
      printf("Jovem em desenvolvimento.\n");
    } 
    else if (idadeJogador > 20 && golsMarcados > 15) {
      printf("Jogador experiente em grande fase!\n");
    } 
    else {
      printf("Jogador experiente com desempenho padrao.\n");
    }
  }
  
  return 0;
}
