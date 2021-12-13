//Realizar un programa utilizando ciclos que al recibir un limite N de n?meros enteros obtenga la suma de los
//n?meros pares y el promedio de los n?meros impares mediante valores aleatorios entre 5 y 50 mostrando
//dichos n?meros en pantalla como la suma y el promedio respectivo. 

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
  int n, i, aleat, sPar, sImpar, cont;
  n = 0;
  aleat = 0;
  sPar = 0;
  sImpar = 0;
  cont = 0;
  i = 0;
  printf("limite: ");
  scanf("%i", &n);
  srand(time(NULL));
  for(i; i<n; i++){
    aleat = rand() % 46 + 5;
    printf("%i\n", aleat);

    if(aleat % 2 == 0){
      sPar += aleat;
    }else{
      sImpar += aleat;
      cont++;
    }
  }
  printf("\nsuma pares = %i", sPar);
  printf("\npromedio impares = %f", (float)sImpar/(float)cont);
  return 0;
}