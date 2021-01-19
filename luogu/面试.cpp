#include<stdio.h>
#include<iostream>
using namespace std;
struct student
{
	int num;
	int score;
}; 
int main(void)
{   
    int n=0; int m=0;
    scanf("%d%d",&n,&m);
    
    struct student student[55555];
    int i=1;
    for(i=1;i<=n;i++)
    {
    	scanf("%d%d",&student[i].num,&student[i].score);
	}
	
    //for(i=1;i<=n;i++)
   // {
    //	printf("%d",student[i].num);
    //	printf("\n");
	//}
	
	int j=0;
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(student[j].score>student[i].score)
			{
				swap(student[j].num,student[i].num);
				swap(student[j].score,student[i].score);
			}
			if(student[j].score==student[i].score&&student[j].num<student[i].num)
			{
				swap(student[j].num,student[i].num);
				swap(student[j].score,student[i].score);
			}
		}
	}
	
	int h=0;
	h=m*1.5;
	//printf("%d\n",h);
    int s=student[h].score;
    
    int v=0;
    for(i=1;i<=n;i++)
    {
    	if(student[i].score>=s)
    	{
    		v++;
		}
	}
	
	printf("%d %d\n",s,v);
	
	for(i=1;i<=v;i++)
	{
		printf("%d %d",student[i].num,student[i].score);
		printf("\n");
	}
	
	
	return 0;
}
