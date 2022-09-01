/*
Ler uma string do teclado (com no máximo 200 caracteres) e realizar a seguinte tarefa:

1) imprimir a string lida com todos os caracteres transformados em maiúsculos; 
2) informar a quantidade de caracteres lidos 
3) informar a quantidade de caracteres substituídos na string original

OBS: Não utilizar acentos.
*/

#include <stdio.h>
 
int MAX = 26; //numero de letras
int A = 65; //asc A
int a = 97; //asc a
int main()
{
 
    int qtd = 0, uppers = 0; 
    int i;
    char str[200];
    
    fgets(str, 200, stdin);
    
    for (i=0; i<200 && str[i] != '\0' && str[i] != '\n'; i++) {
        qtd++;
        // caracter está no intervalo de letras minusculas
        if(str[i]>=a && str[i]<a+MAX) {
            str[i]-=a-A;
            uppers++;
        } 
    }
    for (i=0; i<200 && str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i]);
    }
    printf("\n%d", qtd);
    printf("\n%d", uppers);
    return 0;
}