#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,i,sum=0,a[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&x,&y,&z);
    if((x%400==0)||((x%4==0)&&(x%100!=0)))
    {a[2]=29;}
    else
    {a[2]=28;}
    for(i=y-1;i>=1;i--)
    {
        sum=a[i]+sum;
    }
    sum=sum+z;
    printf("%d",sum);
    return 0;
}
