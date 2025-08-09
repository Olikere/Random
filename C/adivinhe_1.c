/*
 *
 * Jogo simples de adivinhação
 *
 *
*/


#include <stdio.h>

int main (){

int resposta;
int correta = 2;

do {
  
  puts("Digite um número de 1 a 10");
  scanf("%i", &resposta);

  if (resposta != correta){

    puts("tente novamente\n");
  }else {
    printf("Acertou era %i\n", correta);
    break;
    }

}while (resposta != correta);



}
