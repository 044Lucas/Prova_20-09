#include <stdio.h>

int main() {
    float notas[5][2]; // Array para armazenar as notas de 5 alunos
    float media;

    // Loop para inserir as notas
    for (int i = 0; i < 5; i++) {
        printf("Digite as duas notas do aluno %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Calcula e exibe a média e o status de cada aluno
    for (int i = 0; i < 5; i++) {
        media = (notas[i][0] + notas[i][1]) / 2;

        if (media >= 7.0) {
            printf("Aluno %d: Media = %.2f - Aprovado\n", i + 1, media);
        } else if (media >= 5.0) {
            printf("Aluno %d: Media = %.2f - Recuperacao\n", i + 1, media);
        } else {
            printf("Aluno %d: Media = %.2f - Reprovado\n", i + 1, media);
        }
    }

    return 0;
}

