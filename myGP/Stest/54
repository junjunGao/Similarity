#include <stdio.h>
#include <stdlib.h>

int mday(int m,int y)
{
    if(m==2)
    {
        if((y%4==0&&y%100!=0)||y%400==0)
            return 29;
        else
            return 28;
    }
    else if(m==4||m==6||m==9||m==11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}

int main()
{
    int year,month,day,days=0;
    scanf("%d %d %d",&year,&month,&day);
    while(month>1)
    {
        month--;
        days+=mday(month,year);
    }
    days+=day;
    printf("%d\n",days);
    return 0;
}
