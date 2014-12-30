#include <stdio.h>
#include <stdlib.h>

int LeapYear(int n)
{
    if(n%400==0||(n%100!=0)&&(n%4==0))
    return 1;
    else
    return 0;
}

int days(int y,int m)
{
    int month_data[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=0,i;

    for(i=1;i<m;i++)
    {
      /*if(LeapYear(y)==0)
      {sum=sum+month_data[i];}
      else
      if(LeapYear(y)==1||m>2)
      {sum=sum+month_data[i]-1;}
      else*/
      sum=sum+month_data[i];

    }
    if(LeapYear(y)==0)
    return sum;
    else
      if(LeapYear(y)==1||m>2)
      return sum+1;
      else
      return sum;

}


int main()
{
    int y,m,d,num,a;
    scanf("%d %d %d",&y,&m,&d);
    a=days(y,m);
    num=a+d;
    printf("%d",num);
    return 0;
}
