#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[11][4];
    char linha[150];
    int k;
    int j;
    float soma_x;
    float soma_y;
    float soma_xx;
    float soma_xy;
    int n;
    float coef_a;
    float coef_b;

    printf("\n\n Ola, tecle enter para ler arquivo e calcular equacao da reta...\n");
    getch();

    FILE *dados;
    dados = fopen("dados.txt", "r");

    if (dados == NULL) {
        printf("\nArquivo nao encontrado!\n");
        return 0;
    }

    strcpy(linha, "");
    k = -1;
    while (!feof(dados)) {
        k = k+1;
        fgets(linha, 150, dados);
        matriz[k][0] = atof(strtok(linha, ";"));
        matriz[k][1] = atof(strtok(NULL, ""));
        matriz[k][2] = matriz[k][0] * matriz[k][0];
        matriz[k][3] = matriz[k][0] * matriz[k][1];
    }

    n = k+1;

    soma_x = 0;
    soma_y = 0;
    soma_xx = 0;
    soma_xy = 0;
    printf("\n  Dados: (n = %d)\n\n  %5s%15s%15s%15s\n", n, "X","Y","X^2","X*Y");
    for (j=0; j<=k; j++) {
         printf("  %5.2f%15.2f%15.2f%15.2f\n", matriz[j][0], matriz[j][1], matriz[j][2], matriz[j][3]);
         soma_x = soma_x + matriz[j][0];
         soma_y = soma_y + matriz[j][1];
         soma_xx = soma_xx + matriz[j][2];
         soma_xy = soma_xy + matriz[j][3];
    }
    printf("  ----------------------------------------------------------------\n");
    printf("  %5.2f%15.2f%15.2f%15.2f\n", soma_x, soma_y, soma_xx, soma_xy);
    printf("\n\n");

    coef_a = (soma_xy - n * (soma_x / n) * (soma_y / n)) / (soma_xx - n * (soma_x / n) * (soma_x / n));
    coef_b = (soma_y / n) - coef_a * (soma_x / n);

    printf("  Equacao da reta:\n\n");
    printf("  Y = %0.4f X + ( %0.4f )\n", coef_a, coef_b);
    printf("\n\n\n");
    getch();

    fclose(dados);
    return 0;
}


