/*
Implementar um algoritmo em Linguagem C que calcule a média 
(número real - float) de todos os números pares e múltiplos de 7 
contidos num intervalo fornecido [a,b].
*/

#include <stdio.h>
 
int main () {
    int a, b;
    float media = 0.0, count = 0.0;
 
    scanf("%d %d",&a, &b);
 
    if(a<=b) {
        for(int i=a; i<=b; i++) {
            if((i%2==0) && (i%7==0)) {
                media = media + i;
                count++;
            }
        }
    } else {
        media = 0.0;
    }
    if (count != 0) media = media / count;
    printf("%f\n", media);
}