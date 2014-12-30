#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,s=0;
    int y,m,d;
    scanf("%d %d %d",&y,&m,&d);
    if ((y%4==0 && y%100!=0)||(y%400==0))
    {
        a[1]=29;
    }
    for (i=0;i<=m-1;i++)
    {
        if (i==(m-1))
        {
            s=s+d;
        }
        else
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}
