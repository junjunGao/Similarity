#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//每月的天数
    int year,month,day,n=0,i;
    scanf("%d %d %d",&year,&month,&day);
    if((year%400==0)||(year%4==0&&year%100!=0))
    {
        days[2]++;//闰年2月多一天
    }
    for(i=1;i<month;i++)
    {
        n=n+days[i];
    }
    n=n+day;
    printf("%d",n);
    return 0;
}
