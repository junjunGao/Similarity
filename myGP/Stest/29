#include <stdio.h>
#include <stdlib.h>

int ruinian(int y)
{
    if((y%4==0&&y%100!=0)||y%400==0) return 1;
    else return 0;
}
int main()
{
    int y,m,d,t=0,i;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31};
    scanf("%d %d %d",&y,&m,&d);
    if(1==ruinian(y))
    {
        month[2]=29;
        if(1==m) t=d;
        else
        {
            for(i=0;i<m;i++)
            {
                t=t+month[i];
            }
            t=t+d;
        }
    printf("%d",t);
    }
    else
    {
        if(1==m) t=d;
        else
        {
            for(i=0;i<m;i++)
            {
                t=t+month[i];
            }
            t=t+d;
        }
    printf("%d",t);
    }
    return 0;
}
