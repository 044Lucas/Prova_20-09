#include <stdio.h>

int main() {
    int opcao, numero;

    do {
        // Exibe o menu
        printf("\nMenu:\n");
        printf("1. Gerar a tabuada de um numero\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Verifica se a opção é para sair
        if (opcao == 2) {
            printf("Saindo do programa...\n");
            break;
        }

        // Solicita o número para a tabuada
        if (opcao == 1) {
            printf("Digite o numero desejado: ");
            scanf("%d", &numero);

            printf("Tabuada de %d:\n", numero);
            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
