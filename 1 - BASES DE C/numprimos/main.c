#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, cont, A;
    cont=0;

    scanf("%d", &A);

    for(i=0; i<=A; i++){
        if(A % i==0)
        {
            cont++;
        }
    }
    if(cont=2)
    {
        printf("O numero é primo.");
    }
    else
    {
        printf("O numero não é primo.");
    }

    return 0;
}
