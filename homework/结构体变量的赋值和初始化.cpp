//结构体变量可以整合不同变量类型，生成新的变量类型。在一个个体同时有多个值时很好用。 
#include<stdio.h>
struct student
{
	int age ;
	float score;
	char sex;
 } st,st2;
int main(void)
{   
	struct student st = { 17,88.8,'F'};//定义的同时赋值可以一同赋值 ，在大括号里按顺序赋值。 
	printf("%d\n%.5f\n%c\n",st.age,st.score,st.sex);
	
	struct student st2;
	st2.age=10;
	st2.score=88.22;
	st2.sex='M';
	printf("%d\n%.5f\n%c\n",st2.age,st2.score,st2.sex);
}

