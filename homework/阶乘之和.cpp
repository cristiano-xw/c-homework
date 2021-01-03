//第一次做的时候直接相加，没有考虑到爆表的问题
//用两个int型数组存储即可；
#include<stdio.h>
#include<string.h> 
int main(void)
{  
  int n=0;
  scanf("%d",&n);
  int a[1111]={0};int b[1111]={0};
  int i=0;
  memset(b,0,sizeof(b));
  
  for(i=1;i<=n;i++)
  {   
    int j=0;
    a[i]=1;
	for(j=1;j<=i;j++)           
	{
	a[i]=a[i]*j;	
	}	
  } 
  
  for(i=1;i<=n;i++)
  {
  	printf("%d\n",a[i]);
  }
  
  int k=1;
  
  for(i=1;i<1000;i++)
  {
  	k=1;
  	b[k]+=a[i];
  	while(b[k]>=10) 
  	{
  	b[k+1]+=b[k]/10;
	b[k]=b[k]%10;
	k++;	
	}
  }  
  
  
  
  int v=0;
  for(i=999;i>0;i--)
  {
  	if(b[i]==0)
  	{
  	v++;	
	}
	
	if(b[i]!=0)
	{
		break;
	}
  }

   for(i=999-v;i>=1;i--)
   {
   	printf("%d",b[i]);
   }



	return 0;
} 
