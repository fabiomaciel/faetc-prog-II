/**
 * Faça um programa que solicite um número para o usuário
 * e imprima a tabuada correspondente daquele numero (conforme abaixo):
 * 7 X 1 = 7
 * 7 X 2 = 14
 * 7 X 3 = 21
 * 7 X 4 = 28
 * 7 X 5 = 35
 * 7 X 6 = 42
 * 7 X 7 = 49
 * 7 X 8 = 56
 * 7 X 9 = 63
 * 7 X 10 = 70
 *
 * Utilize o loop for na sua programação
 * Desafio : Modifique o programa anterior para que seja
 * solicitado ao usuário qual o número multiplicador máximo da tabuada.
 *
 */

#include<stdio.h>

int main(){
  int N, MAX;
  scanf("%d", &N);
  scanf("%d", &MAX);
  int i;
  for(i = 1; i <= MAX; i++)
    printf("%d X %d = %d\n", N, i, N*i);

  return 0;
}
