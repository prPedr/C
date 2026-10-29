#include <stdio.h>

int main() {
  char nomePessoa[25];
  printf("Qual o seu nome? ");
  scanf("%s", &nomePessoa); // & --> é usado para armazenar o valor na memoria do computador

  int idadePessoa;
  printf("%s para seguirmos com o seu cadastro qual o sua idade? ", nomePessoa);
  scanf("%d", &idadePessoa);

  printf("\nInformacoes da pessoa - Nome: %s | Idade: %d", nomePessoa, idadePessoa);
}
