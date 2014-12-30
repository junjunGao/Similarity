#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,sum;
    scanf("%d %d %d",&y,&m,&d);
    if(y%4==0&&y%100!=0||y%400==0)
    {
        if(m==1)
        sum=d;
        else if(m==2)
        sum=31+d;
        else if(m==3)
        sum=31+29+d;
        else if(m==4)
        sum=31+29+31+d;
        else if(m==5)
        sum=31+29+31+30+d;
        else if(m==6)
        sum=31+29+31+30+31+d;
        else if(m==7)
        sum=31+29+31+30+31+30+d;
        else if(m==8)
        sum=31+31+29+31+30+31+30+d;
        else if(m==9)
        sum=31+31+31+29+31+30+31+30+d;
        else if(m==10)
        sum=31+31+31+29+31+30+31+30+30+d;
        else if(m==11)
        sum=31+31+31+31+29+31+30+31+30+30+d;
        else if(m==12)
        sum=31+31+31+31+29+31+30+31+30+30+30+d;
    }
    else
    {
        if(m==1)
        sum=d;
        else if(m==2)
        sum=31+d;
        else if(m==3)
        sum=31+28+d;
        else if(m==4)
        sum=31+28+31+d;
        else if(m==5)
        sum=31+28+31+30+d;
        else if(m==6)
        sum=31+28+31+30+31+d;
        else if(m==7)
        sum=31+28+31+30+31+30+d;
        else if(m==8)
        sum=31+31+28+31+30+31+30+d;
        else if(m==9)
        sum=31+31+31+28+31+30+31+30+d;
        else if(m==10)
        sum=31+31+31+28+31+30+31+30+30+d;
        else if(m==11)
        sum=31+31+31+31+28+31+30+31+30+30+d;
        else if(m==12)
        sum=31+31+31+31+28+31+30+31+30+30+30+d;
    }
    printf("%d",sum);
    return 0;
}
