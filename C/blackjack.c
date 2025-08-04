
/*

black jack

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  char card_name[3];  
  puts ("insert your card");
  scanf("%2s", card_name);

  int value_card = 0;  /* initial value */

  /*checking the first byte */

  if (card_name[0] == 'K'){
    
    value_card = 10;
    
  } else if (card_name[0] == 'Q'){

    value_card = 10;
    
  }else if (card_name[0] == 'J'){

    value_card = 10;
  
  }else if (card_name[0] == 'A'){

    value_card = 11;
  
  }else {

    value_card = atoi(card_name); /* char to int */
    
  } /* checking if the value is 3 to 6 */

  if (( value_card > 2) && (value_card < 7)){

    puts("Count has gone up");

   /* check if the card was 10, J, Q , or K */
  }else if ( value_card == 10){

    puts("Count has gone up");
    
 
  }
  
 return 0;
}
