#include <stdio.h>
#include <stdlib.h>
/*
    输入一个日期，判断这是本年的第几天。


*/
int run(int n)
{
    if(0==n%4||((0==n%400)&&(0!=n%100)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int y,m,d,n=0,i;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&y,&m,&d);
    if(1==run(y))
    {
        a[2]=29;
    }

    for(i=0;i<m;i++)
    {
        n=n+a[i];
    }
    n=n+d;

    printf("%d",n);
}
