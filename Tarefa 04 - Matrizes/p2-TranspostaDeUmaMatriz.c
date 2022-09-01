/* 
Escreva um programa que defina e preencha uma matriz M. 
Após, imprima a transposta da matriz lida
*/

#include <stdio.h>
#define MAX 30
 
 
int main() {
  int M[MAX][MAX], num1, num2, i, j;
 
  scanf("%d %d", &num1, &num2);
 
  for(i=0; i < num1; i++) {
    for(j=0; j < num2; j++) {
      scanf("%d", &M[i][j]);
    }
  }
 
  for(i=0; i < num2; i++) {
    printf("\n");
    for(j=0; j < num1; j++) {
      printf("%d ", M[j][i]);
    }
  }
 
 
  return 0;
}