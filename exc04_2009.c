#include <stdio.h>

int main() {
    int numeros[10];
    int pares = 0, impares = 0;

    // Solicita ao usu�rio para inserir 10 n�meros inteiros
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Conta quantos n�meros s�o pares e �mpares
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    // Exibe os resultados
    printf("Quantidade de n�meros pares: %d\n", pares);
    printf("Quantidade de n�meros �mpares: %d\n", impares);

    return 0;
}
