#include<stdio.h>
int f(int n,int a,int k)
{
	if(n==2)
	{
		return a+k; //递归边界 
	}         
	
	if(n>2)
	{
		return(f(n-1,a,k)+k);
	}
}
int main(void)
{   
   //输入三个正整数n、a和k（0<n,a,k<=100,n>=2），
    int n=0;int a=0;int k=0;
    scanf("%d%d%d",&n,&a,&k);
    if(n>=2&&a>0&&k<=100&&k>0&&a<=100&&n<=100)
    {   
        int m=0;
    	m=f(n,a,k);
    	printf("%d",m);
    	return 0;
	}
	
	printf("Wrong Number");
	
	return 0;
}
