#include <stdio.h>
#include <stdlib.h>

int runnian(int n)
{
    if(n%400==0||(n%100!=0&&n%4==0))
    {return 1;}
    else
    {return 0;}
}

int yue(int n)
{
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
    {return 1;}
    else if(n==4||n==6||n==9||n==11)
    {return 0;}
}

int main()
{
    int i,n,y,r,s=0;
    scanf("%d %d %d",&n,&y,&r);
    if(y>=2)
    {
        s=31;
    }
    if(y>2)
    {
        if(runnian(n)==1)
        {s=s+29;}
        else if(runnian(n)==0)
        {s=s+28;}
    }
    if(y>3)
    {
        for(i=3;i<y;i++)
        {
            if(yue(i)==1)
            {
                s=s+31;
            }
            if(yue(i)==0)
            {
                s=s+30;
            }
        }
    }
    s=s+r;
    printf("%d",s);
    return 0;
}
