#include <stdio.h>
#include <stdlib.h> //livraria do system("pause");
#include <conio.h> //livraria para colocar o getch

int main()
{
    char Nome[60], Sexo;        //a variavel nome tem um [ ] com o tamanho que ela ir� suportar, caso fosse 5 ali, seriam 4 espa�os para letra e 1 vazio
    float h, Pi;               //declara��o de variaveis

    printf("Digite o nome do paciente:  ");
    scanf("%s", &Nome);         //apenas um capricho pedindo o nome, note que aqui � utilizado %s, de string

    printf("Qual e a altura do paciente?\n");
    scanf("%f", &h);            //pegando o valor da altura

    printf("O paciente e um(a)\n");
    printf("Homem[M]  Mulher[F]\n");
    Sexo = getch();             //uma fun��o um pouco mais avan�ada, utilizada pra pegar o valor de uma vari�vel sem apresentar nada na tela
    //fun��o getch poderia ser substitu�da por scanf("%s", &Sexo);
    //getch � uma fun��o natural do windowns, mas procure sempre botar a livraria "conio.h"


    switch(Sexo)               //fun��o switch
    {
        case 'M': case 'm':     //� possivel colocar mais de um caso sem operadores l�gicos como o &&(e) e o ||(ou)
            Pi= (72.7*h) - 58;
        break;


        case 'F': case 'f':
            Pi= (62.1*h) - 44.7;
        break;
    }

    printf("\n\nO peso ideal de %s e de %.2f quilos\n\n", Nome, Pi); //perceba que n�o � necess�rio botar o [ ] de novo aqui para mostrar o nome inteiro


    system("pause");  //mais um capricho para o programa n�o abrir e fechar quando inicializado
    return 0;
}
