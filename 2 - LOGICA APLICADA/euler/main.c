#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, fat;
    float e=1, t;

    scanf("%d", &n);
    for(i=1; i<=n ; i++)
    {
        t=1;
        for(fat=i; fat>0; fat--)
        {
            t=t*fat;
        }
        e=e+1/t;
    }
    printf("%f", e);

    return 0;
}
