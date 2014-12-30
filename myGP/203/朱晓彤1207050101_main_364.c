#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,y,r,x=0,i;
    int yd[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    scanf("%d %d %d",&n,&y,&r);
    if((n%4==0 && n%100!=0)||(n%400==0))
    {
        yd[1]=29;
    }
    if(y>1)
    {
    for(i=0;i<y-1;i++)
    {
        x=x+yd[i];
    }x=x+r;
    }
    else
    x=x+r;
    printf("%d",x);
    return 0;
}
