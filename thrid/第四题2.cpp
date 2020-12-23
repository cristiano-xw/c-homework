#include<stdio.h>
#include<string.h>
#include<math.h>
//总思路从上往下输出即可，满足输出字符，不满足输出空格。 
struct num
{
	char a[100];//存入字母 
	int b[100];//存入数字 
};

int main(void)
{
	struct num s[100];
	int m=0;
	scanf("%d",&m);//一共有m个数
	char d[5]="+";//如果没有字母就用+代替
	int n=0;
	
	for(n=0;n<m;n++)  
	{
	 char c[100]="0";//存入所有数据 
	 scanf("%s",c);
	 sscanf(c,"%d",s[n].b); 
	 sscanf(c,"%*d%s",s[n].a);     
	
	if(s[n].a[0]=='\0')
	{
		sscanf(d,"%s",s[n].a);//将+存入替代字母 
	} 
	} 
	
	int max=0,min=0;
	for(n=0;n<m;n++)
	{
		if(s[n].b[0]>max)
		{
			max=s[n].b[0];
		}
		if(s[n].b[0]<min)
		{
			min=s[n].b[0];
		}
	}
	
    int i=0;
    for(i=max;i>=min;i--) //从最大数到最小 
    {
    	
    	  
    	    if(i>0)
			{
			for(n=0;n<m;n++)
			{
    		if(s[n].b[0]<i) 
    		{
    			printf("  ");
			}
			
			if(s[n].b[0]>=i)
			{
				printf("%s ",s[n].a); //如果比i大则 在对应位输出字符 
			}
			if(n==m-1)
			{
				printf("\n");
			}
		    }}
		    
		    if(i==0)
		    {
		      int j=0;
		      for(j=0;j<2*m-1;j++)
		      {
		      	printf("-");
			  }
			  if(j==2*m-1)
			  {
			  	printf("\n");
			  }
			}
			
			if(i<0)
			{ 
			 
			int p=0;
			for(p=0;p<m;p++) 
			{
			  if(abs(s[p].b[0])<abs(i)||s[p].b[0]>0)
			  {
			  	printf("  ");
			  }
			  
			  if(abs(s[p].b[0])>=abs(i)&&s[p].b[0]<0)
			  { 
			  	printf("%s ",s[p].a);
			  }
			if(p==m-1)
			{
				printf("\n");
			}
			}	
			}
	}
}
