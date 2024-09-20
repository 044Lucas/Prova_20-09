#include <stdio.h>

unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    int opcao, numero;

    do {
        // Exibe o menu
        printf("\nMenu:\n");
        printf("1. Calcular o fatorial de um numero\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Verifica se a opção é para sair
        if (opcao == 2) {
            printf("Saindo do programa...\n");
            break;
        }

        // Solicita o número para calcular o fatorial
        if (opcao == 1) {
            printf("Digite um numero inteiro: ");
            scanf("%d", &numero);

            if (numero < 0) {
                printf("Fatorial nao e definido para numeros negativos.\n");
            } else {
                printf("Fatorial de %d é %llu\n", numero, fatorial(numero));
            }
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
