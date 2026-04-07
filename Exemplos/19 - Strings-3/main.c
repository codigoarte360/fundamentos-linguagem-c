#include <stdio.h>
#include <stdlib.h> //conversão de string para números atoi() e atof()
#include <ctype.h>  //conversão de letras maíuscula/mínusculas toupper() e tolower()

int main(){
  char texto01[64] = "Olá mundo!";
  char texto02[64] = "HELLO WORLD!";
  char texto03[64];
  char texto04[64];

  char num1[4] = "8";
  char num2[8] = "44.52";

  for(int x = 0; x < 64; x++){
    texto03[x] = toupper(texto01[x]);
  }
  for(int x = 0; x < 64; x++){
    texto04[x] = tolower(texto02[x]);
  }

  printf("%s\n", texto03);
  printf("%s\n", texto04);
  printf("---\n");
  printf("%i + %f = %f\n", atoi(num1), atof(num2), atoi(num1) + atof(num2));

  return 0;

}
