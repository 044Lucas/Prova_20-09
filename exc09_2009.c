#include <stdio.h>

int main() {
    int idade;

    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        printf("Pessoa %d: ", i + 1);

        if (idade >= 0 && idade <= 12) {
            printf("Criança\n");
        } else if (idade >= 13 && idade <= 17) {
            printf("Adolescente\n");
        } else if (idade >= 18 && idade <= 64) {
            printf("Adulto\n");
        } else if (idade >= 65) {
            printf("Idoso\n");
        } else {
            printf("Idade inválida\n");
        }
    }

    return 0;
}
