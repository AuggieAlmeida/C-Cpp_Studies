#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int conta;
	printf("Os 5 primeiros numeros impares sao:\n");
	for(conta=1;conta<10;conta+=2)
	{
		printf("%d\n",conta);
	}
	getch(0);	
}
