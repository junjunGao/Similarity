#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,sum;
    scanf("%d %d %d",&y,&m,&d);
    if(m==1)
    sum=d;
    if(m==2)
    sum=31+d;
    if(m==3)
    sum=31+28+d;
    if(m==4)
    sum=31+28+31+d;
    if(m==5)
    sum=31+28+31+30+d;
    if(m==6)
    sum=31+28+31+30+31+d;
    if(m==7)
    sum=31+28+31+30+31+30+d;
    if(m==8)
    sum=31+28+31+30+31+30+31+d;
    if(m==9)
    sum=31+28+31+30+31+30+31+31+d;
    if(m==10)
    sum=31+28+31+30+31+30+31+31+30+d;
    if(m==11)
    sum=31+28+31+30+31+30+31+31+30+31+d;
    if(m==12)
    sum=31+28+31+30+31+30+31+31+30+31+30+d;
    if(y%400==0&&m>=3)
    sum=sum+1;
    printf("%d",sum);
    return 0;
}
