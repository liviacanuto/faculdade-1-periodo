/*
Escreva um algoritmo que calcule e mostre o valor de S1.
N e informado pelo usuario.

S1 = 1 + 2^2 + 3^3 + ... + N^N 

obs: NÃO SE DEVE UTILIZAR O COMANDO POW(), 
A POTÊNCIA DEVE SER CALCULADA VIA MULTIPLICAÇÃO (LAÇO).
*/

#include <stdio.h>
 
int main() {
    long int n, s1 = 0, termo, i;
    scanf("%ld", &n);
 
    if (n < 0 || n > 15) 
        printf("NaN");
    else {
        for(int i = 1; i <= n; i++) {
            termo = 1;
            for(int p = 1; p <= i; p++) {
                termo = termo * i;
            }
            s1 = s1 + termo;
        }
        printf("%ld", s1);
    }
    return 0;
}