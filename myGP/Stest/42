#include <stdio.h>
#include <stdlib.h>
int leapyear(int y)
{
    if(y%400==0||(y%100!=0&&y%4==0))
    return 1;
    else
    return 0;
}
int main()
{
     int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
     int y,m,d,i,sum=0;
     scanf("%d %d %d",&y,&m,&d);
     if(leapyear(y)==1)
     a[1]=29;
     for(i=0;i<(m-1);i++)
     {
         sum=sum+a[i];
     }
     sum=sum+d;

     printf("%d",sum);
    return 0;
}
