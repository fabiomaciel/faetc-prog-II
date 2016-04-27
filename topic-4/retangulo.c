/**
 * Faça um programa que imprima um retângulo conforme abaixo:
 *
 * **********
 *
 * **********
 *
 * **********
 *
 * **********
 *
 * Utilize o loop for na sua programação
 *
 * Desafio : Modifique o programa anterior para que seja solicitado ao usuário,
 * que informe o comprimento e a altura do retângulo.
 * Depois o retângulo deverá ser impresso com o comprimento e a altura especificados.
 *
 */

#include<stdio.h>


int main(){

  int comprimento, altura;

   scanf("%d", &comprimento);
   scanf("%d", &altura);

   int i, j;
   for(i = 0; i < altura; i++){
     for(j = 0; j < comprimento; j++){
       printf("*");
     }
     printf("\n");
   }

  return 0;
}
