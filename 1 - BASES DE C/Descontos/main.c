#include <stdio.h>
#include <stdlib.h>
//reparem que neste, eu não declarei conio.h, pois não utilizei função getch

int main()
{

    float Valor, ValorTotal, Qtd, desconto;   //declaração de variáveis
    char Prod[20];                            //essa informação é totalmente inútil, mas vida que segue ¯\_(ツ)_/¯

    printf("Digite o nome do produto:  ");
    scanf("%s", &Prod);                     //recolhendo valor das variáveis

    printf("Valor do produto = ");
    scanf("%f", &Valor);                     //recolhendo valor das variáveis

    printf("Quantidade = ");
    scanf("%f", &Qtd);                     //recolhendo valor das variáveis
    printf("\n\n");


    ValorTotal=Valor*Qtd;

    printf("Valor Normal = R$ %.2f", ValorTotal);   //EXPLICAÇÃO DO %.2f MAIS EMBAIXO
    //capricho meu de botar o valor total sem o desconto antes, igual uma nota fiscal


    if(Qtd<=5)
    {
        desconto = (Valor*Qtd*0.02);             //calculo do valor do desconto
        ValorTotal= ValorTotal - desconto;      //valor total menos o desconto, pode ser passado para a propria variavel
        printf("\nValor com desconto = R$ %.2f", ValorTotal);
        //EXPLICAÇÃO DO %.2f MAIS EMBAIXO
    }
    else   //esse else é o mesmo que botar um if(Qtd>5)
    {
        if(Qtd<=10)
        {
        desconto = (Valor*Qtd*0.03);             //mesma merda que o de cima
        ValorTotal=ValorTotal - desconto;
        printf("\nValor com desconto = R$ %.2f", ValorTotal);
        //EXPLICAÇÃO DO %.2f MAIS EMBAIXO
        }
        else    //esse else, assim como o anteriro, é o mesmo que botar um if(Qtd>10)
        {
        desconto = (Valor*Qtd*0.05);
        ValorTotal-= desconto;

        /* perceba que aqui, em vez de "ValorTotal=ValorTotal - desconto", eu botei o "-" e o "=", é o mesmo que botar i++,
        só que com uma progressão diferente de 1, se quisesse somar seria +=, multiplicar *= e assim por diante */

        printf("\nValor com desconto = R$ %.2f", ValorTotal);
        //reparem aqui que foi colocado %.2f, para deixar apenas 2 casas decimais apenas
        }
    }
    printf("\n\n");    // V I A D A G E M


    system("pause");
    return 0;
}
