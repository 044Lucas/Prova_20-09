#include<stdio.h>
#include<math.h>
// 13) Escreva um programa que apresente um menu com as seguintes op��es:
// 1. Converter de Celsius para Fahrenheit.
//2. Converter de Fahrenheit para Celsius.
//3. Sair.
//O programa deve continuar exibindo o menu at� que o usu�rio escolha a op��o de sair. 
int main(void) {
  int opcao;
  float temperatura;
  do {
  printf("\nMenu de Convers�o:\n");
  printf("1. Converter de Celsius para Fahrenheit\n");
  printf("2. Converter de Fahrenheit para Celsius\n");
  printf("3. Sair\n");
  printf("Escolha uma op��o: ");
   scanf("%d", &opcao);

  switch (opcao) {
   case 1:
    printf("Digite a temperatura em Celsius: ");
     scanf("%f", &temperatura);
      printf("Temperatura em Fahrenheit: %.2f\n", (temperatura * 9/5) + 32);

  break;
   case 2:
    printf("Digite a temperatura em Fahrenheit: ");
     scanf("%f", &temperatura);
    printf("Temperatura em Celsius: %.2f\n", (temperatura - 32) * 5/9);

  break;
   case 3:
    printf("Saindo do programa...\n");

  break;
   default:
    printf("Op��o inv�lida! Tente novamente.\n");
      }
  } while (opcao != 3);



return 0;
}