#include <stdio.h>
#include <stdlib.h>

int panduanrunnian(int y)
{
    int a,b,c;
    a=y%100;
    b=y%400;
    c=y%4;
    if(a==0)
    {
        if(b==0)//闰年
        {
            {return 1;}
        }
        else//非闰年
        {
            {return 0;}
        }
    }
    else
    {
        if(c==0)
        {
            {return 1;}//闰年
        }
        else
        {
            {return 0;}//非闰年
        }
    }
}


int main()
{
    int y,m,d,s,n;
    scanf("%d %d %d",&y,&m,&d);
    n=panduanrunnian(y);
    s=(31*(m-1))+d;
    if(m>=3)
    {
        if(n==0)
        {
            s=s-3;
        }
        else if(n==1)
        {
            s=s-2;
        }
    }
    if(m==5)
    {
        s=s-1;
    }
    if(m==7)
    {
        s=s-1;
    }
    if(m==10)
    {
        s=s-1;
    }
    if(m==12)
    {
        s=s-1;
    }
    printf("%d\n",s);
    return 0;
}
