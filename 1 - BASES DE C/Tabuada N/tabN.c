#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int conta,cont, i, N;
	printf("Digite um numero para ter a tabuada ate 10 dele\n");
	scanf("%d", &N);
	cont=N*10;
	i=1;
	for(conta=N;i<=10;conta=N*i)
	{
		printf("%dx%d=%d\n",N, i, conta);
		i++;	
	}
	getch(0);	
}
