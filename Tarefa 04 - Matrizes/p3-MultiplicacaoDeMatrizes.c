/*
Faça um programa que receba duas matrizes (int) A e B e retorne a matriz C=A*B 

Obs: o tamanho das matrizes A e B deve ser informado pelo usuário. 
O tamanho máximo permitido deve ser 30x30
*/


#include <stdio.h>
 
int main() {
  int A[30][30], B[30][30], C[30][30]; //matrizes
  int al, ac, bl, bc; //linhas e colunas de A e de B
  int res, linha, coluna, k; //variáveis auxiliares
 
  scanf("%d %d", &al, &ac); //leitura da linha e coluna de A
  scanf("%d %d", &bl, &bc); //leitura da linha e coluna de B
 
   //caso seja maior que 30 imprime ERRO
  if(al > 30 || ac > 30 || bl > 30 || bc > 30) {
    printf("ERRO\n");
  }
  //caso coluna de A seja diferente de linha de B imprime ERRO
  else if(ac != bl) {
    printf("ERRO\n");
  } 
  //caso seja tudo valido começa a fazer as operações
  else {
    //lê matriz A
    for(linha = 0; linha < al; linha++) {
      for(coluna = 0; coluna < ac; coluna++) {
        scanf("%d", &A[linha][coluna]);
      }
    }
    //lê matriz B
    for(linha = 0; linha < bl; linha++) {
      for(coluna = 0; coluna < bc; coluna++) {
        scanf("%d", &B[linha][coluna]);
      }
    }
    //faz a multiplicação de matrizes
    for(linha = 0; linha < al; linha++) {
      for(coluna = 0; coluna < bc; coluna++) {
        res = 0;
        for(k = 0; k < bl; k++) {
          res += A[linha][k] * B[k][coluna];
        }
        C[linha][coluna] = res;
      }
    }
    //imprime o resultado
    for(linha = 0; linha < al; linha++) {
      for(coluna = 0; coluna < bc; coluna++) {
        printf("%d ", C[linha][coluna]);
      }
      printf("\n");
    }
  }
 
  return 0;
}