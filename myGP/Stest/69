#include <stdio.h>
#include <stdlib.h>

int LeapYear(int year)//函数一，用来判断是否为闰年。
{
    if(year%400==0 || (year%100!=0 && year %4==0))
       { return 1;}
    else
       { return 0;}
}

int main()
{
    int a,b,c,sum=0,SUM,i,m[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},M[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&a,&b,&c);
    if(LeapYear(a)==1)
    {
        for(i=0;i<b;i++)
        {
            sum=sum+M[i];
        }
    }

    if(LeapYear(a)==0)
    {
        for(i=0;i<b;i++)
        {
            sum=sum+M[i];
        }
    }
    SUM=sum+c;
    printf("%d",SUM);
    return 0;
}
