#include <stdio.h>
#include <stdlib.h>

int run(int year)
{
    if(year/4==0&&year/100!=0&&year/400==0)return 1;
    else return 0;
}


int main()
{
    int year,month,day;
    scanf("%d %d %d",&year,&month,&day);
    if(run(year)==1)
    {
        if(month==1) printf("%d",day);
        else
          if(month==2) printf("%d",day+31);
          else
            if(month==3) printf("%d",day+31+28);
             else
               if(month==4) printf("%d",day+31+28+31);
               else
                 if(month==5) printf("%d",day+31+28+31+30);
                 else
                   if(month==6) printf("%d",day+31+28+31+30+31);
                   else
                     if(month==7) printf("%d",day+31+28+31+30+31+30);
                     else
                       if(month==8) printf("%d",day+31+28+31+30+31+30+31);
                       else
                         if(month==9) printf("%d",day+31+28+31+30+31+30+31+31);
                         else
                           if(month==10) printf("%d",day+31+28+31+30+31+30+31+31+30);
                           else
                             if(month==11) printf("%d",day+31+28+31+30+31+30+31+31+30+31);
                             else
                               if(month==12) printf("%d",day+31+28+31+30+31+30+31+31+30+31+30);
    }
    else
    {
        if(month==1) printf("%d",day);
        else
          if(month==2) printf("%d",day+31);
          else
            if(month==3) printf("%d",day+31+29);
             else
               if(month==4) printf("%d",day+31+29+31);
               else
                 if(month==5) printf("%d",day+31+29+31+30);
                 else
                   if(month==6) printf("%d",day+31+29+31+30+31);
                   else
                     if(month==7) printf("%d",day+31+29+31+30+31+30);
                     else
                       if(month==8) printf("%d",day+31+29+31+30+31+30+31);
                       else
                         if(month==9) printf("%d",day+31+29+31+30+31+30+31+31);
                         else
                           if(month==10) printf("%d",day+31+29+31+30+31+30+31+31+30);
                           else
                             if(month==11) printf("%d",day+31+29+31+30+31+30+31+31+30+31);
                             else
                               if(month==12) printf("%d",day+31+29+31+30+31+30+31+31+30+31+30);
    }

    return 0;
}
