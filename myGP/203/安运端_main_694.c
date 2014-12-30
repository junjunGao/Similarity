#include <stdio.h>
#include <stdlib.h>

int main()
{
  int day,month,year,sum,leap;
  scanf("%d %d %d",&year,&month,&day);

      if(month==1)
      sum=0;
      if(month==2)
      sum=31;
      if(month==3)
      sum=59;
      if(month==4)
      sum=90;
      if(month==5)
      sum=120;
      if(month==6)
      sum=151;
      if(month==7)
      sum=181;
      if(month==8)
      sum=212;
      if(month==9)
      sum=243;
      if(month==10)
      sum=273;
      if(month==11)
      sum=304;
      if(month==12)
      sum=334;


  sum=sum+day;
  if(year%400==0||(year%4==0&&year%100!=0))
  leap=1;
  else
  leap=0;
  if(leap&&month>2)
  sum++;
  printf("%d",sum);
 return 0;
}
