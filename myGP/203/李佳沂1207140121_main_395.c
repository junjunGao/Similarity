#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,sum=0,i=0,a,b,c,d;
    char a1,b1,c1,d1;
    scanf("%d %c%c %c%c",&y,&a1,&b1,&c1,&d1);
    a=a1-'0';
    b=b1-'0';
    c=c1-'0';
    d=d1-'0';
    if(y%100!=0&&y%4==0||y/400==0)
    {
        i=1;
    }
    if(a==0&&b==1)
    {
    sum=c*10+d;
    }
    else if(a==0&&b==2)
    {
    sum=31+c*10+d;
    }
    else if(a==0&&b==3)
    {
        if(i=0)
        {
         sum=31+28+c*10+d;
        }
        else
        {
         sum=31+29+c*10+d;
        }
    }
    else if(a==0&&b==4)
    {
        if(i=0)
        {
         sum=31+28+31+c*10+d;
        }
        else
        {
         sum=31+29+31+c*10+d;
        }
    }
   else if(a==0&&b==5)
    {
        if(i=0)
        {
         sum=31+28+31+30+c*10+d;
        }
        else
        {
         sum=31+29+31+30+c*10+d;
        }
    }
    else if(a==0&&b==6)
    {
        if(i=0)
        {
         sum=31+28+31+30+31+c*10+d;
        }
        else
        {
         sum=31+29+31+30+31+c*10+d;
        }
    }
    else if(a==0&&b==7)
    {
        if(i=0)
        {
         sum=31+28+31+30+31+30+c*10+d;
        }
        else
        {
         sum=31+29+31+30+31+30+c*10+d;
        }
    }
    else if(a==0&&b==8)
    {
        if(i=0)
        {
         sum=31+28+31+30+31+30+31+c*10+d;
        }
        else
        {
         sum=31+29+31+30+31+30+31+c*10+d;
        }
    }
    else if(a==0&&b==9)
    {
        if(i=0)
        {
         sum=31+28+31+30+31+30+31+31+c*10+d;
        }
        else
        {
         sum=31+29+31+30+31+30+31+31+c*10+d;
        }
    }
   else if(a==1&&b==0)
    {
        if(i=0)
        {
         sum=31+28+31+30+31+30+31+31+30+c*10+d;
        }
        else
        {
         sum=31+29+31+30+31+30+31+31+30+c*10+d;
        }
    }
   else if(a==1&&b==1)
    {
        if(i=0)
        {
         sum=31+28+31+30+31+30+31+31+30+31+c*10+d;
        }
        else
        {
         sum=31+29+31+30+31+30+31+31+30+31+c*10+d;
        }
    }
    else if(a==1&&b==2)
    {
        if(i=0)
        {
         sum=31+28+31+30+31+30+31+31+30+31+30+c*10+d;
        }
        else
        {
         sum=31+29+31+30+31+30+31+31+30+31+30+c*10+d;
        }
    }
   printf("%d",sum);
}
