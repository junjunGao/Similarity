#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int year)
{
  if((year%4==0&&year%100!=0)||(year%400==0))
  {
   return 1;
  }
  else
  {
   return 0;
  }
}
 int main()
{
  int y,m,d,s=0,i;
  int monthdate[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  scanf("%d %d %d",&y,&m,&d);
  if(isLeapYear(y)==1)
  {
    monthdate[1]=29;
  }
  if(m==1)
  {
    s=d;
  }
  else
  {
    m=m-1;
    for(i=0;i<m;i++)
    {
     s=s+monthdate[i];
    }
    s=s+d;
  }
 printf("%d",s);
 return 0;
}
