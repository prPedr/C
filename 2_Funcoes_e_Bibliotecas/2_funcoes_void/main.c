#include <stdio.h>

void mostrarMensagem() {
  printf("======================\n");
  printf("=== MENU DE OPCOES ===\n");
  printf("=== 1 - Ver saldo  ===\n");
  printf("=== 2 - Deposito   ===\n");
  printf("=== 3 - Saque      ===\n");
  printf("=== 4 - Sair       ===\n");
  printf("======================\n");
}

int main() {
  mostrarMensagem();

  int opcao;

  printf("Escolha uma opcao: ");
  scanf("%d", &opcao);
  
  printf("Voce escolheu a opcao %d: ", opcao);
  
  return 0;
}
