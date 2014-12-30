#include <stdio.h>
#include <stdlib.h>

int daysOfMonth[] ={31,28,31,30,31,30,31,31,30,31,30,31};
int isLeapYear(int year);
int main(void)
{
    int y,m,d;
    int days=0;
    int i;
    scanf("%d %d %d",&y,&m,&d);
    if(isLeapYear(y))
  daysOfMonth[1]=29;
 for(i=0;i<m-1;i++)
  days+=daysOfMonth[i];
 days+=d;
 printf("%d",days);
 return 0;
}

int isLeapYear(int year)
{
 int leap = 0;
 if(year%100 == 0 && year%400 ==0)
  leap = 1;
 else if(year%100 != 0 &&year%4 ==0)
  leap = 1;
 return leap;
}
