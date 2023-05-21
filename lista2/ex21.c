/*Faça um algoritmo para encontrar os números primos existentes entre dois números informados pelo usuário. Lembre-se de que um número primo é aquele que é divisível somente por 1 e por ele mesmo: Exemplo, 1, 2, 3, 5, etc*/
#include <stdio.h>

int main(){
    
    int i = 2, j, primo;
    
    while (i <= 100) {
        primo = 1;
        j = 2;
        
        while (j < i) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
            j++;
        }
        
        if (primo) {
            printf("%d\n", i);
        }
        
        i++;
    }
    
    return 0;
}