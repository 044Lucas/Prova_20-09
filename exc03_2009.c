#include <stdio.h>

void converterParaBase(int numero, int base) {
    char resultado[32]; // Array para armazenar o resultado
    int i = 0;

    // Laço para converter o número para a base desejada
    while (numero > 0) {
        int resto = numero % base;
        
        // Converte o resto para caractere
        if (resto < 10) {
            resultado[i] = '0' + resto; // Para dígitos de 0 a 9
        } else {
            resultado[i] = 'A' + (resto - 10); // Para dígitos de A a F
        }
        
        numero /= base;
        i++;
    }

    // Exibe o resultado na ordem correta
    printf("Número convertido: ");
    for (int j = i - 1; j >= 0; j--) {
        putchar(resultado[j]);
    }
    printf("\n");
}

int main() {
    int numero, base;

    // Solicita um número decimal ao usuário
    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    // Solicita a base de conversão
    printf("Digite a base de conversão (entre 2 e 16): ");
    scanf("%d", &base) ;
}
