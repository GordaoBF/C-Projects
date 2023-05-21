/*Faça um programa que receba duas notas de 6 alunos calcule e imprima: 
a média entre essas 2 notas de cada aluno;
a mensagem de acordo com a tabela abaixo:

Média
Mensagem 
De 0 a 5.0
reprovado
De 5.1 a 6.9
recuperação 
De 7.0 a 10
aprovado


total de alunos aprovados e o total de alunos reprovados; 
a média geral do Programa, isto é, a média entre as médias dos alunos.
*/
#include <stdio.h>

int main()
{
    int cont=0, Rep=0, Rec=0, Apr=0;
    float Med, TotMed, SomMed=0, n1, n2;
    while(cont<6){
        printf("\n------------\nDigite as duas notas do Aluno %i:\n", cont+1);
        scanf("%f %f", &n1,&n2);
        
        Med=(n1+n2)/2;
        
        if(Med<=5){
            printf("\no %i aluno esta Reprovado com uma média %.2f",cont+1, Med);
            Rep++;
        }else if(Med<7){
            printf("\no %i aluno esta em recuperação por %.2f pontos",cont+1, 7.00-Med);
            Rec++;
        }else{
            printf("\no %i aluno esta Aprovado com média %.2f",cont+1, Med);
            Apr++;
        }
        SomMed+=Med;
        cont++;
    }
    printf("\n\nA média total dos 6 alunos é de %.2f\nCom %i Reprovados, %i Aprovados e %i em recuperação", SomMed/6, Rep, Apr, Rec);

    return 0;
}

