#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i,y,m,d,n=0;
    scanf("%d %d %d",&y,&m,&d);
    if(y%4==0&&y%100!=0||y%400==0)
    {
        a[2]=29;
    }
    for(i=1;i<=m-1;i++)
    {
        n=n+a[i];
    }
    n=n+d;
    printf("%d",n);
    return 0;
}
