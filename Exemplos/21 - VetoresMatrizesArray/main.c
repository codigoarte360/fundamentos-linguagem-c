#include <stdio.h>

/*
Vetores e matrizes, também chamados de arrays
Vetor -> Variável unidimensional
Matrizes -> Variável multidimensional.
*/
int main(){

  int x = 0;
  int y = 0;
  int num = 0;
  int numVetor[3] = {1,2,3};
  int numMatriz[2][3] = {{1,2,3},{4,5,6}};

  printf("%i\n", num);
  printf("---\n");

  for(x = 0; x < 3; x++){
    printf("%i\n", numVetor[x]);
  }
  printf("---\n");

  for (x = 0; x < 2; x++) {
    for (y = 0; y < 3; y++) {
      printf("%i\n", numMatriz[x][y]);
    }
  }
}
