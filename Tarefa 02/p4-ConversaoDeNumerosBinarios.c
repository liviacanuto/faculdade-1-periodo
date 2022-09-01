//Converter o número binário fornecido pelo usuário 
//em sua representação decimal.

#include <stdio.h>
 
int main() {
    long int num, dec = 0, pot = 1;
 
    
    scanf("%ld", &num);
 
    do {
         dec += (num%10) * pot;
         num = num / 10;
         pot = pot * 2;
    } while (num!=0);
 
    printf("%ld\n",dec);
    return 0;
}