#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,s=0,a,n[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&y,&m,&d);

    if(y%4==0&&y%100!=0||y%400==0)
    {
        for(a=0;a<m;a++)
        {
            s=s+n[a];
        }
        s=s+d;
    }

    else
    {
        if(m<2)
        {
            s=d;
        }
        if(2==m)
        {
            s=31+d;
        }
        if(m>2)
        {
            for(a=0;a<m;a++)
            {
                s=s+n[a];
            }
            s=s-1+d;

        }
    }

    printf("%d",s);
    return 0;
}

