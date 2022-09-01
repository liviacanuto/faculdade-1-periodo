/*
Implementar um algoritmo em Linguagem C 
que armazene entre 2 e 50 valores inteiros num dado vetor V1. 
Após, gere um vetor V2 contendo os elementos de V1 em ordem inversa. 
Imprima V2.
*/

#include <stdio.h>
 
int main() {
    int tam;
 
    scanf("%d", &tam);
 
    if(tam < 50 && tam > 1) {
        int v1[tam], v2[tam], k = 0;
 
        for(int i = 0; i < tam; i++) {
            scanf("%d", &v1[i]);
        }
 
        for(int j = tam; j > 0; j--) {
            v2[k] = v1[j-1];
            k++;
        }
        
        for(int i = 0; i < tam; i++) {
            printf("%d ", v2[i]);
        }
 
 
    } else {
        printf("Erro\n");
    }
 
    return 0;
}