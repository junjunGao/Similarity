#include <stdio.h>
#include <stdlib.h>

int is(int year)
{if(year%400==0||(year%100!=0&&year%4==0))
 {return 1;}
  else
 {return 0;}
  }


int main()
{int a[13]={1,31,28,31,30,31,30,31,31,30,31,30,31};
 int y,m,d,i,sum;
 scanf("&d %d %d",&y,&m,&d);
 if(is(y)==1) a[2]=29;
 sum=0;
 for(i=1;i<m;i++)
 {sum=sum+a[i];}
 sum=sum+d;
 printf("%d",sum);



}
