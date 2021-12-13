//Construir un programa que recibe tres datos enteros positivos realice un ordenamiento mediante condicionales
//anidados o l?gicos colocando dichos valores de mayor a menor.

#include <stdio.h>
int main(){
  int n1, n2, n3;
  printf("Introduce un numero entero: ");
  scanf("%i", &n1);
  printf("Introduce un numero entero: ");
  scanf("%i", &n2);
  printf("Introduce un numero entero: ");
  scanf("%i", &n3);

  if(n1 > n2 && n2 > n3){
    printf("%i %i %i", n1, n2, n3);
  }
  if(n1 > n3 && n3 > n2){
    printf("%i %i %i", n1, n3, n2);
  }
  if(n2 > n1 && n1 > n3){
    printf("%i %i %i", n2, n1, n3);
  }
  if(n2 > n3 && n3 > n1){
    printf("%i %i %i", n2, n3, n1);
  }
  if(n3 > n1 && n1 > n2){
    printf("%i %i %i", n3, n1, n2);
  }
  if(n3 > n2 && n2 > n1){
    printf("%i %i %i", n3, n2, n1);
  }
  return 0;
}