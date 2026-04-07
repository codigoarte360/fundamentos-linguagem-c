#include <stdio.h>

int main()
{
  char frase[16];
  for (int x = 0; x < 15; x++){
    frase[x] = 'A';
  }
  frase[15] = '\0';

  char *p;
/* Em C, quando usamos o nome de um vetor, estamos nos referindo
   ao endereço da sua primeira posição na memória.

   Portanto, "frase" aponta para o mesmo lugar que "&frase[0]",
   que é onde o primeiro caractere está armazenado. 
   Ou seja, frase == &frase[0]
*/
  p = frase;

  while (*p) //Enquanto houver dados no ponteiro p ("Até encontrar o caracter \0
  {
    putchar(*p++); //imprime o caracter do endereço atual e depois adiciona +1 ao endereço
    putchar('-');

  }
  printf("\n");

}
