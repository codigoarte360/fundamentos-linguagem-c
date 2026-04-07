#include <stdio.h>
#include <string.h>

int main(){
  int x = 0;
  int valores[9];
  char frase[16] = "Standard"; //Declara um vetor com 16 caracteres e atribui o valor a string "Standard" a ele;

  printf("valores tem %li bytes.\n", sizeof(valores)); //Imprime o tamanho em bytes da variável valores
  printf("frase tem %li bytes.\n", sizeof(frase));     //Imprime o tamanho em bytes da variável frase
  printf("\n");
  for (x = 0; x <= 8; x++){
    valores[x] = x; //Inicializando o vetor valores
  }
  printf("Vetor valores:\n");
  for (x = 0; x <= 8; x++){
    printf("%i - %i\n", x, valores[x]); //imprimindo os valores do vetor valores
  }
  printf("\n");
  printf("Vetor frase: %s\n", frase);
  for (x = 0; x <= 15; x++){
    printf("%i - %c\n", x, frase[x]); //imprimindo os valores do vetor frase
  }
  printf("\n");

  strcpy(frase, "Olá mundo"); //Atribui "Olá mundo" ao vetor frase
  printf("Vetor frase: %s\n", frase);
  for (x = 0; x <= 15; x++){
    printf("%i - %c\n", x, frase[x]); //imprimindo os valores do vetor frase
  }
  return 0;

}
