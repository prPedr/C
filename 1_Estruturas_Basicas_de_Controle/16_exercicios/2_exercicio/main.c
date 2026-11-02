#include <stdio.h>

int main() {
    int palpite;
    int numeroSecreto = 7;

    printf("=== JOGO DA ADIVINHACAO ===\n");

    do {
        printf("Digite seu palpite (entre 1 e 10): ");
        scanf("%d", &palpite);

        if (palpite != numeroSecreto) {
            printf("Errou! Tente novamente.\n\n");
        }

    } while (palpite != numeroSecreto);

    printf("\nVoce acertou!\n");

    return 0;
}
