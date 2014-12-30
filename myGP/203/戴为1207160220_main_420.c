#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,n,f=0;
    int r[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
   if((a%4==0&&a%100!=0)||a%400==0)
        r[2]=29;
        for(i=1;i<b;i++)
        f=f+r[i];
        n=f+c;
    printf("%d",n);
    return 0;
}
