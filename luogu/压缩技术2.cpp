#include<stdio.h>
int main()
{
	int a,n,t=0,i=0,b=0,s=0;//t判断有没有回车，i判断输出什么，s判断有没有输完
    scanf("%d",&n);
	while(s<n*n) 
	{
		scanf("%d",&a);
		i++;
		for(b=a;b>=1;b--)
		{
		if(t==n)
		{
		 printf("\n");
		 t=0;
		} 
		if(i%2==1)
		{
			printf("0");
		}
        else 
        printf("1");
		t++;
		s++; 
		}
	}
	
	return 0;
}
