// 6 - Verificação de Cartão Vermelho

// Um jogador recebe cartão vermelho
// se receber 2 cartões amarelos no
// jogo. Escreva um programa que verifica
// se um jogador será expulso, baseado
// na quantidade de cartões amarelos.

#include <stdio.h>

int main() {
  int qtdCartoesAmarelos, limitCartoesAmarelos = 2; 

  printf("Quantos cartoes voce recebeu no jogo? ");
  scanf("%d", &qtdCartoesAmarelos);

  int expulsao = qtdCartoesAmarelos == limitCartoesAmarelos;

  if (qtdCartoesAmarelos == 0) {
    printf("Voce nao possuiu nenhum cartao pode ficar tranquilo");
  } else if (qtdCartoesAmarelos == 1) {
    printf("Tome cuidado que voce ja recebeu um cartao, no proximo é expulsao");
  } else if (expulsao) {
    printf("Voce recebeu o segundo amarelo, por isso vai ser expulso");
  } else if (qtdCartoesAmarelos > 2) {
    printf("Voce nao pode levar mais de dois cartoes amarelos pois ja foi expulso do jogo");
  } else {
    printf("Informato de dados invalidos");
  }

  return 0;
}
