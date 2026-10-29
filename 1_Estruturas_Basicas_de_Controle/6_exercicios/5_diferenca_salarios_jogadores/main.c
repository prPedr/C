// 5 - Diferença de Salários entre Jogadores

// Peça ao usuário os salários de dois
// jogadores de futebol e mostre a
// diferença entre eles.

#include <stdio.h>

int main() {
  float salarioJogadorUm, salarioJogadorDois;

  printf("Informe o salario do primeiro jogador: ");
  scanf("%f", &salarioJogadorUm);

  printf("Informe o salario do segundo jogador: ");
  scanf("%f", &salarioJogadorDois);

  if (salarioJogadorUm > salarioJogadorDois) {
    float diferenca = salarioJogadorUm - salarioJogadorDois;
    printf("O salario do Jogador Um e maior | Diferenca: R$ %.2f\n", diferenca);
  }

  else if (salarioJogadorDois > salarioJogadorUm) {
    float diferenca = salarioJogadorDois - salarioJogadorUm;
    printf("O salario do Jogador Dois e maior | Diferenca: R$ %.2f\n", diferenca);
  }

  else {
    printf("O salario dos dois jogadores sao iguais.\n");
  }

  return 0;
}
