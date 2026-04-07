#include <stdio.h>

int main() {
  FILE *arquivo;
  char fileName[64];
  printf("Insira o nome do arquivo: ");
  scanf("%s", fileName);
  arquivo = fopen(fileName, "r");

  if (arquivo == NULL){
    printf("O arquivo não existe\n");
  }
  else{
    printf("Arquivo aberto com sucesso!\n");
    fclose(arquivo);
  }

  return 0;
}
