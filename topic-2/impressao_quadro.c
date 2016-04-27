/**
 * Faça um programa que exiba um quadrado com 5 linha por 5 colunas e
 * preenchimento vazio utilizando o caractere (177 -> 0xB1 ou 0xDB)
 * conforme abaixo :
 * ▒▒▒▒▒
 * ▒   ▒
 * ▒   ▒
 * ▒   ▒
 * ▒▒▒▒▒
 *
 * Desafio : Modifique o programa e o tamanho do quadro para imprimir o texto “Linguagem de Programação C” dentro do quadro.
 * Desafio II : Modifique o programa para imprimir tudo isso usando apenas uma linha de printf
 */

#include<stdio.h>

int main(){

  printf("%s%s\n%s\n%s\n%s\n%s%s\n",
         "\177\177\177\177\177\177\177\177\177\177\177\177\177\177\177",
         "\177\177\177\177\177\177\177\177\177\177\177\177\177\177\177",
         "\177                            \177",
         "\177 Linguagem de Programação C \177",
         "\177                            \177",
         "\177\177\177\177\177\177\177\177\177\177\177\177\177\177\177",
         "\177\177\177\177\177\177\177\177\177\177\177\177\177\177\177");
  return 0;
}
