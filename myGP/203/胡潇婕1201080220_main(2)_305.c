#include <stdio.h>
#include <stdlib.h>

int main()
{

   int y,m,d,s=0,i;
   int month_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

     scanf("%d %d %d",&y,&m,&d);
    if((y%4==0&&y%100!=0)||y%400==0)
    {
        for(i=0;i<m;i++)
        {
            s=s+month_day[i];
        }
        s=s+d+1;
    }
    else
    {
        for(i=0;i<m;i++)
        {
            s=s+month_day[i];
        }
        s=s+d;
    }
    printf("%d",s);
    return 0;
}
