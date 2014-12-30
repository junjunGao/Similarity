#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int shirunnian(int x)
{
    if(x%400==0|| (x%4==0&&x%100!=0))
    {return 1;}
    else
    {return 0;}
}
int main()
{
    int i,y,m,d,num=0,md[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&y,&m,&d);
    if(shirunnian(y)==1)
    {
       md[1]=29;
    }
    num=d;
    for(i=0;i<m-1;i++)
    {
        num=num+md[i];
    }
    printf("%d",num);
    return 0;
}
