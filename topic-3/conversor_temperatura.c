/**
 * Exercício - Conversor de temperatura
 * Faça um programa conversor de temperatura, que receba a temperatura em graus Celsius e converta-a para Fahrenheit
 *
 * Formula : Tf = (9/5) * Tc + 32
 *
 * Desafio: Converta o número para graus Kelvin também
 *
 */

#include<stdio.h>

int main(){
  int C;
  scanf("%d", &C);
  printf("%.2f", (9/5.) * C + 32);
  return 1;
}
