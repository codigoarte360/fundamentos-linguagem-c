#include <stdio.h>

int main(){
  int x = 8;
  int y = 10;
  int *p = &x;

  printf("O valor do ponteiro é %d\n", *p);
  printf("O endereço de memória do ponteiro é %p\n", p);

  *p = 20;
  printf("O novo valor de x é %i\n", x);

  p = &y;
  printf("O valor do ponteiro é %d\n", *p);
  printf("O endereço de memória do ponteiro é %p\n", p);
  printf("O valor de x continua sendo %i\n", x);

  return 0;
}
