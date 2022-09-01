/*
Escrever um algoritmo que leia diversos números inteiros e positivos. 
A leitura deve terminar quando o valor -1 for informado. 
Como saída, o algoritmo deve retornar ao usuário: 
1) o número de valores inteiros e positivos lidos; 
2) a média dos multiplos de 7;
e produto dos múltiplos de 3 e 5.

Obs1. números negativos distintos de -1 devem ser ignorados

Obs2. Caso nenhum múltiplo de 7 tenha sido digitado, informar a média com valor "0"
*/

#include <stdio.h>
 
int main() {
    int num = 0, positivo = 0, c = 0, produto = 1;
    float media = 0;
    while (num != -1) {
        scanf("%d", &num);
        if(num > 0) {
                positivo++;
            if(num%7 == 0) {
                media = media + num;
                c++;
            }
            if((num%3==0) && (num%5 == 0)) {
                produto = produto * num;
            }
        }
    }
 
    if (c == 0) {
        media = 0;
    } else {
    	 media = media / c;
    }
    printf("%d %f %d",positivo, media, produto);
 
    return 0;
}
