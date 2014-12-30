#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,sum=0,i,r[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&y,&m,&d);
    if(1==m || 2==m)
    {
        if(1==m)
        {
            sum=d;
        }
        else
        {
            sum=31+d;
        }
    }
    else
    {
        if((y%4==0 && y%100!=0) || (y%400==0))
        {
            sum=31;
            for(i=2;i<m;i++)
            {
                sum=sum+r[i];
            }
            sum=sum+d;
        }
        else
        {
            sum=31;
            for(i=2;i<m;i++)
            {
                sum=sum+p[i];
            }
            sum=sum+d;
        }
    }
    printf("%d",sum);
    return 0;
}
