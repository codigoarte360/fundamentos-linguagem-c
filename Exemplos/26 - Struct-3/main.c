#include <stdio.h>
#include <string.h>

//Estrutura definida como global, declarada fora das funções e procedimentos
typedef struct pessoaStruct{
  char nome[64];
  unsigned short int idade;
  float peso;
} pessoa;

//função que recebe a estrutura pessoa como argumento
void showInfo(pessoa x){
  printf("Nome: %s\n", x.nome);
  printf("Idade: %i\n", x.idade);
  printf("Peso: %.1f\n", x.peso);
}

int main(){
  pessoa jose = {"José Campos", 45, 92.5};
  showInfo(jose); //passa a estrutura jose como argumento da função showInfo
}
