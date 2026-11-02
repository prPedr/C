// 2. Contar vogais em uma palavra

// Crie uma função que recebe uma string (char[ ]) e
// retorna a quantidade de vogais.


#include <stdio.h>
#include <string.h>

int contarTexto(char palavra[]) {
  size_t tamanho = strlen(palavra);

  return tamanho;
}

int main() {
  char texto[50];
  int contagem;

  printf("Digite a palavra: ");
  scanf("%s", texto);

  contagem = contarTexto(texto);

  printf("A palavra '%s' tem: %d letras\n", texto, contagem);

  return 0;
}
