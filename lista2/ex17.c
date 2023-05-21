/*Faça um programa que calcule o salário líquido dos funcionários de uma empresa. O salário líquido é composto por descontos e adicionais, seguindo as seguintes regras:

Descontos:
Salário bruto < 800,00 – não realizar nenhum desconto;
Salário bruto <=1600,00 – descontar 8% de Imposto de Renda e 5% de encargos.
Salário bruto > 1600,00 – descontar 15% de Imposto de Renda e 7% de encargos.

Adicionais:
Caso o funcionário tenha trabalhado mais de 160 horas no mês, divida o seu salário bruto por 160 (representa horas trabalhadas) e calcule 50% de adicional nas horas que excederem a 160.

O usuário deverá digitar o salário bruto e o número de horas trabalhadas no mês de cada funcionário, e deverá receber como resultado o salário líquido. Para finalizar o programa o usuário deverá digitar 0 no salário bruto, ao finalizar o programa exibir o total geral dos salários líquidos
*/
#include <stdio.h>

int main()
{
    int hr;
    float salbr, desc1, desc2,hrex;
    while(2>1){
        printf("\n--------------------\nDigite seu salário bruto(0 para finalizar): ");
        scanf("%f", &salbr);
        
        if(salbr<=0){break;}
        
        printf("\nDigite a quantidade de horas trabalhadas: ");
        scanf("%i", &hr);
        
        if(salbr<800){
            desc1=0; desc2=0;
        }else if(salbr<=1600){
            desc1=salbr*0.08; desc2=salbr*0.05;
        }else{
            desc1=salbr*0.15; desc2=salbr*0.07;
        }
        
        if(hr-160>0){
            hrex=((salbr/160)/2)*(hr-160);
            printf("O seu salário bruto é de R$%.2f\nSeus proventos de hora extra foram R$%.2f por Trabalhar %i horas extras\nSeus descontos foram R$%.2f em Imposto de renda e R$%.2f de encargos\nSeu salário liquido é de R$%.2f", salbr, hrex, hr-160,desc1,desc2, salbr-desc1-desc2+hrex);    
        }else{
            printf("O seu salário bruto é de R$%.2f\nSeus descontos foram R$%.2f em Imposto de renda e R$%.2f de encargos\nSeu salário liquido é de R$%.2f", salbr,desc1,desc2, salbr-desc1-desc2);    
        }   
    }

    return 0;
}
