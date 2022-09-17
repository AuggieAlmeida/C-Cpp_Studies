#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int N, K, i;
	printf("Digite ate que numero impar ira aparecer\n");
	scanf("%d", &N);
		for(K=1;K<=N;K+=2)
		{
			printf("%d\n",K);
			i++;
		}
	getch(0);
}
