#include <stdio.h>
#include <stdlib.h>   //biblioteca adicionada apenas pela fun��o system("pause")

int main()
{
    int A, B, C; //declara��o de vari�veis A e B, e C para armazenar um dos valores

    A=10;       //agregando valor 10 pro A
    B=20;       //agregando valor 20 pro A

    C=A;        //agregando valor de A em C para armazena-la
    A=B;        //botando um novo valor em A, ocasinando na retirada do anterior
    B=C;        //aproveitando a vari�vel C com o antigo valor de A para coloca-lo em B

    printf("A = %d\nB = %d\n\n", A, B);  //sa�da dos valores A e B

    system("pause");
    return 0;
}
