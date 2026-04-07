#include <stdio.h>

int main(){
  int x = 0;
  int y = 5;

  //No 'do while' o bloco é executado ao menos uma vez
  //já que a verificação de condição é feita no final do bloco.
  do{
    printf("%i\n", x);
    x++;
  }while (x <= y);

  return 0;
}
