#include <stdio.h>
#include <stdlib.h>


int main()
{int a,b,c,s=0,i=0;
int e[12]={31,28,31,30,31,30,31,31,30,31,30,31};
scanf ("%d %d %d",&a,&b,&c);
while (i<=b-2)
{
    s=s+e[i];
    i++;
}
s=s+c;
if (((a%4==0&&a%100!=0)||(a%100==0&&a%400==0))&&(b>=3))
{
    s=s+1;
}
printf ("%d",s);

    return 0;
}
