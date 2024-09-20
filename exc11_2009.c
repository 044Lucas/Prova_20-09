#include <stdio.h>

int main() {
    int numero;

    for (int i = 0; i < 6; i++) {
        printf("Digite 6 numeros inteiros: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0) { // Verifica se o número é par
            printf("numero e par. ", numero);
            if (numero > 10) {
                printf("E maior que 10.\n");
            } else {
                printf("Nao e maior que 10.\n");
            }
        } else { // Se o número é ímpar
            printf("numero e impar. ", numero);
            if (numero < 50) {
                printf("E menor que 50.\n");
            } else {
                printf("Nao é menor que 50.\n");
            }
        }
    }

    return 0;
}
