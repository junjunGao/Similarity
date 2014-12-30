#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,month,day,thd=0,i;
    scanf("%d %d %d",&year,&month,&day);
    int a[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||(year%400==0))
    {a[2]=29;}

    for(i=1;i<month;i++)
    {
        thd=a[i]+thd;
    }
    thd=day+thd;
    printf("%d",thd);
}
