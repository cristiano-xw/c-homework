//读入n名学生的姓名、身份证号、成绩，分别输出成绩最高和成绩最低学生的姓名和身份证号。
//注意：学生名单中可能缺考，没有成绩，表示为n/a.
#include<stdio.h>
#include<string.h>
struct student
{
	char name[10];
	char ID[20];
	char score[100];
	
};

int main()
{   
    int len;
    int i;
    int n;
	//printf("how many students are there\n");
	scanf("%d",&n);
	//printf("please input students` information\n");
	
	struct student student[n]; //定义一个名叫student的数组，存放所有学生的信息 
	for(i=0;i<n;i++)
	{   
		scanf("%s%s%s",&student[i].name,&student[i].ID,&student[i].score);
	}
    len = strlen(student[i].score);
	int max=0;
	int min=0;
	for(i=0;i<n;i++)
	{
	
	if (strcmp(student[i].score,"n/a")!=0)   //排除a/n的影响 
	
	{
		if (len==2) 
		 {
		if(strcmp(student[max].score,student[i].score)<0 || (student[max].score == student[i].score && strcmp(student[i].name, student[max].name) < 0)) max=i; 
		
		
		if(strcmp(student[min].score,student[i].score)>0 || (student[min].score == student[i].score && strcmp(student[i].name, student[min].name) > 0)) min=i; 
		
	    }
	    if (len==3) 
	    { 
	     max=i;
		}
	}
	
   }
	
      printf("%d\n",max);
	 //printf("the result is\n");
	 printf("%s %s\n",student[max].name,student[max].ID);
	 printf("%s %s\n",student[min].name,student[min].ID);
	 return 0;
}
