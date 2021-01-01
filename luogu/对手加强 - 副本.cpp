#include<stdio.h>
#include<string.h>
#include<math.h>
struct student
{
	char name[10];
	int yuwen ;                                               
	int shuxue ;
	int yinyu ;
};

int main(void)
{
	int n;
	scanf("%d",&n);
	struct student student[n];
	int i=0; int j=0;
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%d",&student[i].name,&student[i].yuwen,&student[i].shuxue,&student[i].yinyu);
	}
	
    int a;int b;int c;int d;
     for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
          {
          	a=abs(student[i].yuwen-student[j].yuwen);
          	b=abs(student[i].shuxue-student[j].shuxue);
          	c=abs(student[i].yinyu-student[j].yinyu);
          	d=abs((student[i].yuwen+student[i].shuxue+student[i].yinyu)-(student[j].yuwen+student[j].shuxue+student[j].yinyu))
;          	if(a<=5&&b<=5&&c<=5&&d<=10)
          	{
          		printf("%s %s",student[i].name,student[j].name);
          		printf("\n");
			}
		  }
	
	
	
	
	
	
}
