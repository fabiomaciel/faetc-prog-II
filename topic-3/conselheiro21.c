/**
 * Exercício - Conselheiro de 21
 * Faça um pequeno programa para simular um conselheiro para o jogo de 21,
 * o qual deverá receber a soma das cartas e baseado na tabela abaixo informar qual a situação do jogador.
 *
 * |  Valor das cartas	|  Conselho                                            |
 * |   <= 10	          |  Sem dúvida compre mais uma carta                    |
 * |   > 10 e <= 15	    |  Há um risco, mas aconselho a comprar mais uma carta |
 * |   > 15 e <= 20	    |  Aconselho a parar de jogar                          |
 * |   == 21	          |  Você já venceu, não precisa comprar mais nada       |
 * |   > 21	            |  Você perdeu                                         |
 *
 */

#include<stdio.h>

int main(){
  int blackjack;
  scanf("%d", &blackjack);
  if(blackjack <= 10 )
    printf("Sem dúvida compre mais uma carta");
  else if(blackjack <= 15)
    printf("Há um risco, mas aconselho a comprar mais uma carta");
  else if(blackjack <= 20)
    printf("Aconselho a parar de jogar");
  else if(blackjack == 21)
    printf("você já venceu, não precisa comprar mais nada");
  else
    printf("Você perdeu ");

  return 0;
}
