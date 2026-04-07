#include <stdio.h>

int helloWorld(){
  printf("hello world!\n");
}

int main(){
  char letra = 'a';
  printf("Digite um caractére e pressione enter: ");
  scanf("%c", &letra);

  //&& -> and ---- || -> ou
  if (letra >'a' && letra <= 'z'){
    printf("Você digitou a letra %c.\n", letra);
  }
  else if (letra == 'a'){
    printf("Você digitou a letra A.\n");
  }
  else{
    printf("Você não digitou nenhum caractére.\n");
  }
  helloWorld();
  return 0;
}
