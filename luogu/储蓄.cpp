#include<stdio.h>
int main(void)
{  
   int a[20]={0};
   int i=0;
   for(i=1;i<=12;i++)
   {
   	scanf("%d",&a[i]);
   }
   
   //for(i=1;i<=12;i++)
   //{
   //	printf("%d\n",a[i]);
  // }
   
   int sum=0;//表示津津手上剩下的money
   int add=0;//存的钱
   
   for(i=1;i<=12;i++)
   {
   sum=sum+300;
   sum=sum-a[i];
   if(sum>=0)
   {
   	if(sum>=100)
   	{
   	int j=0;
	j=sum/100;
	add=add+100*j;
	sum=sum%100;	
	}
 
   }
   
   if(sum<0)
	{
		printf("-");
		printf("%d",i);
		return 0;
	}
    }
   
   
   sum=sum+add*1.2;
   printf("%d",sum);
   
   	
   
    
   
   return 0;	
} 
