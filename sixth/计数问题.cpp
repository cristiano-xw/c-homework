#include<stdio.h>
int main(void)
{
   int n=0;int i=0;int e=0;
   scanf("%d%d",&n,&i);
   int r=0;int t=0;     //������t�� 
   for(r=1;r<=n;r++)
   {
   	 e=r;//��r��ֵ�洢��e�з�ֹ�ı�
	 while(e>0)
	 {  
	 	if(e%10==i)
	 	{
	 	t=t+1;	
		}
		e=e/10;
	 } 
   }	 
   printf("%d",t);
}
