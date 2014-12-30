#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,n,num=0;
    int a[13]={31,31,28,31,30,31,30,31,30,31,31,30,31};
    scanf("%d %d %d",&y,&m,&d);
    if(y%4==0&&y%100!=0||y%400==0)
   {
       a[2]=29;
   }
   for(n=1;n<m;n++)
   {

    num=num+a[n];

   }
   num=num+d;
    printf("%d",num);
    return 0;
}
