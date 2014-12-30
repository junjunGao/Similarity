#include <stdio.h>
//函数声明
int Leapyear(int);
int month_choice();
void main()
{
//1.定义变量类型
	int year;//年
	int month;//月
	int month_check[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int day;//日
	int sum;//记录本年的第几天
	int i;
	int j;

//2.变量赋初值
	year=0;
	month=0;
	day=0;
	sum=0;
	i=0;
	j=0;

//3.获取数据
	printf("");
	printf("");
	scanf("%d",&year);
	//printf("month=");
	scanf("%d",&month);
	//printf("day=");
	scanf("%d",&day);

//4.处理数据//5.输出数据
	//累加各月天数（二月默认是28天）
	for(i=1;i<=12;i++)
	{
		if(i==month)
		{
			for(j=0;j<month-1;j++)
			{
				sum=sum+month_check[j];
			}
		}
	}
	//判断该年是否是瑞年（以确认二月的天数）
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		sum=sum+1;
		printf("%d\n",sum+day);
	}
	else
	{
		printf("%d\n",sum+day);
	}
}

