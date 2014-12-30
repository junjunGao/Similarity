/*摘要：
 *作者：陈炼松
 *邮箱：1207050221@cau.edu.cn
 *完成日期：2013年5月29日
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int y,m,d,n;
    scanf("%d %d %d",&y,&m,&d);
    if(m==1){n=d;}
    if(m==2){n=d+31;}
    if((y%4==0&&y%100!=0)||(y%400==0))
    {
        if(m==3){n=d+60;}
        if(m==4){n=d+91;}
        if(m==5){n=d+121;}
        if(m==6){n=d+152;}
        if(m==7){n=d+182;}
        if(m==8){n=d+213;}
        if(m==9){n=d+244;}
        if(m==10){n=d+274;}
        if(m==11){n=d+305;}
        if(m==12){n=d+335;}
    }
    if(y%4!=0)
    {
        if(m==3){n=d+59;}
        if(m==4){n=d+90;}
        if(m==5){n=d+120;}
        if(m==6){n=d+151;}
        if(m==7){n=d+181;}
        if(m==8){n=d+212;}
        if(m==9){n=d+243;}
        if(m==10){n=d+273;}
        if(m==11){n=d+304;}
        if(m==12){n=d+334;}
    }
    printf("%d",n);
    return 0;
}
/*input
2011 01 02
output
2
input
2000 03 28
output
88
*/
