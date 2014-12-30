#include <stdio.h>
#include <stdlib.h>

int main()
{   int a[14]={0,0,31,59,90,120,151,181,212,243,273,304,334,365};
    int b[14]={0,0,31,60,91,121,152,182,213,244,274,305,335,366};
    int y,m,d,n;
    scanf("%d %d %d",&y,&m,&d);
    if(((y%4==0)&&(y%100!=0))||(y%400==0))
    n=d+b[m];
    else
    n=d+a[m];
    printf("%d",n);
    return 0;
}
