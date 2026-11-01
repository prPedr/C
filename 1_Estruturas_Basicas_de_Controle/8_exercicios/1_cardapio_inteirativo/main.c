// Exercício 1: Cardápio Interativo
// Crie um programa que exiba um menu com 4 opções de lanches:

// Hambúrguer
// Cachorro-quente
// Pizza
// Sair

// O usuário deve digitar a opção desejada e o programa deve
// mostrar uma mensagem correspondente. Se o usuário digitar 4,
// o programa deve exibir "Encerrando pedido...". Se digitar
// qualquer outro número, mostrar "Opção inválida!".

#include <stdio.h>

int main() {
  int escolhaLanche;

  printf("|------------------------|\n");
  printf("|          MENU          |\n");
  printf("|------------------------|\n");
  printf("| 1 - Hamburguer         |\n");
  printf("| 2 - Cachorro-quente    |\n");
  printf("| 3 - Pizza              |\n");
  printf("| 4 - Sair               |\n");
  printf("|------------------------|\n");
  printf("Escoha a sua opcao: ");
  scanf("%d", &escolhaLanche);

  switch (escolhaLanche) {
    case 1:
      printf("Hamburguer confirmado.");
      break;
    case 2:
      printf("Cachorro-quente confirmado.");
      break;
    case 3:
      printf("Pizza confirmado.");
      break;
    case 4:
      printf("Saindo...");
      break;
    default:
      printf("Opcao invalida");
  }

  return 0;
}
