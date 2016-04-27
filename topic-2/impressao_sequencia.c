/**
 *
 * Faça um programa que exiba a sequência de caracteres abaixo
 *
 * \n \xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC
 *
 * \n \xDFO\xDF\xDF\xDF\xDFO\xDF
 *
 * \n\n
 *
 * \n \xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB
 *
 * \n \xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF
 *
 * \n\n
 *
 */

#include<stdio.h>

int main(){

  printf("%s\n%s\n%s\n%s\n%s\n%s\n",
         "\\n \\xDC\\xDC\\xDB\\xDB\\xDB\\xDB\\xDC\\xDC",
         "\\n \\xDFO\\xDF\\xDF\\xDF\\xDFO\\xDF",
         "\\n\\n",
         "\\n \\xDC\\xDC\\xDB \\xDB\\xDB\\xDB\\xDB\\xDB\\xDB",
         "\\n \\xDFO\\xDF\\xDF\\xDF\\xDF\\xDFOO\\xDF",
         "\\n\\n"
         );

  return 0;
}
