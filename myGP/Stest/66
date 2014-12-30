#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{int y,m,d,i,flog=1,sum,t,u=0;
int s[12]={31,29,31,30,31,30,31,31,30,31,30,31};

scanf("%d %d %d",&y,&m,&d);

if(y%400!=0||(y%100!=0&&y%4!=0))
     flog=0;

if(flog==0)
    s[1]=28;

if(m==1)sum=d
   ;
else
{
  for(i=0;i<m-1;i++)
    {

     u=u+s[i];
    }

    sum=u+d;
}


  printf("%d",sum);

    return 0;
}

