//对于一个数，从左到右是高位到低位，对于一个数组，从左到右是低位到高位。为了便于相乘，我们将乘数倒过来，让他的最低位
//和数组的最低位吻合。然后从低位往高位相乘，先让乘积位数为两个乘积数的位数之和。若未有填满，则通过判断数组高位零的
//个数来判断多了几位，最后倒过来输出。 
#include<stdio.h>
#include<math.h>
#include<string.h>
#define M 10005
int main(void)
{
	int f=0;
	scanf("%d",&f);
	int e=0;
	for (e=0;e<f;e++)
	{   int i,j,n,m,k; 
		char s1[M],s2[M],s[M];
		int a[M],b[M],c[M];
		scanf("%s%s",s1,s2);
		memset(c,0,sizeof(c)); //初始化c
		n=strlen(s1);
		m=strlen(s2);
		k=m+n; //结果长度不会长于两乘积数长度相加
		
		for(i=0;i<n;i++)
		a[i]=s1[n-i-1]-48; //将char型变量转换为对应int型变量 的值，要减去48 
		for(j=0;j<m;j++)
		b[j]=s2[m-j-1]-48; 
		
		for(i=0;i<n;i++)
		 for(j=0;j<m;j++)
		   c[i+j]+=a[i]*b[j]; //遵循乘法规律，逐位相乘。
		   
		for(i=0;i<k;i++)
		{
			if (c[i]>10)
			{
				c[i+1]+=c[i]/10;//因为是int型，所以会忽略小数。
				c[i]%=10; 
			}
		}
		
		i=k;
		while(c[i]==0)//去除高位多余的零，确定准确位数 
		i--; 
		
		if(i<0) printf("0");
		
        else
        {
            for(; i>=0; i--)
                printf("%d",c[i]);
        }
        printf("\n");
		
	}
	return 0;
}
