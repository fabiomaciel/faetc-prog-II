/**
 * Faça um programa que imprima uma arvore de natal conforme abaixo:
 *     /**\
 *    /****\
 *   /******\
 *  /********\
 * /**********\
 *     | |
 *     | |
 *     | |
 *
 * Utilize o loop for na sua programação
 *
 */

#include<stdio.h>

int main(){
  int size = 5;
  int i, j;
  for(i = 1; i <= size; i++){
    for(j = 0; j < size-i; j++){
      printf(" ");
    }
    printf("/");
    for(j = 0; j < i*2; j++){
      printf("*");
    }
    printf("\\\n");
  }

  for(i = 1; i <= 3; i++){
    for(j = 0; j < size - 1; j++){
      printf(" ");
    }
    printf("| |\n");
  }


  return 0;
}
