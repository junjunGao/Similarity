#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,n=0,i=0;
    scanf("%d %d %d",&y,&m,&d);

    if((y%4==0&&y%100!=0)||y%400==0)
	  n=1;
    if(n==1)
    {
        if(m==1 && d<=31)
        {
            i=d;
        }
        else if(m==2 && d<=29)
        {
            i=i+31+d;
        }
        else if(m==3 && d<=31)
        {
            i=i+60+d;
        }
        else if(m==4 && d<=30)
        {
            i=i+91+d;
        }
        else if(m==5 && d<=31)
        {
            i=i+121+d;
        }
        else if(m==6&& d<=30)
        {
            i=i+152+d;
        }
        else if(m==7 && d<=31)
        {
            i=i+182+d;
        }
        else if(m==8 && d<=31)
        {
            i=i+213+d;
        }
        else if(m==9 && d<=30)
        {
            i=i+244+d;
        }
        else if(m==10 && d<=31)
        {
            i=i+274+d;
        }
        else if(m==11 && d<=30)
        {
            i=i+305+d;
        }
        else if(m==12 && d<=31)
        {
            i=i+335+d;
        }

    }
    else if(n==0)
    {
        if(m==1 && d<=31)
        {
            i=d;
        }
        else if(m==2 && d<=28)
        {
            i=i+31+d;
        }
        else if(m==3 && d<=31)
        {
            i=i+59+d;
        }
        else if(m==4 && d<=30)
        {
            i=i+90+d;
        }
        else if(m==5 && d<=31)
        {
            i=i+120+d;
        }
        else if(m==6&& d<=30)
        {
            i=i+151+d;
        }
        else if(m==7 && d<=31)
        {
            i=i+181+d;
        }
        else if(m==8 && d<=31)
        {
            i=i+212+d;
        }
        else if(m==9 && d<=30)
        {
            i=i+243+d;
        }
        else if(m==10 && d<=31)
        {
            i=i+273+d;
        }
        else if(m==11 && d<=30)
        {
            i=i+304+d;
        }
        else if(m==12 && d<=31)
        {
            i=i+334+d;
        }

    }

    printf("%d",i);
    return 0;
}
