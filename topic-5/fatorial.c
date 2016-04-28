/**
 * Crie uma função que receba um número e retorne seu fatorial,
 * porém esta função deve utilizar-se de recursividade para efetuar este cálculo.
 *
 */

int fatorial(n){
  return n < 2 ? 1 : fatorial(n-1) * n;
}
