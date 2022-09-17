#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P1, P2;

    printf("Vamos jogar pedra, papel, tesoura, lagarto ou spock?\n\n");

    printf("Jogador 1, escolha o que jogar:\n");
    printf("Pedra[1]  Papel[2]  Tesoura[3]  Lagarto[4]  Spock[5]");
    scanf("%d", &P1);

    printf("\n\nJogador 2, escolha o que jogar:\n");
    printf("Pedra[1]  Papel[2]  Tesoura[3]  Lagarto[4]  Spock[5]\n");
    scanf("%d", &P2);

    if(P1<=5&&P1>=1 && P2<=5&&P2>=1)
    {
    if((P1==1 && P2==1) || (P1==2 && P2==2) || (P1==3 && P2==3) || (P1==4 && P2==4) || (P1==5 && P2==5))
    {
        printf("\nDe novo!\n\n");
    }
    else
    {
    if((P1==1 && (P2==3 || P2==4)) /*pedra*/ || (P1==2 && (P2==1 || P2==5)) /*papel*/
       || (P1==3 && (P2==2 || P2==4)) /*tesoura*/ || (P1==4 && (P2==2 || P2==5)) /*Lagarto*/ || (P1==5 && P2==1 || P2==3)/*Spock*/)
    {
        printf("\nBazinga!\n\n");
    }
    else
    {
        printf("\nRaj trapeceou!\n\n");
    }
    }
    }


    system("pause");
    return 0;
}
