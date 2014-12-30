#include <stdio.h>
#include <stdlib.h>
int main()
{
    int year,month,day,j;
    scanf("%d %d %d",&year,&month,&day);
    if(year%4!=0||year%400!=0||year%100!=0)
    {
        if(month==1)
        {
            j=day;
        }
        else if(month==2)
        {
            j=31+day;
        }
        else if(month==3||month==5||month==7)
        {
            j=31*(month-1)/2+28+30*(month-3)/2+day;
        }
        else if(month==4||month==6)
        {
            j=31*(month)/2+28+30*(month-4)/2+day;
        }
        else if(month==8||month==10||month==12)
        {
            j=31*(month)/2+30*(month-4)/2+28+day;
        }
        else if(month==9||month==11)
        {
            j=31*(month+1)/2+30*(month-5)/2+28+day;
        }
    }
    else
    {
        if(month==1)
        {
            j=day;
        }
        else if(month==2)
        {
            j=31+day;
        }
        else if(month==3||month==5||month==7)
        {
            j=31*(month-1)/2+29+30*(month-3)/2+day;
        }
        else if(month==4||month==6)
        {
            j=31*(month)/2+29+30*(month-4)/2+day;
        }
        else if(month==8||month==10||month==12)
        {
            j=31*(month)/2+30*(month-4)/2+29+day;
        }
        else if(month==9||month==11)
        {
            j=31*(month+1)/2+30*(month-5)/2+29+day;
        }
    }
    printf("%d",j);
}
