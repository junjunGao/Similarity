#include <stdio.h>
#include <stdlib.h>

int main()
{int y,m,d,n;
scanf("%d %d %d",&y,&m,&d);
if(m==1)
printf("%d",d);
else if(m==2)
printf("%d",d+31);
if(y%4==0&&y%100!=0)
{
if(m==3)
printf("%d",d+29+31);
    else if(m==4)
    printf("%d",d+31+29+31);
    else if(m==5)
    printf("%d",d+31+29+31+30);
    else if(m==6)
    printf("%d",d+31+29+31+30+31);
    else if(m==7)
    printf("%d",d+31+29+31+30+31+30);
    else if(m==8)
    printf("%d",d+31+29+31+30+31+30+31);
    else if(m==9)
    printf("%d",d+31+29+31+30+31+30+31+31);
    else if(m==10)
    printf("%d",d+31+29+31+30+31+30+31+31+30);
    else if(m==11)
    printf("%d",d+31+29+31+30+31+30+31+31+30+31);
    else if(m==12)
    printf("%d",d+31+29+31+30+31+30+31+31+30+31+30);
}
  else
  {
 if(m==3)
  printf("%d",d+28+31);
     else if(m==4)
     printf("%d",d+31+28+31);
     else if(m==5)
    printf("%d",d+31+28+31+30);
    else if(m==6)
    printf("%d",d+31+28+31+30+31);
    else if(m==7)
    printf("%d",d+31+28+31+30+31+30);
    else if(m==8)
    printf("%d",d+31+28+31+30+31+30+31);
    else if(m==9)
    printf("%d",d+31+28+31+30+31+30+31+31);
    else if(m==10)
    printf("%d",d+31+28+31+30+31+30+31+31+30);
    else if(m==11)
    printf("%d",d+31+28+31+30+31+30+31+31+30+31);
    else if(m==12)
    printf("%d",d+31+28+31+30+31+30+31+31+30+31+30);
  }
    return 0;
}
