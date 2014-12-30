#include <stdio.h>
#include <stdlib.h>
int is_leap(int year)
{
    if(year%400==0)
       return 1;
    else if(year%100==0)
       return 0;
     else if(year%4==0)
       return 1;
      else
       return 0;
}

int nextday(int date)
{
  int month_data[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};
  int year,month,day,leap;
  year=date/10000;
  month=date%10000/100;
  day=date%100;
  leap=is_leap(year);

  if(leap==1)
    {
        month_data[2]=29;
    }

  day++;
  if(day>month_data[month])
  {
      month++;
      day=1;
  }
  if(month==13)
  {
      year++;
      month=1;
      day=1;
  }

  date=year*10000+month*100+day;
  return date;
}

main()
{
    int year,month_1,month_2=1,day_1,day_2=1,n=1,promoter,terminal;
    scanf("%d %d %d",&year,&month_1,&day_1);
    terminal=year*10000+month_1*100+day_1;
    promoter=year*10000+month_2*100+day_2;

    while(promoter<terminal)
    {
        n++;
        promoter=nextday(promoter);
    }

    printf("%d",n);
    return 0;
}
