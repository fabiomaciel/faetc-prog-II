/**
 * Faça um programa que solicite um número ao usuário,
 * calcule seu fatorial e mostre-o na tela
 *
 */

#include<stdio.h>

int fatorial(int);
int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", fatorial(n));
  return 0;
}

int fatorial(int n){
  return n <= 1 ? 1 : n * fatorial(n-1);
}
