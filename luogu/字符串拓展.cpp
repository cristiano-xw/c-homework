#include<stdio.h>
#include<string.h>
int main(void)
{
	int p1=0;int p2=0;int p3=0;
	scanf("%d%d%d",&p1,&p2,&p3);
	char s[800]="0";
	scanf("%s",s);
	int i=0;
	int j=0;
	char h;       
	
	while(s[i]) //当s【i】没有结束的时候
	{
		char p,q,g;
		if(s[i]=='-'&&s[i+1]>s[i-1]&&(s[i+1]<='z'&&s[i-1]>='a'||s[i+1]<='9'&&s[i-1]>='0'))  
		{
				p=s[i-1];q=s[i+1];g=s[i]; //便于书写
				for(p3==1?j=p+1:j=q-1; p3==1?j<q:j>p; p3==1?j++:j--)
				{
				h=j;	    
				if(p1==2)
				{
				h=(h>='a')? h-32:h;  
				}
				
				if(p1==3)
				{
				h='*';
				}
				
				int x=0;
				for(x=0;x<p2;x++)
				{
					printf("%c",h); 
				}
				
			    }
			    
			    //if(p+1==q)
			    //{
			    //	i++;
				//}
				
			
		}
		
		else
		{
			printf("%c",s[i]);
		}
		i++;
	} 
	
	return 0;
	
}
