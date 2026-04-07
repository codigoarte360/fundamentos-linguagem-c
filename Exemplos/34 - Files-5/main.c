#include <stdio.h>
#include <stdlib.h>

int main(){
  int numeros[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int numerosOutput[10];
  char texto[64] = "Hello world!";
  char textoOutput[64] = "";
  char readOrWrite = 'a';
  FILE *save;

  printf("Read or write? (r or w): ");
  readOrWrite = getchar();

  if (readOrWrite == 'w'){
    save = fopen("save.bin", "wb");
    fwrite(&numeros, sizeof(numeros), 1, save);
    fwrite(&texto, sizeof(texto), 1, save);
  }
  else if (readOrWrite == 'r'){
    save = fopen("save.bin", "rb");
    fread(&numerosOutput, sizeof(numeros), 1, save);
    fread(&textoOutput, sizeof(textoOutput), 1, save);
    for (int x = 0; x < 10; x++){
      printf("%i\n", numerosOutput[x]);
    }
    printf("%s\n", textoOutput);
  }
  else {
    printf("Nenhuma opção selecionada.\n");
    exit(0);
  }

  fclose(save);
  printf("Concluído\n");

  return 0;
}
