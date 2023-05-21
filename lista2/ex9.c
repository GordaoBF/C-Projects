/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o número de filhos e salário. A prefeitura deseja saber: 
média do salário da população; 
média do número de filhos; 
maior salário; 
percentual de pessoas com salário até R$100,00. 


O final da leitura de dados se dará com a entrada de um salário negativo. */

#include <stdio.h>

int main()
{
    int f, cont=0;
    float sal, medsal, medf, somasal, somaf, maiorsal=0, sal100;
    
    while(2>1){
        printf("digite o número de filhos(negativo para finalizar): ");
        scanf("%i", &f);
        
        if(f<0){break;}
        
        printf("digite seu salário(negativo para finalizar): ");
        scanf("%f", &sal);
        
        if(sal<0){
            break;
        }else{
            somasal+= sal;
            somaf+=f;
            if(sal<=100){
            sal100++;
            }
            if(maiorsal<sal){
                maiorsal=sal;
            }
            cont++;
        }
    }
    
    printf("\nEssa cidade tem %i habitantes\ncom uma média de %.2f filhos\nsalario médio de R$%.2f \ncom %.2f porcento da população tendo de 0 a R$100 de salário\ncom o maior salário registrado sendo R$%.2f", cont, somaf/cont, somasal/cont, (sal100/cont)*100, maiorsal);
    

    return 0;
}

