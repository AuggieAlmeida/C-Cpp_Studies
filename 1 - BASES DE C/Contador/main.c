#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1000, cont=0; //já que o numero inicial é 1000, vamos iniciar o indice com esse valor

    while(cont<5)   //contador irá nos ajudar na condição para os laços
    {
        if(i%11==5)  //se: o resto da divisão de i por 11 seja = 5
        {
            cont++; //caso a condição for verdadeira, +1 no contador
        }
        i++; //+1 no indice até que cheguemos no 5° valor
    }

    printf("%d\n", i);  //saída do ultimo resultado dado

    system("pause");
    return 0;
}
