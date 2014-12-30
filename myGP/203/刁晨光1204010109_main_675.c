#include <stdio.h>
#include <stdlib.h>

int main()
{int Y,M,D,sum=0,i;
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
scanf("%d %d %d",&Y,&M,&D);
if((0==(Y%4)&&(Y%100)!=0)||((Y%400)==0))
{
 for(i=0;i<M-1;i++)
 {sum+=b[i];}
 sum+=D;
}
else
{
 for(i=0;i<M-1;i++)
 {sum+=a[i];}
 sum+=D;
}


    printf("%d",sum);
    return 0;
}
