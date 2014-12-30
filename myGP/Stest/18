#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y,m,d,n=0,i;
    scanf("%d %d %d",&y,&m,&d);
    if(y%400==0||(y%100!=0&&y%4==0))
    {a[1]=29;}
    for(i=0;i<m-1;i++)
    {n=n+a[i];}
    n=n+d;
    printf("%d",n);

    return 0;
}
