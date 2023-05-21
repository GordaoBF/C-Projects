/*Em um campeonato de futebol, cada time tem uma lista oficial de 23 jogadores. Cada time prepara uma lista contendo o peso e a idade de cada um dos seus jogadores. Os 40 times que participam do torneio enviam essas listas para o CPD da confederação. Faça um Programa que apresente as seguintes informações: 

peso médio e a idade média de cada um dos times; 
peso médio e a idade média de todos os participantes
*/
#include <stdio.h>

int main()
{
    int i=0, j;
    float Id, Pes, Alt, IdMed=0, PesMed=0, AltMed=0, TotIdMed, TotPesMed, TotAltMed;
    
    while(i<2){
        IdMed=0; PesMed=0; AltMed=0;
        j=0;
        while(j<2){
            printf("\nDigite a Idade do jogador %i do Time %i: ",j+1,i+1);
            scanf("%f", &Id);
            
            printf("\nDigite o Pes(em Kgs) do jogador %i do Time %i: ",j+1,i+1);
            scanf("%f", &Pes);
            
            printf("\nDigite a Altura(em metros) do jogador %i do Time %i: ",j+1,i+1);
            scanf("%f", &Alt);
            
            IdMed+=Id;
            PesMed+=Pes;
            AltMed+=Alt;
            j++;
            
            if(j==2){
                IdMed=IdMed/j;
                PesMed=PesMed/j;
                AltMed=AltMed/j;
                printf("\nMédia da idade dos jogadores do time %i: %.2f\nMédia do Peso dos jogadores do time %i: %.2f\nMédia da altura dos jogadores do time %i: %.2f\n",i+1,IdMed,i+1,PesMed,i+1,AltMed);
            }
        }
        TotIdMed+=IdMed;
        TotPesMed+=PesMed;
        TotAltMed+=AltMed;
        i++;
        
        if(i==2){
            TotIdMed=TotIdMed/i;
            TotPesMed=TotPesMed/i;
            TotAltMed=TotAltMed/i;
        }
    }
    printf("\n\nMédia da idade dos jogadores totais: %.2f\nMédia do Peso dos jogadores totais: %.2f\nMédia da altura dos jogadores totais: %.2f",TotIdMed,TotPesMed,TotAltMed);

    return 0;
}
