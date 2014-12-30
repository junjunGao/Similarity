#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,y,m[13],d,i,year,month,day;
    scanf ("%d %d %d",&year,&month,&day);
    m[1]=m[3]=m[5]=m[7]=m[8]=m[10]=m[12]=31;
    m[4]=m[6]=m[9]=m[11]=30;
    if (year%400==0||(year%4==0&&year%100!=0))  m[2]=29;
    else m[2]=28;
    a=day;
    for (i=1;i<month;i++)
      {
          a=a+m[i];
          }
    printf("%d",a);
    return 0;
}
