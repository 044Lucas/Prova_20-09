#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        // Exibe o menu
        printf("\nMenu de Operacoes:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Escolha uma op�ao: ");
        scanf("%d", &opcao);

        // Verifica se a op��o � para sair
        if (opcao == 5) {
            printf("Saindo do programa...\n");
            break;
        }

        // Solicita os dois n�meros
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        // Realiza a opera��o escolhida
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado da adi�ao: %.2f\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("Resultado da subtra�ao: %.2f\n", resultado);
                break;

            case 3:
                resultado = num1 * num2;
                printf("Resultado da multiplica�ao: %.2f\n", resultado);
                break;

            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado da divisao: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisao por zero!\n");
                }
                break;

            default:
                printf("Op��o invalida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
