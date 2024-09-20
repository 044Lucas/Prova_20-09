#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite;
    int tentativas = 0;
    const int MAX_TENTATIVAS = 7;

    // Inicializa o gerador de números aleatórios
    srand(time(0));
    numeroSorteado = rand() % 100 + 1; // Sorteia um número entre 1 e 100

    printf("Tente adivinhar o numero entre 1 e 100. Voce tem %d tentativas.\n", MAX_TENTATIVAS);

    // Loop para permitir que o usuário faça palpites
    while (tentativas < MAX_TENTATIVAS) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSorteado) {
            printf("O numero eh maior. Tente novamente.\n");
        } else if (palpite > numeroSorteado) {
            printf("O numero eh menor. Tente novamente.\n");
        } else {
            printf("Parabens! Voce acertou o numero %d em %d tentativas.\n", numeroSorteado, tentativas);
            return 0; // Encerra o programa
        }
    }

    printf("Voce esgotou suas tentativas. O numero era %d.\n", numeroSorteado);
    return 0;
}
