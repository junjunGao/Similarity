#include <stdio.h>
#include <stdlib.h>

int main()
{int n,y,r,i,sum=0,day=0;
int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
scanf("%d %d %d",&n,&y,&r);
if(((n%4==0)&&(n%100!=0))||(n%400==0))
{
for(i=0;i<y-1;i++)
{
    sum=sum+a[i];
}
day=sum+r;}
else
{

for(i=0;i<y-1;i++)
{
    sum=sum+b[i];
}
day=sum+r;
}

    printf("%d",day);
    return 0;
}
