/*Faça um algoritmo que leia vários códigos do jogador (1 ou 2) que ganhou o ponto em uma partida de pingue-pongue, e responda quem ganha a partida. A partida chega ao final se um dos jogadores chega a 21 pontos e a diferença de pontos entre os jogadores é maior ou igual a dois. Caso contrário, ganha aquele que, com mais de 21 pontos, consiga colocar uma vantagem de dois pontos sobre o adversário*/
#include <stdio.h>

int main()
{
    int jog=0, pont=0, pont1, pont2;
    while(2>1){
        if(pont1>=21 || pont2>=21){
            if(pont1-pont2>=2){
                printf("Jogador 1 ganhou com %i pontos, por uma diferença de %i", pont1, pont1-pont2);
                break;
            }else if(pont2-pont1>=2){
                printf("Jogador 2 ganhou com %i pontos, por uma diferença de %i", pont2, pont2-pont1);
                break;
            }
        }
        
        printf("\n------Placar atual------\nJogador 1 -> %i\nJogador 2 -> %i",pont1, pont2);
        printf("\nEscolha um jogador: ");
        scanf("%i",&jog);
        
        if(jog==1){
           printf("\nquantos pontos o jogador %i vai receber: ",jog);
           scanf("%i",&pont);
           pont1+=pont;
        }else if(jog==2){
            printf("\nquantos pontos o jogador %i vai receber: ",jog);
           scanf("%i",&pont);
           pont2+=pont;
        }else{printf("\nVoce digitou um jogador inexistente");}
    }

    return 0;
}
