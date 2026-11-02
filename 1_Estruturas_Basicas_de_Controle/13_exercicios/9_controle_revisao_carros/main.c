// Controle de Revisão de Carros

// Uma concessionária deseja criar um sistema para registrar os
// carros que entram para revisão e verificar quais precisam de
// reparos urgentes. O sistema deve:

// 1. Pedir ao usuário quantos carros serão registrados.

// 2. Para cada carro, solicitar:

// - Modelo
// - Ano de fabricação
// - Se está funcionando normalmente (1 ou 0).

// 3. Exibir uma mensagem indicando se o carro está em boas
// condições ou se precisa de reparos urgentes
// (se for muito antigo ou estiver com problemas).

// - Se o ano for menor que 2005 e o carro não estiver funcionando
// normalmente, então, retorne "O carro X precisa de REPAROS URGENTES!".

// - Se o ano for menor que 2005 e o carro estiver funcionando normalmente,
// então, retorne "O carro X é antigo, recomenda-se uma revisão!".

// - Se o ano for igual ou maior que 2005 e não estiver funcionando normalmente,
// então, retorne "O carro X precisa de manutenção!".

// - Se o ano for igual ou maior que 2005 e estiver funcionando normalmente,
// então, retorne "O carro X está em boas condições!".

#include <stdio.h>

int main() {
  int i, qtdCarrosRegistrados;

  printf("Informe quantos carros devem ser registrados: ");
  scanf("%d", &qtdCarrosRegistrados);

  for (i = 1; i <= qtdCarrosRegistrados; i++) {
    char modelo[50];
    int anoFabricacao, funcionando;

    printf("\n=====================\n");
    printf("Carro: %d\n", i);

    printf("Modelo: ");
    scanf("%s", modelo);

    printf("Ano fabricacao: ");
    scanf("%d", &anoFabricacao);

    printf("Funcionando normalmente: ");
    scanf("%d", &funcionando);

    if (anoFabricacao < 2005 && funcionando == 0) {
      printf("O carro '%s' precisa de REPAROS URGENTES!", modelo);
    } else if (anoFabricacao < 2005 && funcionando == 1) {
      printf("O carro '%s' e antigo, recomenda-se uma revisao!", modelo);
    } else if (anoFabricacao >= 2005 && funcionando == 0) {
      printf("O carro '%s' precisa de manutencao!", modelo);
    } else if (anoFabricacao >= 2005 && funcionando == 1) {
      printf("O carro '%s' esta em boas condições!", modelo);
    } else {
      printf("Nao foi possivel cadastrar o carro");
    }
  }

  return 0;
}
