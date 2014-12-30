#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days,year,month,day,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i;

        days=0;
        scanf("%d %d %d",&year,&month,&day);
        days+=day;
        for(i=1;i<month;i++)
        {   days=days+m[i];  }
        if(month>2)
        {
            if((year%4==0&&year%100!=0)||year%400==0)
            days++;
        }
        printf("%d",days);

    return 0;
}
