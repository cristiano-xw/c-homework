#include<stdio.h>
#include<string.h>
int main(void)
{   
    int n=0;
    fflush(stdin);
    scanf("%d",&n);
    char a[111]="0";
    scanf("%s",a);//初始化字符串
	 
    int i=0;
    for(i=0;i<n;i++)  
    {
    	int k=0;
    	scanf("%d",&k);
    	if(k==1)
    	{
    		char b[111]="0";
    		scanf("%s",b);
    		strcat(a,b);
    		printf("%s\n",a);
    		//continue; 
		}
		
		if(k==2)
		{   
		    int g=0;
		    int h=0;
		    scanf("%d%d",&g,&h);
			char c[111]="0";
			strncpy(c,a+g,h);
			strcpy(a,c);
			printf("%s\n",a);
			//printf("%d\n",i);
			//continue;
		}
		
		if(k==3)
		{
			int j=0;
			scanf("%d",&j);//第j个字符前面插入 
			int l=0;
			l=strlen(a);
			char d[111]="0";
			scanf("%s",d);
			char b[111]="0";
			char c[111]="0";
			if(j!=0)
			{
			strncpy(b,a,j);
			strncpy(c,a+j,l-j);
			strcat(b,d);
			strcat(b,c);
			strcpy(a,b);
			printf("%s\n",a);
		    }  
		    
		    if(j==0)
		    {
		    	strcat(d,a);
		    	//printf("%s\n",d);
		    	strcpy(a,d);
		     	printf("%s\n",a);	
			}
			
			if(j==l-1)
			{
				strcat(a,d);
				printf("%s\n",a);
			}
			
			
		
		}
		
		if(k==4)
		{    
		    char f[111]="0";
			scanf("%s",f);
			int l1=0;
			int l2=0;
			l1=strlen(a);
			//printf("%s\n",a);
			l2=strlen(f);
			//printf("%s\n",f);
			//printf("%d\n",l2);
			int p=0;
			int q=0;
			int v=0;
			int y=0;
			
			while(p<l1&&q<l2)  
			{
				while(a[p]==f[q]&&p<l1&&q<l2)
				{
					v++;
					p++;
					q++;
				}
				//printf("%d\n",v); 
				if(v==l2)
				{
					printf("%d\n",p-v);
					y=1;
					break;
				}
				
				
				
				if(a[p]!=f[q])
				{
					
					q=0;
					p=p-v+1;
					v=0;
				}
				
				
			}
			
			if(y==0)
			{
				printf("-1\n");
			} 
			//continue;
		}
    	
    	//printf("%d\n",i);
    	
    	
    	
	}
	return 0;
}
