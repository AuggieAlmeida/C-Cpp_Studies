#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i, N, t;
	printf("Fatorial de 5: \n");
	for(N=5;N>1;t)
	{
		t=t*N;
		printf("%d\n",t);
		N--;
	}
	getch(0);	
}
