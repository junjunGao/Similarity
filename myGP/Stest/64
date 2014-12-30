#include <stdio.h>
#include <stdlib.h>

int main()

{
int leap(int y);
int year,month,day;
int sum=0,i,m[12]={31,0,31,30,31,30,31,31,30,31,30,31};

scanf ("%d %d %d",&year,&month,&day);
if (leap(year))
{m[1]=29;}
else
{m[1]=28;}
for (i=0;i<=(month-2);i++)
{sum+=m[i];}
sum+=day;
printf ("%d\n",sum);
}
int leap(int y)
{
int leapyear=0;
if (y%4!=0)
leapyear=0;
else if (y%100!=0)
leapyear=1;
else if (y%400!=0)
leapyear=0;
else
leapyear=1;
return(leapyear);
}


