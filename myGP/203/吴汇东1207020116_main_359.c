#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,n;
    scanf("%d %d %d",&y,&m,&d);
    if(y%4==0&&y%100!=0||y%400==0)
    {
        if(m==1)
        n=d;
        else if(m==2)
        n=31+d;
        else if(m==3)
        n=31+29+d;
        else if(m==4)
        n=31+29+31+d;
        else if(m==5)
        n=31+29+31+30+d;
        else if(m==6)
        n=31+29+31+30+31+d;
        else if(m==7)
        n=31+29+31+30+31+30+d;
        else if(m==8)
        n=31+31+29+31+30+31+30+d;
        else if(m==9)
        n=31+31+31+29+31+30+31+30+d;
        else if(m==10)
        n=31+31+31+29+31+30+31+30+30+d;
        else if(m==11)
        n=31+31+31+31+29+31+30+31+30+30+d;
        else if(m==12)
        n=31+31+31+31+29+31+30+31+30+30+30+d;
    }
    else
    {
        if(m==1)
        n=d;
        else if(m==2)
        n=31+d;
        else if(m==3)
        n=31+28+d;
        else if(m==4)
        n=31+28+31+d;
        else if(m==5)
        n=31+28+31+30+d;
        else if(m==6)
        n=31+28+31+30+31+d;
        else if(m==7)
        n=31+28+31+30+31+30+d;
        else if(m==8)
        n=31+31+28+31+30+31+30+d;
        else if(m==9)
        n=31+31+31+28+31+30+31+30+d;
        else if(m==10)
        n=31+31+31+28+31+30+31+30+30+d;
        else if(m==11)
        n=31+31+31+31+28+31+30+31+30+30+d;
        else if(m==12)
        n=31+31+31+31+28+31+30+31+30+30+30+d;
    }
    printf("%d",n);
    return 0;
}
