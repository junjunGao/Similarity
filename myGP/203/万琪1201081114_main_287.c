#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,sum=0;
    scanf("%d %d %d",&a,&b,&c);
    int r[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int p[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((a%4==0&&a%100!=0)||(a%400==0))
    {
        for(d=0;d<b-1;d++)
        {
            sum=sum+r[d];
        }
    }
    else
    {
        for(e=0;e<b-1;e++)
        {
            sum=sum+p[e];
        }
    }
    sum=sum+c;
    printf("%d",sum);
    return 0;
}
