//esse include tem tudo as sintaxes da linguagem c, ent o printf e tals só funciona se tu puxa ele
#include<stdio.h>

//inclui toda a parte de programação utilizando variaveis booleanas
#include<stdbool.h>

//esse é a função, tudo que tiver ai é executado
int main(){
    //aqui estão as constantes, valores que são inmodificaveis, são definidos e ficam com seu valor fixo
    //constantes devem sempre seguir esse padrão abaixo, sempre devem ser declaradas com seu valor
    //algo bom de se fazer é sempre dar nomes em maiusculo para constantes
    const float PI = 3.14;
    
    //esse exemplo n funciona, pois a constante foi declarada porem não foi inserido um valor
    /*const int MIN;
    min=60;*/

    //aqui é a declaração de variaveis(variaveis sendo valores modificaveis)
    int num=12, op=1, op2=0;// int numeros inteiros e negativos
    float num2; // float numeros reais(vai de 6 a 8 digitos dps da virgula)
    double doub; // double nuemros reais(vai até 15 digitos dps da virgula)
    char string='d'; // char guarda apenas uma caractere

    //outra forma de declarar variaveis de mesmo tipo
    float sum,sub,div,mult,num3 med;

    //a atribuição de valor pode ser feita mais a frente no codigo, como nesse exemplo
    num2=12.5;
    num3=1;

    //tambem pode se atribuir valores dessa forma
    sum=sub=div=mult=0;

    while(op!=0){
        printf("Digite uma opcao de tutorial:\n-1\n-2\n-3\n-4\n-5");
        scanf("%i",&op2);
        switch (op2)
        {
        case 0:
            break;
        case 1:
            printf("para escrever uma variavel, cada tipo tem uma maneira especifica de ser chamada\ne necessario utilizar o especificador da variavel em conjunto com a variavel que voce quer chamar\nindentificador de int e '%i' pi '%d'\nindentificador de float e '%f'\nindentificador de double e '%lf'\nindentificador de char e '%c', exemplo:\nprintf('tenho %i anos', num);\nprintf('eu tenho %f centimetros', num2);\nprintf('%c e minha letra favorita', string);");
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            
            break;            
        default:
            printf("opçao invalida");
        }
    }
    

    
    

    //o %.1f limita o numero de digitos apos a virgula
    printf("1 numero dps da virgula %.1f\n", num2);
    printf("2 numero dps da virgula %.2f\n", num2);
    printf("3 numero dps da virgula %.3f\n", num2);
    
    //é necessario mencionar a quantidade exatada de vezes a variavel
    printf("eu contei ate %i quando era menor, e ate %i hoje em dia\n", num, num);
    
    //em casos onde a variavel é diferente apenas muda seu indentificador   
    printf("eu tenho %i anos e meu pai tem %.1f \n", num, num2);

    //aqui temos um exemplo de operações utilizando as variaveis
    sum=num+num2;
    printf("soma fora do printf = %.1f\n",sum);

    // a operação pode ser feita diretamente dentro do printf
    printf("soma no printf = %.1f\n",num+num2);

    sub=num2-2.5;
    printf("subtracao %.1f\n",sub);

    div=num2/2;
    printf("divisao %.2f\n",div);

    mult=num*2;
    printf("multiplicacao %.1f\n",mult);

    /*aqui estão um exemplo de declaração de variaveis booleanas, 
    ela segue as mesmas regras de declaração e atribuição de valor
    dos outros tipos de variaveis*/
    bool bol = false;

    /*a variavel booleana sempre retorna o valor 0 para falso e 1 para verdadeiro
    então quando for escrever uma vaiavel booleana ela vai utilizar o mesmo indentificador do int*/
    printf("%i, zero significa falso\n",bol);

    /* muitas vezes para receber uma resposta de forma booleana não é necessario declarar uma variavel 
    e sim apenas comparar outras variaveis*/
    printf("%i, o valor retornado e zero pois %i nao e maior que %.1f\n",num > num2, num, num2);
    printf("%i, o valor retornado e um pois %.1f e maior que %i\n",num < num2, num2, num);

    //o if else todo mundo sabe como funciona, é igual python, java, php etc
    /*agr vamos falar um pouco do switch, o switch é como um if else onde uma condição
    que der match com o case, ele executa uma ação e dá break no switch, segue o exemplo*/
    switch (num)
    {
    case 12:
        printf("vai executar esse codigo, pois a variavel num tem o valor 12\n");
        break;
    case 11:
        printf("nao vai executar esse, pois o case não bate com o valor de num\n");
        break;
    }

    //o switch tem tambem o default, onde quando não houver match em nenhum case
    switch (num)
    {
    case 10:
        printf("nao vai executar esse codigo, pois a variavel num tem o valor 12\n");
        break;
    case 11:
        printf("nao vai executar esse, pois o case não bate com o valor de num\n");
        break;
    default:
        printf("esse codigo e pra quando nao da match, e vai ser executado\n");
    }

    //o while e do while funcionam da mesma forma q em outras linguagens

    /*vou mencionar o continue, uma palavra chave de codigos em loop como while, for e do while
    quando se utiliza ele diferente do break que para totalmente o loop, ele apenas pular as etapas
    abaixo do continue, no exemplo abaixo, a condição faz ele pula o valor 4*/
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i==4)
        {
            continue;
        }
        printf("%i\n", i);
    }
    

    //printf é o escreval, echo e tals, manda uma mensagem porem não suporta ç, acentos e coisas do genero
    printf("Ola meu caro, este codigo existe para tentar ensinar algo sobre a linguagem C,\na execucao e apenas para a parte pratica, para realmente aprender se deve abrir o codigo\n");

    //o return 0 é basicamente um fim pra funcao
    return 0;   
}