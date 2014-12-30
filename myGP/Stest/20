#include<stdio.h>
int main(){
		int year,month,date,leapyear=0;
		int sum=0,i;
		int monthlist[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
		scanf("%d %d %d",&year,&month,&date);
		if((year%400==0)||(year%100!=0 && year%4==0)) leapyear=1;
		for(i=1;i<month;i++){
			sum+=monthlist[leapyear][i];
		}
		sum+=date;
		printf("%d",sum);
}