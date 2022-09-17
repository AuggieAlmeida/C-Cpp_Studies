#include <stdio.h>
#include <stdlib.h> //livraria do system("pause");
#include <conio.h> //livraria para colocar o getch

int main()
{
    char Nome[60], Sexo;        //a variavel nome tem um [ ] com o tamanho que ela irá suportar, caso fosse 5 ali, seriam 4 espaços para letra e 1 vazio
    float h, Pi;               //declaração de variaveis

    printf("Digite o nome do paciente:  ");
    scanf("%s", &Nome);         //apenas um capricho pedindo o nome, note que aqui é utilizado %s, de string

    printf("Qual e a altura do paciente?\n");
    scanf("%f", &h);            //pegando o valor da altura

    printf("O paciente e um(a)\n");
    printf("Homem[M]  Mulher[F]\n");
    Sexo = getch();             //uma função um pouco mais avançada, utilizada pra pegar o valor de uma variável sem apresentar nada na tela
    //função getch poderia ser substituída por scanf("%s", &Sexo);
    //getch é uma função natural do windowns, mas procure sempre botar a livraria "conio.h"


    switch(Sexo)               //função switch
    {
        case 'M': case 'm':     //é possivel colocar mais de um caso sem operadores lógicos como o &&(e) e o ||(ou)
            Pi= (72.7*h) - 58;
        break;


        case 'F': case 'f':
            Pi= (62.1*h) - 44.7;
        break;
    }

    printf("\n\nO peso ideal de %s e de %.2f quilos\n\n", Nome, Pi); //perceba que não é necessário botar o [ ] de novo aqui para mostrar o nome inteiro


    system("pause");  //mais um capricho para o programa não abrir e fechar quando inicializado
    return 0;
}
