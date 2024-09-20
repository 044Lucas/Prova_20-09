#include <stdio.h>

int main() {
    float nota;

    for (int i = 0; i < 8; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);

        printf("Aluno %d: ", i + 1);

        if (nota >= 9.0 && nota <= 10.0) {
            printf("Conceito A\n");
        } else if (nota >= 7.0 && nota < 9.0) {
            printf("Conceito B\n");
        } else if (nota >= 5.0 && nota < 7.0) {
            printf("Conceito C\n");
        } else if (nota >= 3.0 && nota < 5.0) {
            printf("Conceito D\n");
        } else if (nota < 3.0) {
            printf("Conceito F\n");
        } else {
            printf("Nota inválida\n");
        }
    }

    return 0;
}
