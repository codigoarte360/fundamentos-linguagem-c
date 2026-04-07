#include <stdio.h>

int main(){
  int a = 20;
  int *b, **c; //** significa um ponteiro que aponta para outro ponteiro
  b = &a; // O ponteiro b aponta para o endereço de memória da variável a
  c = &b; // O ponteiro c aponta para o ponteiro b

  printf("%i\t%i\t%i\n",  a, *b, **c);
  **c = 15;
  printf("%i\t%i\t%i\n",  a, *b, **c);
  *b =  10;
  printf("%i\t%i\t%i\n",  a, *b, **c);
  a = 5;
  printf("%i\t%i\t%i\n",  a, *b, **c);

  return 0;
}
