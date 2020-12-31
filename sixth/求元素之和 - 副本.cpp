//给定一个集合s（集合元素数量<=30），求出此集合所有子集元素之和。
//应该选用long long 
//一个集合一共有2的（n-1）次方个非空集合 每一个元素只会出现2的n-1次方次
#include<stdio.h>
#include<math.h>
int main(void) 
{
	int a[30]={0};
	int i=0;
    while(scanf("%d",&a[i])!=EOF) //不定长度的数组，字符串输完以后都会出现EOF标记 
    {
    	i++;
	}
	
	long long sum=0;
	int j=0;
	for(j=0;j<i;j++)
	{
		sum=sum+pow(2,i-1)*a[j];
	}
	
	printf("%lld",sum);
	return 0;
	
}
