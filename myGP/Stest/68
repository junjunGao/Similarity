#include <stdio.h>
#include <stdlib.h>
int ruinian(int n)
{
    if((n%400==0)||(n%4==0&&n%100!=0))
    return 1;
    else
    return 0;
}
int main()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},i,b[3],j,day;
    for(i=0;i<3;i++)
    {
    scanf("%d",&b[i]);
    }
    if(ruinian(b[0]==1))
    {
        a[1]=29;
        for(j=b[1]-2,day=b[2];j>=0;j--)
        {
            if(j<0)
            {a[j]=0;}
            day=day+a[j];
        }
    }
    else
   {
       for(j=b[1]-2,day=b[2];j>=0;j--)
        {
            if(j<0)
            {a[j]=0;}
            day=day+a[j];
        }
   }
    printf("%d",day);
    return 0;
}
