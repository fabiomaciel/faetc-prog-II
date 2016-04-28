/**
 * Escreva uma função que receba o ano como argumento
 * e retorne 1 se for um ano bissexto e 0 se não for.
 *
 * Um ano é bissexto se for divisível por 4, mas não divisível por 100.
 * Um ano também é bissexto se for divisível por 400.
 *
 */

int isBissexto(int n){
  return (n % 4 == 0 && n % 100 != 0) || n % 400 == 0 ? 1 : 0;
}
