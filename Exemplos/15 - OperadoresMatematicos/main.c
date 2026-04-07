#include <stdio.h>
#include <math.h>

//Para compilar utilizar a flag lm (lib math) para compilar com a biblioteca math.h
//Exemplo: gcc main.c -o main -lm

int main(){
  float a, b, c = 0;
  printf("Insira o valor de a: ");
  scanf("%f", &a);
  printf("Insira o valor de b: ");
  scanf("%f", &b);

  //Resultados
  printf("%.2f + %.2f = %.2f\n", a, b, a + b); //%.2f Número float com dois algarismos após a virgula
  printf("%.2f - %.2f = %.2f\n", a, b, a - b);
  printf("%.2f * %.2f = %.2f\n", a, b, a * b);
  printf("%.2f / %.2f = %.2f\n", a, b, a / b);
  printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a,b));
  printf("---------------\n");
  printf("sqrt(%.2f) = %.2f\n", a, sqrt(a));
  printf("sqrt(%.2f) = %.2f\n", b, sqrt(b));

  return 0;
}
