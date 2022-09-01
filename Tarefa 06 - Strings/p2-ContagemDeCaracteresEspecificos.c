//Faça um programa que receba uma string de até 1000 caracteres 
//e retorne a quantidade de cada letra existente na string, 
//a, b, c, d, ... A, B, C, D.... e a quantidade de simbolos não-letras (números, espaços, etc.)

#include <stdio.h>
 
int MAX = 26; //numero de letras
int A = 65; //asc A
int a = 97; //asc a
int main()
{
    // vetor de contagem de maiusculas é M e minusculas é m
    int M[MAX], m[MAX];
    // estranhos conta caracteres fora do alfabeto
    int estranhos = 0;
    int i;
    // ambos começam com zero
    for (i=0; i < MAX; i++) {
        M[i] = 0;
        m[i] = 0;
    }
    
    char str[1000];
    fgets(str, 1000, stdin);
    
    for (i=0; i<1000 && str[i] != '\0' && str[i] != '\n'; i++) {
        // caracter está no intervalo de letras maiusculas
        if(str[i]>=A && str[i]<A+MAX) {
            M[str[i]-A]++;
        } 
        // caracter está no intervalo de letras minusculas
        else if(str[i]>=a && str[i]<a+MAX) {
            m[str[i]-a]++;
        } // então é estranho
        else {
            estranhos++;
        }
    }
    for (i=0; i < MAX; i++) {
        printf("%c - %d\n",i+'a', m[i]);
    }
    for (i=0; i < MAX; i++) {
        printf("%c - %d\n",i+'A', M[i]);
    }
    printf("\? - %d", estranhos);
 
    return 0;
}