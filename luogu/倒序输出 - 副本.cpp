#include<stdio.h>
#include<string.h>
int main(void)
{   int l=0;
	char a[100];
	char b[100];
	int i=0;
	
   	for(i=0;i<100;i++)
   	{
   		scanf("%d",&a[i]);
   		if(a[i]==0)//零未被算入 
   		{
   			break;
		}
	}
	
	 l=strlen(a);  //如果是用int型一个数一个数输入化，strlen不会读取空格 
	 //printf("%d\n",l);
	
    l=strlen(a);
    for(i=0;i<l;i++)
    {
    	b[i]=a[l-1-i];
	}
    for(i=0;i<l;i++)
    printf("%d ",b[i]);
}
