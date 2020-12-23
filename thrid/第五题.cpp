#include<stdio.h>
#include<string.h>
#include<math.h>
int huiwen(int x)
{   
    int y=0;
	int s=0;
	s=x;
	while(s>0)
	{
		y=y*10+s%10;
		s=s/10;
	}
	if(y==x)
	{
		 return 1;
	}
	else
	{  
		 return 0;
    }
} //判断是否位回文数 

int main(void)
{
	char a[1000]="0";
	while(scanf("%s",a) != EOF) //一行一行的判断多次判断 
	{
	     printf("%s",a);
		 
		  //实现多行输入 
	  int i=0;
	  int r=0;
	  int v=0;
	  char d[100];
	  
	  for(i=0;i<1000;i++)
	  {  
	     int r=0;
	     
	  	while(a[i]>'0'&&a[i]<'9') //判断如果是数字 
	  	{      
	  			d[r]=a[i];
	  			v++;
	  			i++;
	  		//	printf("%d\n",v);
	  			r++;
		}
		
		int u=0;
		sscanf(d,"%d",&u); //u存储了数 但是会读入空格 
		//printf("%d",u); 
		if(huiwen(u)>0)
		{
			printf("yes");
		}
		
		
			
	    while(a[i]<'0'||a[i]>'9')
	    {
	    	i=i+1;
	    	r=0;
	    	v=0;
		}
	 
	}
	    
	  
	
	
}







