#include <stdio.h>
#define VALOR_INICIAL 1

int main(){
  int x = VALOR_INICIAL;
  for(x; x <= 100; x++){
    if(x == 5){
      continue; // interrompe o ciclo for nesse instante e volta ao começo
    }
    if(x == 11){
      break; //Interrompe o laço for e continua a executar o programa
    }
    printf("%i\n", x);
  }
  printf("Concluído com sucesso!\n");
  return 0;
}
