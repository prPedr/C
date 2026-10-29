#include <stdio.h>

int main() {
  int numero = 10;
  float numeroFloat = 50.16;
  char letra = 'A'; // char --> Espera so um caracter
  char meuNome[6] = "Pedro"; // Ao declarar um texto com limitando sempre colocar com um caracter a mais pois a pos o texto é adicionado um 0 no final
  
  printf("Numero: %d \n", numero); // %d --> Numero inteiro
  printf("Float: %.2f \n", numeroFloat); // %f --> Numero float
  printf("Letra: %c \n", letra); // %c --> Texto char
  printf("Meu nome: %s", meuNome);

  return 0;
}
