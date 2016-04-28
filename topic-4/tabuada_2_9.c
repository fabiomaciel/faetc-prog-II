/**
 * Faça um pequeno programa que mostre a tabuada do 2 ao 9
 * na tela de uma vez só, usando o laço for conforme o exemplo abaixo:
 *
 * 2 X 1 = 2       3 X 1 = 3       4 X 1 = 4       5 X 1 = 5
 * 2 X 2 = 4       3 X 2 = 6       4 X 2 = 8       5 X 2 = 10
 * 2 X 3 = 6       3 X 3 = 9       4 X 3 = 12      5 X 3 = 15
 * 2 X 4 = 8       3 X 4 = 12      4 X 4 = 16      5 X 4 = 20
 * 2 X 5 = 10      3 X 5 = 15      4 X 5 = 20      5 X 5 = 25
 * 2 X 6 = 12      3 X 6 = 18      4 X 6 = 24      5 X 6 = 30
 * 2 X 7 = 14      3 X 7 = 21      4 X 7 = 28      5 X 7 = 35
 * 2 X 8 = 16      3 X 8 = 24      4 X 8 = 32      5 X 8 = 40
 * 2 X 9 = 18      3 X 9 = 27      4 X 9 = 36      5 X 9 = 45
 * 2 X 10 = 20     3 X 10 = 30     4 X 10 = 40     5 X 10 = 50
 * 6 X 1 = 6       7 X 1 = 7       8 X 1 = 8       9 X 1 = 9
 * 6 X 2 = 12      7 X 2 = 14      8 X 2 = 16      9 X 2 = 18
 * 6 X 3 = 18      7 X 3 = 21      8 X 3 = 24      9 X 3 = 27
 * 6 X 4 = 24      7 X 4 = 28      8 X 4 = 32      9 X 4 = 36
 * 6 X 5 = 30      7 X 5 = 35      8 X 5 = 40      9 X 5 = 45
 * 6 X 6 = 36      7 X 6 = 42      8 X 6 = 48      9 X 6 = 54
 * 6 X 7 = 42      7 X 7 = 49      8 X 7 = 56      9 X 7 = 63
 * 6 X 8 = 48      7 X 8 = 56      8 X 8 = 64      9 X 8 = 72
 * 6 X 9 = 54      7 X 9 = 63      8 X 9 = 72      9 X 9 = 81
 * 6 X 10 = 60     7 X 10 = 70     8 X 10 = 80     9 X 10 = 90
 *
 */

#include<stdio.h>

int main(){
  int i;
  for(i = 1; i <= 10; i++){
   printf("%d X %d = %d\t%d X %d = %d\t%d X %d = %d\t%d X %d = %d\n",
          2, i, 2*i, 3, i, 3*i, 4, i, 4*i, 5, i, 5*i);
  }

  for(i = 1; i <= 10; i++){
   printf("%d X %d = %d\t%d X %d = %d\t%d X %d = %d\t%d X %d = %d\n",
          6, i, 6*i, 7, i, 7*i, 8, i, 8*i, 9, i, 9*i);
  }

  return 0;

}
