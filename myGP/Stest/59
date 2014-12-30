#include <stdio.h>
#include <stdlib.h>

int shifourunnian(int y)
{
    if(y%400==0||y%4==0&&y%100!=0)
    return 1;
    else
    return 0;
}
int main()
{
    int y,m,d,i,num=0;
    int s[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d%d%d",&y,&m,&d);
    if(shifourunnian(y)==1)
       s[2]=29;
    for(i=1;i<m;i++)
    {
        if(m==1)
        num=num+d;
        else
        num=num+s[i];
    }
    printf("%d",num+d);
    return 0;
}
