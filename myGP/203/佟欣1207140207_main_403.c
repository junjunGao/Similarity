#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maxday[12]={31,28,31,30,31,30,31,31,30,31,30,31},year,month,day,num,i;
    scanf("%d %d %d",&year,&month,&day);

    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        maxday[1]++;
    }
    else
    {
        ;
    }
    num=0;
    for(i=0;i<month-1;i++)
    {
        num=num+maxday[i];
    }

    num=num+day;

    printf("%d",num);
    return 0;
}
