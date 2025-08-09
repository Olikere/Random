/*

   substituindo o if por


*/
#include <stdio.h>
#include <stdlib.h>


int main () {

char carta[3];
int valor_carta = 0;
puts ("Digite a carta");
scanf ("%2s", carta);

switch (carta[0]){
  
  case 'K':
  case 'Q':
  case 'J':
    valor_carta = 10;
    printf("%i\n",valor_carta);
    break;
  
  case 'A':
    valor_carta = 11;
    printf("%i\n", valor_carta);
    break;
  
  default :
    valor_carta = atoi(carta);
    printf("%i\n", valor_carta);
  }

}
