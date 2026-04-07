#include <stdio.h>
#include "matematica.h" //Biblioteca onde estão as funções matemáticas personalizadas.
#include <string.h>

int imprime(char texto[64]){
  printf("%s\n", texto);
  strcpy(texto, "Hello World :)");  //Strings sempre são passadas por referência.
  printf("%s\n", texto);
  return 0;
}

int main(){
  int a = 0;
  int b = 0;
  int resultado = 0;
  char frase[32] = "Olá mundo";
  imprime(frase);
  printf("%s\n", frase); //String com novo valor ("Hello World").

  scanf("%i", &a);
  scanf("%i", &b);

  //Funções matemáticas personalizadas
  soma(a, b);
  subtracao(a, b);
  divisao(a, b);

  //O valor retornado pela função, pode ser usado e armazenado em uma variável.
  resultado = multiplicacao(a, b);

  printf("%i\n", resultado);

  return 0;
}
