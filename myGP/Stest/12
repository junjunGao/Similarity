#include <stdio.h>
#include <stdlib.h>

int runian(int x)
{
    if( (x%4==0 && x%100!=0) || (x%400==0) )
    {return 1;}
    else
    {return 0;}
}
int main()
{
    int i,y,m,d,mun=0,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&y,&m,&d);
    if(runian(y)==1)
    {
        a[1]=29;
    }
    mun=d;
    for(i=0;i<m-1;i++)
    {
        mun=mun+a[i];
    }
    printf("%d",mun);
    return 0;
}
