//C语言根据日期判断星期几（使用基姆拉尔森计算公式）
//算法如下：
//基姆拉尔森计算公式
//W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400) mod 7 +1
//在公式中d表示日期中的日数，m表示月份数，y表示年数。
 
#include<stdio.h>
int main(void)
{
	int month,day,year,week;
	printf("enter date (mm/dd/yy):");
	scanf("%d%d%d",&month,&day,&year);
	printf("dated this %d",day);
	switch(day)
	{
		case 1: case21 :case31:
		printf("st");break;
		case 2:case 22:
		printf("nd");break;
		case 3:case 23:
		printf("rd");break;
		default:printf("th");break;
	}
	printf("day of");
	switch(month)
	{
		case 1:printf("January");break;
		case 2:printf("February");break;
		case 3:printf("March");break;
		case 4:printf("April");break;
		case 5:printf("May");break;
		case 6:printf("June");break;
		case 7:printf("July");break;
		case 8:printf("August");break;
		case 9:printf("September");break;
		case 10:printf("October");break;
		case 11:printf("November");break;
		case 12:printf("December");break;
	}
	printf(", 20%.2d.",year);
	week=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7+1;
	switch(week)
	{
		case 1 :printf("Monday");break;
		case 2: printf("Tuesday");break;
		case 3:printf("Wednesday");break;
		case 4:printf("Thursday");break;
		case 5:printf("Friday");break;
		case 6:printf("Saturday");break;
		case 7: printf("Sunday");break; 
			
		}
	return 0;
	
 } 
