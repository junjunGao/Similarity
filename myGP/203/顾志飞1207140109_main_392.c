#include <stdio.h>
#include <stdlib.h>



int main()
{int y,m,d,i,sum=0,n=0;
scanf("%d %d %d",&y,&m,&d);
if(((y%4==0)&&(y%100!=0))||(y%400==0))
{int md[12]={31,29,31,30,31,30,31,31,30,31,30,31};
for(i=0;i<m-1;i++)
{
    sum=sum+md[i];
}
n=sum+d;}
else
{
int md[12]={31,28,31,30,31,30,31,31,30,31,30,31};
for(i=0;i<m-1;i++)
{
    sum=sum+md[i];
}
n=sum+d;
}

    printf("%d",n);
    return 0;
}
