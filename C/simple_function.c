#include <stdio.h>

int maior (int a, int b){
  
    if (a > b){
      return a;
    }
  return b;
}

int main(){

  int maiorr = maior(1000, 50);
  printf("O maior valor é %i\n", maiorr);
  return 0;

}
