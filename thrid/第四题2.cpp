#include<stdio.h>
#include<string.h>
#include<math.h>
//��˼·��������������ɣ���������ַ�������������ո� 
struct num
{
	char a[100];//������ĸ 
	int b[100];//�������� 
};

int main(void)
{
	struct num s[100];
	int m=0;
	scanf("%d",&m);//һ����m����
	char d[5]="+";//���û����ĸ����+����
	int n=0;
	
	for(n=0;n<m;n++)  
	{
	 char c[100]="0";//������������ 
	 scanf("%s",c);
	 sscanf(c,"%d",s[n].b); 
	 sscanf(c,"%*d%s",s[n].a);     
	
	if(s[n].a[0]=='\0')
	{
		sscanf(d,"%s",s[n].a);//��+���������ĸ 
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
    for(i=max;i>=min;i--) //�����������С 
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
				printf("%s ",s[n].a); //�����i���� �ڶ�Ӧλ����ַ� 
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
