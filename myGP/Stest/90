#include <stdio.h>
#include <stdlib.h>
int ru(int year)
{if((year%4==0&&year%100!=0)||year%400==0)
 {return 1;}
 else
 {return 0;}
}
int main()
{int year,month,day,i,s=0;
 scanf("%d %d %d",&year,&month,&day);
 if(ru(year)==1)
 {
  for(i=1;i<month;i++)
  {if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
   {s=s+31;}
   else if(i==4||i==6||i==9||i==11)
   {s=s+30;}
   else if(i==2)
   {s=s+29;}
  }
 }
 else
 {for(i=1;i<month;i++)
  {if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
   {s=s+31;}
   else if(i==4||i==6||i==9||i==11)
   {s=s+30;}
   else if(i==2)
   {s=s+28;}
  }
 }
 s=s+day;
    printf("%d",s);
    return 0;
}
