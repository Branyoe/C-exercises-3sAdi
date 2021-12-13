//En una tienda departamental ofrecen descuentos a los clientes en la Navidad, de acuerdo con el momento de su
//compra.

#include <stdio.h>
int main(){
  float c, res;
  printf("monto de compra: ");
  scanf("%f", &c);
  if(c < 800){
    res = c;
  }
  if (c >= 800 && c <= 1500){
    res = c - c*.10;
  }
  if (c > 1500 && c <= 5000)
  {
    res = c - c*.15;
  }
  if (c >5000)
  {
    res = c - c*.20;
  }
  printf("precio final: %f", res);
  return 0;
}