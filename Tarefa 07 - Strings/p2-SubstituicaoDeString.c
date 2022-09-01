/*
Faça uma função que receba como entrada três strings (A, B e C) 
e retorne uma quarta string (D) formada pela substituição de todas as ocorrências da string B pela string C dentro da string A. 
Além disso, o programa também deve retornar o tamanho original da string A, o tamanho da string gerada D e a quantidade de substituições realizadas

Obs. A string pode conter até 250 caracteres; As strings B e C não precisam ser do mesmo tamanho, ou seja, a string D pode ter tamanho diferente da string A original.
*/

// *Essa tarefa só consegui 82%. Se achou o que está errado por favor me avise!!*

#include <stdio.h>
#include <string.h>
 
int main() {
    char A[250], B[250], C[250], D[250];
        int Ai=0, Di=0, c = 0, j, k;
    fgets(A, 250, stdin);
    fgets(B, 250, stdin);
    fgets(C, 250, stdin);
    
    while(Ai < strlen(A) - 1 && A[Ai]!='\0') {
        if(A[Ai] == B[0]) {
            for(j = 0; j < strlen(B) - 1; j++) {
                if(A[Ai+j] != B[j]) {
                    break;
                }
            }
            if(j == strlen(B) - 1) {
                for(k = 0; k < strlen(C) - 1; k++) {
                    D[Di+k] = C[k];
                }
                Ai+=j;
                Di+=k;
                c++;
            } 
            else {
                D[Di++] = A[Ai++];
            }
        }
        else {
            D[Di++] = A[Ai++];
        }
    }
 
    printf("%s\n", D);
    printf("%d\n", Ai);
    printf("%d\n", Di);
    printf("%d", c);
    
 
}