#include <stdio.h>

int main() {
  int diaSemana;

  printf("Escolha um dia da Semana:\n");
  printf("1 - Segunda\n");
  printf("2 - Terca\n");
  printf("3 - Quarta\n");
  printf("4 - Quinta\n");
  printf("5 - Sexta\n");
  printf("6 - Sabado\n");
  printf("7 - Domingo\n");
  printf("Digite a sua opcao: ");
  scanf("%d", &diaSemana);

  switch (diaSemana) {
    case 1:
      printf("Segunda");
      break;
    case 2:
      printf("Terca");
      break;
    case 3:
      printf("Quarta");
      break;
    case 4:
      printf("Quinta");
      break;
    case 5:
      printf("Sexta");
      break;
    case 6:
      printf("Sabado");
      break;
    case 7:
      printf("Domingo");
      break;
    default:
      printf("Opcao invalida");
  }

  return 0;
}
