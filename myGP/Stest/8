#include <stdio.h>
#include <stdlib.h>
int leapyear(int y)
{
      if(((y%4==0)&&(y%100!=0))||(y%400==0))
      return 1;
      else
      return 0;
}

int main()
{
      int y,m,d,s,i;
      scanf("%d %d %d",&y,&m,&d);
      int a[13]={0,0,31,28,31,30,31,30,31,31,30,31,30};
      s=0;

      for(i=0;i<=m;i++)
      {
            s=s+a[i];
      }
      s=s+d;
      if(leapyear(y)==1)
      {
            s=s+1;
      }
      else
      ;

    printf("%d",s);
    return 0;
}
