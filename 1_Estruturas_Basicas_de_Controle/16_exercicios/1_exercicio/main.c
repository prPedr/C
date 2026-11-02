#include <stdio.h>

int main() {
    int totalMoedas = 0;
    int rodadas = 0;
    int moedasRodada;

    printf("=== JOGO DA COLETA DE MOEDAS ===\n");

    while (totalMoedas < 100) {
        printf("Digite a quantidade de moedas coletadas nesta rodada (1 a 10): ");
        scanf("%d", &moedasRodada);

        if (moedasRodada >= 1 && moedasRodada <= 10) {
            totalMoedas += moedasRodada;
            rodadas++;                  
            printf("Total acumulado ate agora: %d moedas\n\n", totalMoedas);
        } else {
            printf("Quantidade invalida! Digite um valor entre 1 e 10.\n\n");
        }
    }

    printf("===================================\n");
    printf("Meta atingida! Você passou de 100 moedas.\n");
    printf("Foram necessarias %d rodadas para atingir a meta.\n", rodadas);

    return 0;
}
