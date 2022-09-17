#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, soma=0, prod=1;  //declaracao das variaveis, atribuindo valor inicial pra soma e pro produto.

    printf("Digite o primeiro valor\n");
    scanf("%d", &X);                //atribuindo valor ao X.

    printf("Digite o segundo valor\n");
    scanf("%d", &Y);                //atribuindo um valor a Y, que deve ser maior que o de X.

    while(X<=Y)       //podemos utilizar o X como o próprio contador.
    {
        if(X%2==0)  //"se o resto da divisão de X por 2 for igual a zero"
        {
            soma+=X;  //soma = soma + X
        }
        else     //"se o resto da divisão de X por 2 for qualquer outro valor sem ser zero"
        {
            prod*=X;    //produto = produto * X
        }
        X++;  //aumentando o valor de X de 1 em 1
    }

        printf("a soma dos valores pares e = %d\n", soma);  //saída da soma

        printf("o produto dos valores impares e = %d\n", prod);  //saída do produto

    system("pause");
    return 0;
}
