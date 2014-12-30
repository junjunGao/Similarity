#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,i,sum=0;
    scanf ("%d %d %d",&y,&m,&d);
    if (m==1)
    {
        for (i=1;i<=d;i++)
            {
                sum=sum+1;
            }
    }

    if (m==2)
    {
        sum=31;
        for (i=1;i<=d;i++)
        {
                sum=sum+1;
        }
    }

    if ((0==y%4&&0!=y%100)||(0==y%400))
    {
           if (m==3)
           {
                 sum=60;
                 for (i=1;i<=d;i++)
                 {
                    sum=sum+1;
                 }
           }
           if (m==4||m==6||m==8||m==10||m==12)
           {
                 sum=91+61*(m-4)/2;
                 for (i=1;i<=d;i++)
                 {
                    sum=sum+1;
                 }
           }
           if (m==5||m==7||m==9||m==11)
           {
                 sum=121+61*(m-5)/2;
                 for (i=1;i<=d;i++)
                 {
                    sum=sum+1;
                 }
           }
    }
    else
    {
        if(m==3)
        {
            sum=59;
            for (i=1;i<=d;i++)
            {
                sum=sum+1;
            }
        }
        if (m==4||m==6||m==8||m==10||m==12)
           {
                 sum=90+61*(m-4)/2;
                 for (i=1;i<=d;i++)
                 {
                    sum=sum+1;
                 }
           }
           if (m==5||m==7||m==9||m==11)
           {
                 sum=120+61*(m-5)/2;
                 for (i=1;i<=d;i++)
                 {
                    sum=sum+1;
                 }
           }
    }
    printf("%d",sum);
    return 0;
}
