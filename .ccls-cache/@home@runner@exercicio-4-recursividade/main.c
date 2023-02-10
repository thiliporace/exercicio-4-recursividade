#include <stdio.h>

int fatorial(int n){
  if (n == 1)
    return 1;
  else
    return n * fatorial(n-1);
}

float potencia(float x,int n){
  if (n == 0)
    return 1;
  if (n > 0)
    return x * potencia(x,n-1);
}

float somatoria(float x,int n){
  if (n == 0)
    return 1;
  if (n > 0)
    return potencia(x,n)/fatorial(n) + somatoria(x,n-1);
}

int main() {
  printf("%f",somatoria(3,2));
  //printf("%i",fatorial(3));
  //printf("%f",potencia(3,3));
}