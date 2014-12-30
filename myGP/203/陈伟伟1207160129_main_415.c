#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={31,29,31,30,31,30,31,31,30,31,30,31},*p,sum=0,n,i=0,day;
    p=a;
    scanf("%d %d",&n,&day);
    for(i=0;i<n-1;i++)
    {
        sum+=*p++;
    }
    sum+=day;
    printf("%d",sum);
    return 0;
}
