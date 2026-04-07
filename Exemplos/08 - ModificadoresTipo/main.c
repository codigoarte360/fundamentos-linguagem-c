#include <stdio.h>

int main(){
  /*
  1 - signed ->   Modifica a variável para receber valores positivos e negativos.
                  (geralmente é o modificador padrão, e pode ser omitido)
  2 - unsigned -> Modifica a variável para receber somente valores positivos
                  (Dobra a capacidade de armazenamento de númemros positivos)
  3 - long ->     Aumenta a capacidade de armazenamento da variável.

  4 - short ->    Diminui a capacidade de armazenamento da variável.
  */

  signed int a;     //4 bytes
  unsigned int b;   //4 bytes
  long int c;       //8 bytes
  short int d;      //2 bytes

  int aSize = sizeof(a);
  int bSize = sizeof(b);
  int cSize = sizeof(c);
  int dSize = sizeof(d);

  printf("%i bytes\n", aSize);
  printf("%i bytes\n", bSize);
  printf("%i bytes\n", cSize);
  printf("%i bytes\n", dSize);
}
