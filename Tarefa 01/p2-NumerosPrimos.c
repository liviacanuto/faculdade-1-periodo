//Imprime os números primos num intervalo fornecido.

#include <stdio.h>
 
int main() {
    int A, B, primo;
    
    scanf("%d", &A);
    scanf("%d", &B);
 
    for (int i = A; i <= B; i++){
        primo = 1;
        for(int j = 2; j <= i/2; j++) {
            if (i%j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) printf("%d ", i);
    }
 
    return 0 ;
}