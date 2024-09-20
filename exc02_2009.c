#include <stdio.h>

int main() {
    int i;
    float nota, peso, media, somaNotas = 0, somaPesos = 0;

    for (i = 1; i <= 5; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        
        printf("Digite o peso da nota do aluno %d: ", i);
        scanf("%f", &peso);

        // Calcula a média ponderada do aluno
        media = nota * peso;
        printf("Média ponderada do aluno %d: %.2f\n", i, media);

        // Acumula as notas e pesos para a média final
        somaNotas += media;
        somaPesos += peso;
    }

    // Calcula a média final da turma
    float mediaFinal = somaNotas / somaPesos;
    printf("Média final da turma: %.2f\n", mediaFinal);

    return 0;
}
