
#include<stdio.h>
#include<string.h>
int main(void)
{
	int r ,c,i;
	scanf("%d%d",&r,&c);
	char a[r+1][c+1]={0};
	for (i=0;i<r;i++)
	{
		scanf("%s",a[i]);   //初始化数组 二维数组的某一行就是一个一维数组 
	}
	
    
    a[0][0]=a[0][1];
    a[0][1]=a[0][2];
	for(i=0;i<r;i++)
	{
		printf("%s\n",a[i]);
	}
    
	
}
	
	
