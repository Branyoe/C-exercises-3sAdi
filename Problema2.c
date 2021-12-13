//Construir un programa que, al recibir el radio de una esfera, calcule el ?rea y su volumen.

#include <stdio.h>
#include <math.h>
int main(){
  float r;
  printf("radio\n");
  scanf("%f", &r);
  printf("El area es = %f", 3.1416 * 4 * r);
  printf("\nEl volumne es = %f",  3.1416 * pow(r, 3) * 1/3);
  return 0;
}