#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int N, t;
	printf("Digite um numero para receber seu fatorial:\n");
	scanf("%d", &N);
	t=1;
	for(N;N>1;t)
	{
		t=t*N;
		printf("%d\n",t);
		N--;
	}
	getch(0);	
}
