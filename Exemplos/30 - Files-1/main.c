#include <stdio.h>

//Programa que lê o arquivo texto.txt

int main() {
  char texto[64]; //Cria uma variável para receber o texto
  FILE *arquivo; //Cria um ponteiro do tipo FILE para ler o arquivo
  arquivo = fopen("texto.txt", "r"); //Abre o arquivo texto.text no modo leitura "r"
  fgets(texto, 64, arquivo); //Transfere o contéudo do texto.txt para a variável texto
  printf("%s", texto); //Imprime o conteúdo da variável texto

  fclose(arquivo); // fecha o arquivo

  return 0;
}
