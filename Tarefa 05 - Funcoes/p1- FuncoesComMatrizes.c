/*
Escreva um programa que: 
1) leia uma matriz quadrada M1 com n linhas 
2) gere a matriz M2 elevando os elementos da matriz M1 ao quadrado 
3) Imprima a matriz M2 
4) Gere a matriz M3=M1*M2 
5) Calcule e imprima o traço da Matriz M3

Obs2. Todas as etapas devem ser realizadas por funções específicas.
*/

#include <stdio.h>
#define MAX 100
 
void leituraMatriz(int m[MAX][MAX], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}
 
void imprimeMatriz(int m[MAX][MAX], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
 
void quadradoElementosMatriz(
    int m[MAX][MAX], 
    int m2[MAX][MAX], 
    int n) {
    
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            m2[i][j] = m[i][j] * m[i][j];
        }
    }
}
 
void multiplicaMatriz(
    int m1[MAX][MAX], 
    int m2[MAX][MAX], 
    int m3[MAX][MAX],
    int n) {
 
    int i, j, k, res = 0;
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            res = 0;
            for(k = 0; k < n; k++) {
                res += m1[i][k] * m2[k][j];    
            }
            m3[i][j] = res;
        }
    }
 
}
 
int tracoMatriz(int M3[MAX][MAX], int n) {
    int i, j, count = 0;
 
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {    
            if(i == j) count = count + M3[i][j];
        }
    }
    return count;
 
}
 
int main() {
    int M1[MAX][MAX], M2[MAX][MAX], M3[MAX][MAX], MTr[MAX][MAX], n, traco;
 
    scanf("%d", &n);
    leituraMatriz(M1, n);
    quadradoElementosMatriz(M1, M2, n);
    multiplicaMatriz(M1, M2, M3, n);
    
    traco = tracoMatriz(M3, n);
    printf("\n");
    
    imprimeMatriz(M2, n);
    printf("\n");
    
    imprimeMatriz(M3, n);
    
    printf("\nTraco: %d\n", traco);
 
 
    return 0;
}