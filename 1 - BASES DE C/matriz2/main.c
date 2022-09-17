#include <stdio.h>

int main (void)
{
    int ordem, i, j;

    printf("Digite a ordem da matriz quadrada\n");
    scanf("%d", &ordem);

    int matriz[ordem][ordem];

    printf("Digite os numeros da matriz: \n");

    for(i=0; i<ordem; i++)
    {
        for(j=0; j<ordem; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    /* Imprimindo a Matriz Digitada*/

    printf("\nA matriz digitada foi:\n\n");

    for(i=0; i<ordem; i++)
        {
             printf("\n");
             for(j=0; j<ordem; j++)
             {

                      printf(" %d ", matriz[i][j]);

             }
        }
     printf("\n\n");

     return 0;
}
