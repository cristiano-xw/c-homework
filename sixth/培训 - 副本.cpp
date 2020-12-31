#include<stdio.h>
struct student
{
	char name[100];
	int age ; 
	int score;  //不可以在结构体内部初始化 
};

int main(void)
{
	struct student student[1000];
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d",&student[i].name,&student[i].age,&student[i].score);
		
		student[i].age++;
		
		if(student[i].score>=500)
		{
		student[i].score=600;
		}
		
		if(student[i].score*(1.2)<600)      
		{
			student[i].score=student[i].score*1.2;
			
		}
		
		
		
		printf("%s %d %d\n",student[i].name,student[i].age,student[i].score);
	}
	return 0;
}
