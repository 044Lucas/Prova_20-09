
#include <stdio.h>

int main() {
    int numero, soma = 0;

    // Solicita um número inteiro positivo ao usuário
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é válido
    if (numero <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Loop para somar os divisores próprios
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i; // Adiciona o divisor à soma
        }
    }

    // Verifica se a soma dos divisores é igual ao número
    if (soma == numero) {
        printf("%d é um número perfeito.\n", numero);
    } else {
        printf("%d não é um número perfeito.\n", numero);
    }

    return 0; // Encerra o programa com sucesso
}
