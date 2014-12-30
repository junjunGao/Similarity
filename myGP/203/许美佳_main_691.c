#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int y,m,d;
    scanf("%d %d %d",&y,&m,&d);

    if ((y%4==0&&y%100!=0)||(y%400==0))

    {
       if (1==m)
       n=d;
       if (2==m)
       n=31+d;
       if (3==m)
       n=60+d;
       if (4==m)
       n=91+d;
       if (5==m)
       n=121+d;
       if (6==m)
       n=152+d;
       if (7==m)
       n=182+d;
       if (8==m)
       n=213+d;
       if (9==m)
       n=244+d;
       if (10==m)
       n=274+d;
       if (11==m)
       n=305+d;
       if (12==m)
       n=335+d;

       }
    else
    {
       if (1==m)
       n=d;
       if (2==m)
       n=31+d;
       if (3==m)
       n=59+d;
       if (4==m)
       n=90+d;
       if (5==m)
       n=120+d;
       if (6==m)
       n=151+d;
       if (7==m)
       n=181+d;
       if (8==m)
       n=212+d;
       if (9==m)
       n=243+d;
       if (10==m)
       n=273+d;
       if (11==m)
       n=304+d;
       if (12==m)
       n=334+d;

        }
    printf("%d\n",n);
    return 0;
}
