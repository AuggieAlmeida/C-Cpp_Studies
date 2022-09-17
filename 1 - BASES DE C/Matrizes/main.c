#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int ordem, i, j, det = 0;

    printf("Digite a ordem da matriz quadrada\n");
    scanf("%d", &ordem);

    int matriz[ordem][ordem];


    for(i=1; i<=ordem; i++)
    {
        printf("Digite a %d linha da matriz (dividindo os numeros por espaço): \n", i);
        for(j=1; j<=ordem; j++)
        {

            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    /* Imprimindo a Matriz Digitada*/

    printf("\nA matriz digitada foi:\n\n");

    for(i=1; i<=ordem; i++)
        {
             printf("\n");
             for(j=1; j<=ordem; j++)
             {

                      printf(" %d ", matriz[i][j]);

             }
        }


     printf("\n\n");

     if(ordem==1)
     {
         printf("  Det = %d\n\n", matriz[1][1]);
     }



     if(ordem==2)
     {
         det=matriz[1][1]*matriz[2][2]-matriz[1][2]*matriz[2][1];

         printf("  Det = %d\n\n", det);
     }

    if(ordem==3)
     {
         det=matriz[1][1]*matriz[2][2]*matriz[3][3]+matriz[1][2]*matriz[2][3]*matriz[3][1]+matriz[1][3]*matriz[2][1]*matriz[3][2]
         -matriz[1][2]*matriz[2][1]*matriz[3][3]-matriz[1][3]*matriz[2][2]*matriz[3][1]-matriz[1][1]*matriz[2][3]*matriz[3][2];

         printf("  Det = %d\n\n", det);
     }

    system("pause");
    return 0;
}
