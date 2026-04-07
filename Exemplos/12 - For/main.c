#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //Biblioteca que contém a função sleep.

int main(){
  for(int i = 0; i <= 10; i++){
    system("clear");
    printf("%i\n", i);
    sleep(1);
  }
  return 0;
}
