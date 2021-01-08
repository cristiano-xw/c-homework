#include<stdio.h>
#include<string.h>
int main(void)
{   
    int n=0;
    scanf("%d",&n);
    int k=0;
    for(k=0;k<n;k++)
    {
      char a[5555]="0";
      char b[5555]="0";
      int c[5555]={0};
      int d[5555]={0};
      int s[5555]={0};//存储结果 
      scanf("%s",a);
      scanf("%s",b);
      
      int l1=0;
      int l2=0;
      l1=strlen(a);
      l2=strlen(b);
      int i=0;int j=0;
      
      for(i=0;i<l1;i++)
      {
      	c[l1-1-i]=a[i]-'0';
	  }
      for(i=0;i<l2;i++)
      {
      	d[l2-1-i]=b[i]-'0';
	  }
	  
	  for(i=0;i<l1;i++)
	  {
	  	for(j=0;j<l2;j++)
	  	{
	  		s[i+j]+=c[i]*d[j];
		}
	  }
	  
	  int m=l1+l2;//最多有l1加l2位
	  for(i=0;i<m;i++)
	  {
	  if(s[i]>=10)
	  {
	     s[i+1]+=s[i]/10;
		 s[i]=s[i]%10;	
	  }	
	  } 
	  
	  int v=0;//看最后剩余多少个0 
	  for(i=m-1;i>0;i--)
	  {
	  	if(s[i]==0)
	  	{
	  		v++;
		}
		if(s[i]!=0)
		{
			break;
		}
	  }
	  
	  for(i=m-1-v;i>=0;i--)
	  {
	  	printf("%d",s[i]);
	  }
      
      printf("\n");
	}
	return 0;
}
