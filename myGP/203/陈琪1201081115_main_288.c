#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,x;
    scanf("%d %d %d",&y,&m,&d);
    if((y%100==0&&y%400==0)||(y%100!=0&&y%4==0))
    {
        if(m==1)
       {
          x=d;
       }
       if(m==2)
       {
          x=d+31;
       }
       if(m==3)
       {
          x=d+31+29;
       }
       if(m==4)
       {
          x=d+31+29+31;
       }
       if(m==5)
       {
          x=d+31+29+31+30;
       }
       if(m==6)
       {
          x=d+31+29+31+30+31;
       }
       if(m==7)
       {
          x=d+31+29+31+30+31+30;
       }
       if(m==8)
       {
          x=d+31+29+31+30+31+30+31;
       }
       if(m==9)
       {
          x=d+31+29+31+30+31+30+31+31;
       }
       if(m==10)
       {
          x=d+31+29+31+30+31+30+31+31+30;
       }
       if(m==11)
       {
          x=d+31+29+31+30+31+30+31+31+30+31;
       }
       if(m==12)
       {
          x=d+31+29+31+30+31+30+31+31+30+31+31;
       }
    }
    else
    {
if(m==1)
       {
          x=d;
       }
       if(m==2)
       {
          x=d+31;
       }
       if(m==3)
       {
          x=d+31+28;
       }
       if(m==4)
       {
          x=d+31+28+31;
       }
       if(m==5)
       {
          x=d+31+28+31+30;
       }
       if(m==6)
       {
          x=d+31+28+31+30+31;
       }
       if(m==7)
       {
          x=d+31+28+31+30+31+30;
       }
       if(m==8)
       {
          x=d+31+28+31+30+31+30+31;
       }
       if(m==9)
       {
          x=d+31+28+31+30+31+30+31+31;
       }
       if(m==10)
       {
          x=d+31+28+31+30+31+30+31+31+30;
       }
       if(m==11)
       {
          x=d+31+28+31+30+31+30+31+31+30+31;
       }
       if(m==12)
       {
          x=d+31+28+31+30+31+30+31+31+30+31+31;
       }
    }
    printf("%d",x);
    return 0;
}
