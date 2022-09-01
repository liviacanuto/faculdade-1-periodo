//Encontrar os números perfeitos no intervalo [a,b] fornecido.

#include <stdio.h>
 
int main() {
    int a, b, perfeito;
 
    scanf("%d %d", &a, &b);
 
    for(int i = a; i <= b; i++) {
        perfeito = 0;
        for(int j = 1; j < i; j++) {
            if (i%j == 0) {
                perfeito = perfeito + j;
            }
        }
        if (perfeito == i) {
            printf("%d ", perfeito);
        }
    }
 
 
    return 0;
}