/*
Leia 20 números inteiros e os armazene num vetor V1 de inteiros. 
Encontre o maior e o menor valor informado. 
Calcule a média dos elementos diferentes de zero. 
Gere um vetor V2 contendo os valores de V1 normalizados entre 0 e 1. 
Observe que a média e o vetor V2 deve armazenar números em ponto fluante (float)
*/

#include <stdio.h>
#include <limits.h>
 
int main() {
  double V1[20], V2[20], media = 0, n = 0;
  int maior = INT_MIN, menor = INT_MAX, i;
  
  for(i = 0; i < 20; i++) {
    scanf("%lf", &V1[i]);
    if(V1[i] > maior) maior = V1[i];
    if(V1[i] < menor) menor = V1[i];
    if(V1[i] != 0) {
      media += V1[i];
      n++;
    }
  }
 
  printf("%d %d\n", maior, menor);
  maior = maior - menor;
  
  for(i = 0; i < 20; i++) {
    V2[i] = (V1[i] - menor) / maior;
  }
 
  printf("%.3lf\n", media/n);
 
  for(i = 0; i < 20; i++) {
    printf("%.3lf ", V2[i]);
  }
 
  return 0;
}