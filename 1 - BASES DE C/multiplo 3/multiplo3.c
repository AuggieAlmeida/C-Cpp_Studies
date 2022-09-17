#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int conta,cont;
	cont=1;
	printf("tabuada de 3 ate o quinto valor\n");
	for(conta=3;conta<=15;conta+=3)
	{
		printf("%dx3=%d\n",cont, conta);
		cont++;
	}
	getch(0);	
}
