#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float B, H, P, d, Va, T, Ve;


    printf("Digite a extensao, largura e profundidade da area a ser analisada\n");
    scanf("%f%f%f", &B, &H, &P);
    Va=B*H*P;
    printf("o volume da area sendo analisada tem %2.f metros\n", Va);

    printf("Digite o diametro das esferas que irao preencher a praia\n");
    scanf("%f", &d);
    Ve= (4*d)/1000;
    printf("os graos tem um volume %4.f \n", Ve);

    T=Va/Ve;
    printf("cabem %2.f graos nessa area ", T);





    return 0;
}
