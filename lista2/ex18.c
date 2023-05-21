/*Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para preenchimento de vagas no seu quadro de funcionários. Supondo que você seja o programador dessa empresa, faça um programa que leia para cada candidato a idade, o sexo (M=1 ou F=2) e a experiência no serviço (S=1 ou N=2). 

Para encerrar a entrada de dados, digite zero para a idade. Calcule e escreva: 
número de candidatos do sexo feminino; 
número de candidatos do sexo masculino; 
a idade média dos homens que já têm experiência no serviço;
a porcentagem dos homens com mais de 45 anos entre o total dos homens; 
número de mulheres com idade inferior a 35 anos e com experiência no serviço;
a menor idade entre as mulheres que já têm experiência no serviço
*/
#include <stdio.h>

int main()
{
    int Id, Sex, Exp, QntFem=0, QntHom=0, Fem35Exp=0, FemLowId=9999999, Hom45=0;
    float QntHomExp=0,SomIdHom=0;
    while(2>1){
        printf("\n------------------------\nDigite a idade do candidato(0 para finalizar): ");
        scanf("%i",&Id);
        
        if(Id<=0){break;}
    
        printf("\nDigite o sexo do candidato(M=1 - F=2):");
        scanf("%i",&Sex);
        
        if(Sex==2 || Sex==1){
            printf("\nO candidato tem experiencia(S=1 - N=2):");
            scanf("%i",&Exp);  
        
            if(Exp==1 || Exp==2){
                if(Sex==2){
                    QntFem++;
                    if(FemLowId>Id && Exp==1){
                        FemLowId=Id;
                    }
                    if(Id<35 && Exp==1){
                        Fem35Exp++;
                    }
                }else if(Sex==1){
                    QntHom++;
                    if(Exp==1){
                        QntHomExp++;
                        SomIdHom+=Id;
                    }
                    if(Id>45){
                        Hom45++;
                    }
                }
            }else{
                printf("Opção inválida");  
            }
        }else{
            printf("Opção inválida");   
        }
    }
    printf("\nQuantidade total de mulheres: %i\nQuantidade total de Homens: %i\nMédia total da idade dos homens com experiencia: %.2f\nPorcentagem de homens com mais de 45: %i Porcento\nQuantidade de mulheres com experiencia e idade menor de 35: %i\nMenor idade de mulher registrada: %i\n", QntFem, QntHom, SomIdHom/QntHomExp,(Hom45/QntHom)*100, Fem35Exp, FemLowId);

    return 0;
}
