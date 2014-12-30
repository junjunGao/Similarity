#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,i,sum=0,a[13]={0,31,29,31,30,31,30,31,30,31,31,30,31,},b[13]={0,31,28,31,30,31,30,31,30,31,31,30,31};
    scanf("%d %d %d",&x,&y,&z);
    if((x%4==0&&x%100!=0)||(x%400==0))
    {
        for(i=1;i<y;i++)
        sum=sum+a[i];
    }
    else
    {
        for(i=1;i<y;i++)
        sum=sum+b[i];
    }
    printf("%d",sum+z);
    return 0;
}
