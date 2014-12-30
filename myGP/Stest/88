#include <stdio.h>
#include <stdlib.h>

int main()

{

    int year = 0,month = 0,day = 0;


    scanf("%d%d%d",&year,&month,&day);

    while(--month)

    {

        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)

        {

            day += 31;

        }

        else if(month == 2)

        {

             if((year%400 == 0 || (year%4 == 0 && year%100 !=0)))

             {

                 day += 29;

             }

             else

             {

                 day += 28;

             }

        }

        else

        {

             day += 30;

        }

    }

    printf("%d",day);

    return 0;

}
