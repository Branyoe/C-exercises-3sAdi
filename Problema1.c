//Construir un programa que, al recibir como dato el costo de un art�culo vendido y la cantidad de dinero
//entregada por el cliente, calcule e imprima en pantalla el cambio que se debe entrega al cliente.

#include <stdio.h>
int main(){
  printf("precio producto: ");
  float p;
  scanf("%f", &p);
  float d;
  printf("dinero recivido: ");
  scanf("%f", &d);
  printf("vuelto: %f", d - p);
  return 0;
}