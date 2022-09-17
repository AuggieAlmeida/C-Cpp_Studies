#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int conta,cont, i;
	cont=6*10;
	i=1;
	printf("Tabuada de 6: \n");
	for(conta=6;conta<=cont;conta+=6)
	{
		printf("6x%d=%d\n",i, conta);
		i++;	
	}
	getch(0);	
}
