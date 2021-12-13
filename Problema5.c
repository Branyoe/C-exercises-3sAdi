//Desarrollar un programa que realice la siguiente serie utilizando ciclos 2, 7, 10, 15, 18, 23 ?, hasta el 2500
//mostrando en pantalla de manera horizontal.

#include <stdio.h>
int main(){
  int cont;
  cont = 2;
  printf("%i -> ", cont);
  while (cont < 2498)
  {
    if(cont % 2 == 0){
      cont += 5;
      printf("%i -> ", cont);
    }else{
      cont += 3;
      printf("%i -> ", cont);
    }
  }
  return 0;
}