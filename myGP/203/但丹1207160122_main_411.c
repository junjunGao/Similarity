#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d,i,s=0;
    int md[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//�����Ӧ��&���鸳ֵ
    scanf("%d %d %d",&y,&m,&d);
    if(y%4==0&&y%100!=0||y%400==0)
    {
        md[2]=29;//mz[m]��m��0��ʼm=1��m=mz[0]
    }
    for(i=0;i<m;i++)
    {
        s=s+md[i];
    }
    s=s+d;
    printf("%d",s);
    return 0;
}
