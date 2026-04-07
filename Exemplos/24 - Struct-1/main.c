#include <stdio.h>
#include <string.h>

int main(){
  struct carro{
    char fabricante[32];
    char modelo[32];
    int ano;
  }; //Criando uma estrutura

  struct carro novoCarro; //Definindo a variável novoCarro do tipo estrura carro

  //inicializando a variável novoCarro
  strcpy(novoCarro.fabricante, "Volkswagen");
  strcpy(novoCarro.modelo, "Gol");
  novoCarro.ano = 1999;

  //Imprimindo os dados do novo carro
  printf("Carro: %s %s %i\n", novoCarro.fabricante, novoCarro.modelo, novoCarro.ano);

  return 0;
}
