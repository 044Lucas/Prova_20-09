
#include <stdio.h>

int main() {
    int numero, soma = 0;

    // Solicita um n�mero inteiro positivo ao usu�rio
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � v�lido
    if (numero <= 0) {
        printf("Por favor, digite um n�mero inteiro positivo.\n");
        return 1; // Encerra o programa com c�digo de erro
    }

    // Loop para somar os divisores pr�prios
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i; // Adiciona o divisor � soma
        }
    }

    // Verifica se a soma dos divisores � igual ao n�mero
    if (soma == numero) {
        printf("%d � um n�mero perfeito.\n", numero);
    } else {
        printf("%d n�o � um n�mero perfeito.\n", numero);
    }

    return 0; // Encerra o programa com sucesso
}
