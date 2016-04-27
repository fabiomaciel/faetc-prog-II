/**
 * Exercicio - Programa para desenhar uma pirâmide
 * Faça um programa que imprima um triangulo conforme abaixo:
 *
 * *
 * **
 * ***
 * ****
 * *****
 * *****
 * ****
 * ***
 * **
 * *
 *
 * Utilize o loop for na sua programação
 * Desafio : Modifique o programa anterior para que seja solicitado ao usuário um número,
 * que será o comprimento e a  altura do triangulo.
 *
 */


#include<stdio.h>

int main(){

  int altura;

   scanf("%d", &altura);

   int i, j;
   for(i = 0; i < altura; i++){
     for(j = 0; j <= i; j++){
        printf("*");
     }
     printf("\n");
   }
   for(i = altura; i > 0; i--){
     for(j = 0; j < i; j++){
        printf("*");
     }
     printf("\n");
   }

  return 0;
}
