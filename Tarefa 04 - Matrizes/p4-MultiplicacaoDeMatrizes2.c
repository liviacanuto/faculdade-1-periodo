/*
Faça uma função que receba duas matrizes (int) A e B e retorne a matriz C=AAB

Obs: o tamanho das matrizes A e B deve ser informado pelo usuário. 
O tamanho máximo permitido deve ser 30x30
*/

#include <stdio.h>
 
void multiplicaMatriz(int linhaA, int linhaB, int colunaB,int A[30][30], int B[30][30], int C[30][30]) {
  int i, j, res, k;
  for(i = 0; i < linhaA; i++) {
    for(j = 0; j < colunaB; j++) {
    res = 0;
    for(k = 0; k < linhaB; k++) {
      res += A[i][k] * B[k][j];
    }
    C[i][j] = res;
    }
  }
}
 
int main() {
  int A[30][30], AT[30][30], B[30][30], C[30][30], D[30][30]; 
  int al, ac, bl, bc; //linhas e colunas de A e de B
  int linha, coluna; 
 
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
    //lê matriz A e a matriz A transposta
    for(linha = 0; linha < al; linha++) {
      for(coluna = 0; coluna < ac; coluna++) {
        scanf("%d", &A[linha][coluna]);
        AT[coluna][linha] = A[linha][coluna];
      }
    }
    
    multiplicaMatriz(al, ac, ac, A, A, C);
 
    //lê matriz B
    for(linha = 0; linha < bl; linha++) {
      for(coluna = 0; coluna < bc; coluna++) {
        scanf("%d", &B[linha][coluna]);
      }
    }
 
    multiplicaMatriz(al, bl, bc, C, B, D);
 
    //imprime o resultado
    for(linha = 0; linha < al; linha++) {
      for(coluna = 0; coluna < bc; coluna++) {
        printf("%d ", D[linha][coluna]);
      }
      printf("\n");
    }
  }
 
  return 0;
}