// 8 - Controle de Estoque no Supermercado

// O supermercado deseja controlar o estoque de seus produtos
// e verificar quais precisam ser repostos. O programa deve:
// Pedir ao usuário quantos produtos ele deseja cadastrar.
// Para cada produto, solicitar:

// - Nome do produto
// - Quantidade em estoque
// - Estoque mínimo recomendado
// - Exibir imediatamente se o produto precisa de reposição ou não.

#include <stdio.h>

int main() {
  int i, qtdProdutos;

  printf("Informe quantos produtos deseja cadastrar: ");
  scanf("%d", &qtdProdutos);

  for (i = 1; i <= qtdProdutos; i++) {
    char nomeProduto[50];
    int qtdEstoque, estoqueMinimo;

    printf("\n=================\n");
    printf("Produto: %d\n", i);

    printf("Nome do produto: ");
    scanf("%s", &nomeProduto);

    printf("Quantidade em estoque: ");
    scanf("%d", &qtdEstoque);

    printf("Estoque minimo: ");
    scanf("%d", &estoqueMinimo);

    if (qtdEstoque > estoqueMinimo) {
      printf("O produto '%s' tem estoque suficiente. (Estoque: %d | Minimo: %d)\n", nomeProduto, qtdEstoque, estoqueMinimo);
    } else {
      printf("O produto '%s' precisa ser resposto. (Estoque: %d | Minimo: %d)", nomeProduto, qtdEstoque, estoqueMinimo);
    }
  }

  return 0;
}
