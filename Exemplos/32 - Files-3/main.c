#include <stdio.h>
#include <stdlib.h> //Requerido pela função exit
#include <string.h>

int main() {
  FILE *html;
  char titulo[32];
  char texto[64];

  printf("Insira o título da página: ");
  fgets(titulo, 32, stdin);
  printf("Insira o texto da página: ");
  fgets(texto, 64, stdin);

  titulo[strlen(titulo) - 1] = '\0'; //Retira o caracter ENTER do final
  texto[strlen(texto) - 1] = '\0';   //Retira o caracter ENTER do final

  html = fopen("index.html", "w");
  if (html == NULL){
    printf("Não foi possível criar o arquivo\n");
    exit(0); //Sai do programa
  }
  fprintf(html, "<!DOCTYPE html>\n");\
  fprintf(html, "<html>\n");
  fprintf(html, "\t<head>\n\t\t<meta charset=\'UTF-8\'>\n\t</head>\n");
  fprintf(html, "\t<body>\n");
  fprintf(html, "\t\t<h1>%s</h1>\n", titulo);
  fprintf(html, "\t\t<p>%s</p>\n", texto);
  fprintf(html, "\t</body>\n");
  fprintf(html, "</html>\n");

  fclose(html);

  return 0;
}
