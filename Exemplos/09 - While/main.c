#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //Biblioteca que contém a função sleep.

int main(){
  int x = 0;
  while (x <= 10){
    system("clear");
    printf("%i\n", x);
    x++;
    sleep(1);
  }
}
