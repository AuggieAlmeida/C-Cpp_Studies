#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
	int conta,i , mult3, mult15;
	mult15=15*5;
	printf("Multiplos de 3 e 15\n");
	i=1;
	conta=15*i;
	mult3=conta/3;
	printf("3x%d  e ",mult3,conta);
	printf("15x%d=%d\n",i,conta);
	for(i=2;i<=5;i++)
	{
		conta=15*i;
		mult3=conta/3;
		printf("3x%d e ",mult3,conta);
		printf("15x%d=%d\n",i,conta);
	}
	getch(0);
}
