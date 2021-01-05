#include<stdio.h>
struct student
{   
	int yuwen;
	int shuxue;
	int yinyu;
};


int main(void)
{   
   int n=0;
   int a[333]={0};
   int b[333]={0};
   scanf("%d",&n);
   struct student student[333];
   int i=0;
   for(i=1;i<=n;i++)
   {
   	scanf("%d%d%d",&student[i].yuwen,&student[i].shuxue,&student[i].yinyu);
   	a[i]=student[i].yuwen+student[i].shuxue+student[i].yinyu;
   	b[i]=i;
   }
   
   int j=0;
   for(i=1;i<=n;i++)
   {
   	for(j=i+1;j<=n;j++)
   	{
   	if(a[j]>a[i])
	{
	 int t=0;
	 t=a[i];
	 a[i]=a[j];
	 a[j]=t;  	
	 int k=0;
	 k=b[i];
	 b[i]=b[j];
	 b[j]=k;
	}	
	}
   }
   
   for(i=1;i<=5;i++)
   {
   	for(j=i+1;j<=5;j++)
   	{
   	if(a[i]==a[j]&&student[i].yuwen<student[j].yuwen)
   	{
   	 int t=0;
	 t=a[i];
	 a[i]=a[j];
	 a[j]=t;  	
	 int k=0;
	 k=b[i];
	 b[i]=b[j];
	 b[j]=k;
	}
		
	}
   }
   
   for(i=1;i<=5;i++)
   {
   	for(j=i+1;j<=5;j++)
   	{
   	if(a[i]==a[j]&&student[i].yuwen==student[j].yuwen&&b[i]>b[j])
   	{
   	 int t=0;
	 t=a[i];
	 a[i]=a[j];
	 a[j]=t;  	
	 int k=0;
	 k=b[i];
	 b[i]=b[j];
	 b[j]=k;
	}
		
	}
   }
   
   
   for(i=1;i<=5;i++)
   {
   	printf("%d %d",b[i],a[i]);
   	printf("\n");
   }
   
   
    
	return 0;
}
