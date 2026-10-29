#include <stdio.h>

int main() {
  char nomePessoa[25];
  printf("Qual o seu nome? ");
  scanf("%s", &nomePessoa);

  int idadePessoa;
  printf("%s, qual a suda idade? ", nomePessoa);
  scanf("%d", &idadePessoa);

  int calculoMaiorIdade = idadePessoa >= 18;

  if (calculoMaiorIdade) {
    printf("\n%s, voce e maior de idade, pode fazer o exame de direcao", nomePessoa);
  } else {
    printf("\n%s, voce e menor de idade, nao pode fazer o exame de direcao", nomePessoa);
  }
}
