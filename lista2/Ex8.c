#include <stdio.h>

int main()
{
    int op=1, cand1=0, cand2=0, cand3=0, cand4=0, nulo=0, branco=0;
    
    while(2>1){
        if(op==0){
            printf("\n");
            break;
        }
        printf("Vote em alguem caraio: ");
        scanf("%i", &op);
        switch(op){
            
            case 0:
                break;
            case 1:
                cand1++;
                break;
            case 2:
                cand2++;
                break;
            case 3:
                cand3++;
                break;
            case 4:
                cand4++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
        }
    }
    printf("cand 1: %i\nCand2: %i\ncand3: %i\ncand4: %i\nnulo: %i\nBranco: %i",cand1, cand2, cand3, cand4, nulo, branco);

    return 0;
}

