#include<stdio.h>
int main(void)
{
 int s[7]={0};
 int a[2]={0};
 
 int i=0;
 for(i=0;i<7;i++)
 {
 	a[0]=0;a[1]=2;
 	scanf("%d %d",&a[0],&a[1]);
 	s[i]=a[0]+a[1];
 }	
 
 int v=0;
 for(i=0;i<7;i++)
 {
 	if(s[i]>8)
 	{
 		v=1;
	}
 }
 
 if(v==0)
 {
 	printf("0");
 }
 int max=0;
 if(v==1)
 {
 	 
 	for(i=0;i<7;i++)
 	{
 		if(s[i]>s[max])
 		{
 			max=i;
		}
	}
 }
 
 max=max+1;
 printf("%d",max);
} 
