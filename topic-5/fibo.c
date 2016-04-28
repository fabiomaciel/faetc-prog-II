/**
 *
 * Faça uma função que recebe um número inteiro
 * e retorne a soma de Fibonacci de 1 até o número recebido.
 *
 */

int fibo(n){
  return n <= 2 ? 1 : fibo(n-1) + fibo(n-2);
}
