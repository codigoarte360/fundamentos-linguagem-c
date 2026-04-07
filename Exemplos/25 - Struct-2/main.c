#include <stdio.h>
#include <string.h>

int main(){

  int numCarros = 32;
  /*
  Criando uma estrutura carroStruct e definindo-a como carro, dessa forma, a
  declaração de uma estrutura fica simplificada, pois a estrutura carroStruct 
  é definida (typedef) como carro.
  Adiante, para declarar uma variável usando a estrutura carroStruct é
  necessário somente informar
  carro nomeDaVariavel;
  ao invés de
  struct carroStruct nomeDaVariavel;
  */
  typedef struct carroStruct{
    char fabricante[32];
    char modelo[32];
    int ano;
  } carro;


  carro listaCarros[numCarros]; //Definindo o array listaCarros do tipo estrura carroStruct

  //inicializando o array listaCarros e atribuindo valores a todos os elementos
  for(int x = 0; x < numCarros; x++){
    strcpy(listaCarros[x].fabricante, "---");
    strcpy(listaCarros[x].modelo, "---");
    listaCarros[x].ano = 0;
  }

  //Editando a variável listaCarros na posição 0
  strcpy(listaCarros[0].fabricante, "Volkswagen");
  strcpy(listaCarros[0].modelo, "Gol");
  listaCarros[0].ano = 1999;

  //Imprimindo os dados da variável listaCarros na posição 0
  printf("Carro: %s %s %i\n", listaCarros[0].fabricante, listaCarros[0].modelo, listaCarros[0].ano);

  return 0;
}
