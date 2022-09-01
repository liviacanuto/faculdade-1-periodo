/*
Escreva um programa que defina e preencha uma matriz M. 
Após, verifique a frequência de cada valor existente na matriz

Obs: o tamanho da matriz deve ser informado pelo usuário. 
Considere o tamanho máximo de 30x30. 

A matriz deve ser preenchida com valores pertencentes ao intervalo [0..100]. 
Obs. Assuma que o usuário irá informar os valores corretamente, ou seja, no intervalo considerado: [0..100].
*/


#include <stdio.h>
 
int main() {
  int i, j, l, c;
  int M[30][30], V[101];
 
  scanf("%d %d", &l, &c);
 
  for(i=0; i<l; i++) {
    for(j=0; j<c; j++) {
      scanf("%d", &M[i][j]);
    }
  }
 
  for(i=0; i < 101; i++) {
    V[i] = 0;
  }
 
  for(i=0; i < l; i++) {
    for(j=0; j < c; j++) {
      V[M[i][j]]++;
    }
  }
 
  for(i=0; i < 101; i++) {
    if(V[i] > 0) {
      printf("%d %d\n", i, V[i]);
    }
  }
 
  return 0;
}