#include <stdio.h>

void converterParaBase(int numero, int base) {
    char resultado[32]; // Array para armazenar o resultado
    int i = 0;

    // La�o para converter o n�mero para a base desejada
    while (numero > 0) {
        int resto = numero % base;
        
        // Converte o resto para caractere
        if (resto < 10) {
            resultado[i] = '0' + resto; // Para d�gitos de 0 a 9
        } else {
            resultado[i] = 'A' + (resto - 10); // Para d�gitos de A a F
        }
        
        numero /= base;
        i++;
    }

    // Exibe o resultado na ordem correta
    printf("N�mero convertido: ");
    for (int j = i - 1; j >= 0; j--) {
        putchar(resultado[j]);
    }
    printf("\n");
}

int main() {
    int numero, base;

    // Solicita um n�mero decimal ao usu�rio
    printf("Digite um n�mero decimal: ");
    scanf("%d", &numero);

    // Solicita a base de convers�o
    printf("Digite a base de convers�o (entre 2 e 16): ");
    scanf("%d", &base) ;
}
