#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int IsSuShu(int n)
{
    int i=2;
    while(n%i!=0&&i<=sqrt(n))
    {
        i++;
    }
    if(n==1||i<=sqrt(n))
    {
        return 0;
    }
    else return 1;
}

int IsLeapYear(int n)
{
    if(n%400==0||(n%100!=0&&n%4==0))
    {return 1;}
    else return 0;
}

int NextDay(int y,int m,int d)
{
    int month_data[12]={31,28,31,30,31,30,31,31,30,31,30,31},a;
   if(m==12&&d==31)
    {
        y=y+1;m=1;d=0;
    }
    if(IsLeapYear(y)==1)
    {
        month_data[1]=29;
    }
    if(month_data[m-1]==d)
    {
        m++;d=1;
    }
    else
    {
        d++;
    }
    a=y*10000+m*100+d;
    return a;
}



int main()
{
int y1,m1,d1,y2,m2,d2,a1,a2,y,m,r,n=0;

   scanf("%d%d%d",&y2,&m2,&d2);
  a2=y2*10000+m2*100+d2;
  a1=y2*10000+100+1;
  //a2=y2*10000+m2*100+d2;
while(a1<=a2)
{

 y1=a1/10000;
 m1=(a1-y1*10000)/100;
 d1=a1-y1*10000-m1*100;
 a1=NextDay(y1,m1,d1);
 n++;}


    printf("%d",n);
    return 0;
}
