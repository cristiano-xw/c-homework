#include<stdio.h>
#include<string.h>
struct student
{
	char a[111];//姓名
	char b[201]; //身份证
	char c[111];
	int v;//缺考标记
	int d;//最后成绩 
};

int main(void)
{   
    int t=0;
    
    int n=0;
    scanf("%d",&n);
    int i=1;
    struct student student[n+1];
    for(i=1;i<=n;i++)
    {
    	scanf("%s%s%s",&student[i].a,&student[i].b,&student[i].c);
    	student[i].v=0;
	}
	
	//printf("%s",student[1].a);
	for(i=1;i<=n;i++)
	{
		if(strcmp(student[i].c,"n/a")==0)
		{
			student[i].v=1;//缺考标记 
			t++; 
		}
	} 
	
	for(i=1;i<=n;i++)
	{                               
		if(student[i].v==0)
		{
			 student[i].d=strlen(student[i].c);
		}
	}
	
	//for(i=1;i<=n;i++)
	//{
	//	if(student[i].v==0)
	//	{
	//		printf("%d\n",student[i].d);
	//	}
	//}
	
	
	
	int max=1;
	int min=1; 
	for(i=1;i<=n;i++)
	{
		if(student[i].v!=1)     
		{
			if(student[max].d<student[i].d)
			{ 
			    
				max=i;
			}
			
			if(student[max].d==student[i].d&&strcmp(student[i].c,student[max].c)>0) 
			{
				max=i;
			}
			
			if(student[min].d>student[i].d)
			{
				min=i;  
			}
			
			if(student[min].d==student[i].d&&strcmp(student[i].c,student[min].c)<0) 
			{
				min=i;  
			}
			
		}
	}
	
	
	for(i=1;i<=n;i++)
	{
		if(student[i].v!=1)
		{
		  if(strcmp(student[max].c,student[i].c)==0&&strcmp(student[i].a,student[max].a)<0)
		  {
		  	max=i;
		  }
		  
		   if(strcmp(student[min].c,student[i].c)==0&&strcmp(student[i].a,student[min].a)>0)
		  {
		  	min=i;
		  }
		  	
		   
		}
	}
	
	if(t==n-1)
	{
		for(i=1;i<=n;i++)
		{
			if(student[i].v==0)
			{
				max=i;
				min=i;
			}
		}
	}
	
	
	printf("%s %s\n",student[max].a,student[max].b);
	printf("%s %s\n",student[min].a,student[min].b);
	
	
	
	
	return 0;
}
