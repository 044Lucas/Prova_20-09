#include <stdio.h>

int ehPrimo(int numero) {
    if (numero <= 1) return 0; // Números menores ou iguais a 1 não são primos
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return 0; // Se divisível por qualquer i, não é primo
    }
    return 1; // É primo
}

int main() {
    int inicio, fim;
    int temPrimos = 0; // Flag para verificar se encontrou primos

    // Solicita ao usuário os números inicial e final
    printf("Digite o valor inicial (inteiro positivo): ");
    scanf("%d", &inicio);
    printf("Digite o valor final (inteiro positivo): ");
    scanf("%d", &fim);

    // Verifica se os valores são válidos
    if (inicio <= 0 || fim <= 0 || inicio > fim) {
        printf("Valores invalidos! Certifique-se de que sejam inteiros positivos e que o inicial seja menor ou igual ao final.\n");
        return 1;
    }

    // Exibe os números primos no intervalo
    printf("Numeros primos entre %d e %d:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
            temPrimos = 1; // Encontrou pelo menos um primo
        }
    }

    if (!temPrimos) {
        printf("Nao ha numeros primos no intervalo.\n");
    } else {
        printf("\n");
    }

    return 0;
}
