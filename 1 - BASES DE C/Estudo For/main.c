#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, a2, a3,t;

    for ( a1=1; a1<10; a1++ )
    {
        for ( a2=0; a2<10; a2++ )
      {
        for ( a3=0; a3<10; a3++ )
        {
            t=a1*a2*a3;
         printf ("%d%d%d: (%d*%d*%d)=%d\n",a1,a2,a3,a1,a2,a3,t);
        }
      }
    }

    system("pause");
    return 0;
}

