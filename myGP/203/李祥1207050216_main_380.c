#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,i,t,d;
   int x[12],y[12];
   scanf("%d %d %d",&a,&b,&c);
   d=c;
   if(((a%4==0)&&(a%100!=0))||(a%400==0))
   {
       int x[12]={31,29,31,30,31,30,31,31,30,31,30,31};
       for(i=0;i<(b-1);i++)
       {
          d=d+x[i];
       }
   }
   else
   {
       int y[12]={31,28,31,30,31,30,31,31,30,31,30,31};
       for(i=0;i<(b-1);i++)
       {
          d=d+y[i];
       }
    }

    printf("%d",d);
    return 0;
}

