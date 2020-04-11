#include <stdio.h>

int main()

{

    int opcao;

    printf("\n\nDigite um número de 1 a 7: ");
    scanf("%d", &opcao);
    printf("\n");
    switch (opcao)

    {
      case 1: 
      printf("O dia da semana é Domingo. \n\n");
      break;

      case 2: 
      printf("O dia da semana é Segunda-feira. \n\n");
      break;

      case 3: 
      printf("O dia da semana é Terça-feira. \n\n");
      break;

      case 4: 
      printf("O dia da semana é Quarta-feira. \n\n");
      break;

      case 5: 
      printf("O dia da semana é Quinta-feira. \n\n");
      break;

      case 6: 
      printf("O dia da semana é Sexta-feira. \n\n");
      break;

      case 7: 
      printf("O dia da semana é Sábado. \n\n");
      break;

      default : 
      printf("Não existe dia da semana para esse número. \n\n");
      break;

    }

    

}