#include<stdio.h>
int main(void)
{
	char a[1111]={0};
	float sum=0;
	int n=0;
	scanf("%d",&n);
    getchar();
	
     int i=-1;
      do{   
		i++;
		a[i]=getchar();
	  }while(a[i]!='\n'); //实现文本的存入 从第0开始 一共有n+1个数  

	
	int v=0;//看数字个数 
	int b[1111]={0};
	for(i=0;i<1000;i++)
	{
		if(a[i]>='0'&&a[i]<='9')   
		{
			v++;
			a[i]=a[i]-'0';
			b[i]=1;
		}
	}
	
	for(i=0;i<1000;i++)
	{
		if(b[i]==1)
		{
			sum=sum+a[i];
		}
	}
	
	if(v==0)
	{
		printf("n/a");
	}
	
	if(v!=0)
	{
	float x=0;
	x=(float)sum/v;
	printf("%.2f",x);
    }
	return 0;

}
