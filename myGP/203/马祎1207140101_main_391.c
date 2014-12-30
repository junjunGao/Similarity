#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,num=0,i,n=0;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};

    scanf("%d %d %d",&y,&m,&d);

    if(m==1)
      {
          num=d;
          printf("%d",num);
      }

   else if((y%4==0&&y%100!=0)||y%400==0)
       {
           {
               for(i=1;i<m;i++)
               n=n+b[i-1];
           }
           num=n+d;


           printf("%d",num);
       }
    else
       {
           {
               for(i=1;i<m;i++)
               n=n+a[i-1];
           }
           num=n+d;


           printf("%d",num);
       }


    return 0;
}
