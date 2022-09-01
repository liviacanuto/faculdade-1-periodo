/*
Leia 5 números inteiros e os armazene num vetor V1 de inteiros (números com valores no intervalo [-10, 10]. 
Na sequência, leia um valor inteiro p entre 0 e 10. 
Gere um vetor V2 contendo os valores de V1 elevados à potencia p. 
Imprima V2. 

Obs, números inválidos devem ser ignorados.
*/

#include <stdio.h>
 
int main() {
    int v1[5], v2[5], num, i, p, totalp = 1;
 
    for(i = 0; i < 5; i++) {
        do {
            scanf("%d", &num);
        } while(num < -10 || num > 10);
        v1[i] = num;
    }
 
    do {
        scanf("%d", &p);
    } while(p < 0 || p > 10);
 
    for(i = 0; i < 5; i++) {
        for(int j = 0; j < p; j++) {
            totalp = totalp * v1[i];
        }
        v2[i] = totalp;
        totalp = 1;
    } 
 
    for(i = 0; i < 5; i++) {
        printf("%d ", v2[i]);
    }
 
    return 0;
}