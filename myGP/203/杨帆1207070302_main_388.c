#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{int a,b,c,num;
 scanf("%d %d %d",&a,&b,&c);
 if(a%4==0&&a%100!=0||a%400==0)
 {num=1;}
 else
 {num=0;}
      if(b==1) num=c;
 else if(b==2) num=31+c;
 else if(b==3) num=num+31+28+c;
 else if(b==4) num=num+31+28+31+c;
 else if(b==5) num=num+31+28+31+30+c;
 else if(b==6) num=num+31+28+31+30+31+c;
 else if(b==7) num=num+31+28+31+30+31+30+c;
 else if(b==8) num=num+31+28+31+30+31+30+31+c;
 else if(b==9) num=num+31+28+31+30+31+30+31+31+c;
 else if(b==10) num=num+31+28+31+30+31+30+31+31+30+c;
 else if(b==11) num=num+31+28+31+30+31+30+31+31+30+31+c;
 else if(b==12) num=num+31+28+31+30+31+30+31+31+30+31+30+c;
 printf("%d",num);
    return 0;}
