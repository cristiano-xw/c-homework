//第一行为矩阵的阶数N,以及K次方。
//接下来N行，每行有N个数，分别用空格分开。代表矩阵A
//其中1<=N,K<=7,且矩阵A种每个元素 a满足: 1<=a<=7。
#include<stdio.h>
int main(void)
{
	int n=0; int k=0;
	scanf("%d%d",&n,&k);
	long int a[10][10]={0}; //存储数据
	long int c[10][10]={0};
	long int b[10][10]={0};
	int i=0; int j=0;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%ld",&a[i][j]);
		}
	}   //存入矩阵
	
	/*for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		printf("%d",a[i][j]);
		}
		printf("\n");
	}   //存入矩阵*/
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		  c[i][j]=a[i][j];   
		}
	}   //改变矩阵c即可 
	
	/*for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		printf("%d",c[i][j]);
		}
		printf("\n");
	}   //存入矩阵*/
	
	
	
	
	int t=0;
	for(t=0;t<k-1;t++)
	{
     
    int i=0,j=0,e=0;
     for( i=1;i<=n;i++){
		for( j=1;j<=n;j++){
			for( e=1;e<=n;e++){  
				b[i][j]+=c[i][e]*a[e][j];      
			}
		}
	}
	
	//矩阵乘法的感想，他在该位置的值为a【i】【j】 就是第i行从左往右的数乘以第j列从上往下的数 
	//所以两个矩阵可以相乘的条件是 第一个矩阵的行等于第二个矩阵的列 
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			c[i][j]=b[i][j];
		}
	}
	
	if(t<k-2)
	{
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			b[i][j]=0;
		}
	}
   }
	
	
	
   }
  
  
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		printf("%ld ",b[i][j]); 
		}
		printf("\n");
	}
	
	 return 0;
	
	
	
}
