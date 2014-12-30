#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
        int y,m,d,s=0,i;
        int days[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

        scanf("%d %d %d",&y,&m,&d);

        if((y%4==0 && y%100!=0)||(y%400==0))
        {
                for(i=0;i<m;i++)
                {
                        s=s+days[i];
                }
                s=s+d;
        }

        else
        {
                if(m>2)
                {
                    for(i=0;i<m;i++)
                    {
                        s=s+days[i];
                    }
                    s=s+d-1;
                }
                if(m==1)
                {
                        s=d;
                }
                if(m==2)
                {
                        s=31+d;
                }
        }

    printf("%d",s);
    return 0;
}
