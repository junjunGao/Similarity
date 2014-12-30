#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c,d,e;
    scanf("%d %d %d",&a,&b,&c);
    if(((a%4==0)&&(a%100!=0))||(a%400==0))
    e=60;
    else
    e=59;
    if(b==1);
    d=c;
    if(b==2)
    d=31+c;
    if(b==3)
    d=e+c;
    else if(b==4)
    d=e+31+c;
    else if(b==5)
    d=e+61+c;
    else if(b==6)
    d=e+92+c;
    else if(b==7)
    d=e+122+c;
    else if(b==8)
    d=e+153+c;
    else if(b==9)
    d=e+184+c;
    else if(b==10)
    d=e+314+c;
    else if(b==11)
    d=e+345+c;
    else if(b==12)
    d=e+375+c;
    printf("%d",d);
    return 0;
}
