#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1000, cont=0; //j� que o numero inicial � 1000, vamos iniciar o indice com esse valor

    while(cont<5)   //contador ir� nos ajudar na condi��o para os la�os
    {
        if(i%11==5)  //se: o resto da divis�o de i por 11 seja = 5
        {
            cont++; //caso a condi��o for verdadeira, +1 no contador
        }
        i++; //+1 no indice at� que cheguemos no 5� valor
    }

    printf("%d\n", i);  //sa�da do ultimo resultado dado

    system("pause");
    return 0;
}
