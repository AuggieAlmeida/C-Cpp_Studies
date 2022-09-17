#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, k, Eo, A, d;   //Respectivamente, Capacitância, coeficiente dielétrico, área, distância, constante.
    int i; //indice, que irei usar depois.

    Eo=8.85; //aplicando um valor à constante dielétrica no ar (por agora, esquece a base 10.

    printf("\n Digite a area do capacitor em mm2\n");
    scanf("%f", &A);
    //recebendo o valor da área.

    printf("\n Digite a distancia entre as placas em mm\n");
    scanf("%f", &d);
    //recebendo o valor da distância das placas.

    printf("\n Escolha o material isolante a ser utilizado:\n");
    printf("        Papel[1]  Ar[2]  Vidro[3]\n");
    scanf("%d", &i);
    //recebendo qual o material utilizado como isolante.

    switch(i)       //laço switch, utilizando o índice como varíavel de decisão.
    {               //é possível utilizar vetores neste caso, mas achei esse método mais fácil de se entender.
        case 1:
            k=4.0;  //aplicando valor de k caso o material seja o papel.
        break;

        case 2:
            k=1.00059; //aplicando valor de k caso o material seja o ar.
        break;

        case 3:
            k=6.9;   //aplicando valor de k caso o material seja o vidro.
        break;
        default :
            printf("valor invalido");
            system("pause");
    }

         C=(k*Eo*A)/d;      //processamento da equação dada na lista.
         printf("\n\nCAPACITANCIA = %.4f e-12 \n\n\n", C);  //apresentação do resultado.
                                    //perceba que com o %.4f, o valor sempre apresenta só 4 casas após a virgula no resultado.

    system("pause");
    return 0;
}
