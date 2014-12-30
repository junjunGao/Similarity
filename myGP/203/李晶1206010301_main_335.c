#include <stdio.h>
#include <stdlib.h>
int ly(int y)
{
if(y%400==0||(y%100!=0&&y%4==0)) return 1;
return 0;
}

int main()
{  int y,m,d,i,s=0;
   int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   scanf("%d %d %d",&y,&m,&d);
   if(ly(y)==1)
   {
    a[1]=29;
   }
   for(i=1;i<m;i++)
   {
    s=s+a[i-1];
   }
   s=s+d;
   printf("%d",s);

    return 0;
}
