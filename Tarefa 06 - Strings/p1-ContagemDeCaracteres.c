// Faça um programa que receba uma string de até 1000 caracteres 
// e retorne a quantidade de caracteres minúsculos e maiúsculos, respectivamente.

#include <stdio.h>
#include <string.h>
 
int main() {
    char string[1000];
    int maisculo = 0, minusculo = 0;
 
    fgets(string, 1000, stdin);
    
    for(int i = 0; i < strlen(string); i++) {
        if(string[i] >=97 && string[i] <= 192) {
            minusculo++;
        } else if(string[i] >= 65 && string[i] <=90) {
            maisculo++;
        }
    }
    printf("m: %d\nM: %d\n",minusculo, maisculo);
 
    return 0;
}