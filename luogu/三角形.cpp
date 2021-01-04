#include<stdio.h>
int main(void)
{   
    int a[3]={0};
    int i=0;
    for(i=0;i<3;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	int max=0;
	int v=0;//有v条最长边 
	int j=0;
	for(i=0;i<3;i++)
	{
		 for(j=i+1;j<3;j++)
		 {
		 	if(a[j]>a[i])
		 	{
		 		int t=0;
		 		t=a[i];
		 		a[i]=a[j];
		 		a[j]=t; //从大到小排序 
			}
		 }
	}
	
	//printf("%d%d%d",a[0],a[1],a[2]);
	
	if(a[0]>=a[1]+a[2])
	{
		printf("Not triangle\n");
		 return 0;
	}
	
	if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2])
	{
		printf("Right triangle\n");
	}
    
    if(a[0]*a[0]>a[1]*a[1]+a[2]*a[2])
    {
    	printf("Acute triangle\n");
	}
	
	 if(a[0]*a[0]<a[1]*a[1]+a[2]*a[2])
    {
    	printf("Obtuse triangle\n");
	}
    
    if(a[0]==a[1]||a[1]==a[2])
    {
    	printf("Isosceles triangle\n");
	}
	
	if(a[0]==a[1]&&a[0]==a[2]&&a[1]==a[2])
	{
	 
	printf("Equilateral triangle")	;
	} 
    
    
	return 0;
}
