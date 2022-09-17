#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A1, A2, t, i, nt;
	printf("Digite quantos numeros tera a serie de Fibonacci:\n ");
	scanf("%d", &nt);
	A1=0;
	A2=1;
	printf("%d, %d, ", A1, A2);
	for(i=1;i<nt;i++)
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
