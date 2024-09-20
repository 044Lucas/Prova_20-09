#include <stdio.h>

int main() {
    int opcao;
    float temperatura, resultado;

    do {
        // Exibe o menu
        printf("\nMenu de Conversão de Temperatura:\n");
        printf("1. Converter de Celsius para Fahrenheit\n");
        printf("2. Converter de Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                resultado = (temperatura * 9 / 5) + 32;
                printf("Temperatura em Fahrenheit: %.2f\n", resultado);
                break;

            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                resultado = (temperatura - 32) * 5 / 9;
                printf("Temperatura em Celsius: %.2f\n", resultado);
                break;

            case 3:
                printf("Saindo do programa...\n");
                break;

		}
