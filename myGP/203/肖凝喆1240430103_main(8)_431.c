#include <stdio.h>
#include <stdlib.h>

 int runnian(int year)
 {
     if((year%4==0&&year%100!=0)||year%400==0)
     {
         return 1;
     }
     else
     return 0;
 }

 int main()
{  int s[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};
   int p[13]={31,31,29,31,30,31,30,31,31,30,31,30,31};
   int m,i,y,a,d,sum=0;
   scanf("%d %d %d",&y,&m,&d);
   a=runnian(y);
   if(a==0)
   {
       for(i=1;i<=m-1;i++)
       {
           sum=sum+s[i];
       }
       sum=sum+d;
       printf("%d",sum);
   }
   if(a==1)
   {
      for(i=1;i<=m-1;i++)
       {
           sum=sum+p[i];
       }
       sum=sum+d;
       printf("%d",sum);
   }
        return 0;
}

