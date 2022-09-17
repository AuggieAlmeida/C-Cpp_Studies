#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A1, A2, t, i;
	A1=0;
	A2=1;
	printf("Serie de Fibonacci ate o decimo valor:\n");
	printf("%d, %d, ", A1, A2);
	for(i=0;i< 9;i++)
	{
		t=A1+A2;
		printf("%d, ", t);
		A1=A2;
		A2=t;
	}
	t=A1+A2;
	printf("%d.", t);
	getch(0);
}
