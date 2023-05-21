/*Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0).*/
#include <stdio.h>

int main()
{
    int n,cont=0, cont2=0;
    float som;
    while(2>1){
        printf("Digite um número inteiro ae(0 para finalizar): ");
        scanf("%i",&n);
        
        if(n==0){break;}
        
        if(n % 2==0){
            som+=n;
            cont++;
        }
        cont2++;
    }
    printf("\nVoce digitou %i numeros, sendo %i pares\na media dos números pares sendo %.2f",cont2, cont, som/cont);

    return 0;
}
