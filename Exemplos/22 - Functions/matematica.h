int soma (int x, int y){
  printf("A soma de %i e %i é igual a %i.\n", x, y, x + y );
  return (x + y);
}

int subtracao(int x, int y){
  printf("A subtração de %i por %i é igual a %i.\n", x, y, x - y);
  return (x - y);
}

float divisao(int x, int y){
  /*
  Usa-se o argumento (float) para que a divisão apresente o resultado correto,
  pois se não passar esse argumento, a divisão de x / y vai retornar um valor
  inteiro
  */
  float z = (float) x / y;
  printf("A divisão de %i por %i é igual a %f.\n", x, y, z);
  return z;
}

int multiplicacao(int x, int y){
  printf("A multiplicação de %i e %i é igual a %i.\n", x, y, x * y);
  return (x * y);
}
