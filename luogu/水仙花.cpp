#include<stdio.h>
#include<math.h>
int main(void)
{   
    int n=0;
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
    	int a=0;
    	int b=0;
    	scanf("%d%d",&a,&b);
    	 
    	int k=0;
    	int v=0;
    	for(k=a;k<=b;k++)
    	{   
    	    
    		int j=0;
    		int s[3]={0};
    		for(j=0;j<3;j++)
    		{
    			s[j]=(k/(int)pow(10,j))%10;
			}
			
		if(k==s[0]*s[0]*s[0]+s[1]*s[1]*s[1]+s[2]*s[2]*s[2])
		{
			printf("%d ",k);
			v=1;
		}
		
		}
		if(v==0)
		{
			printf("-1");
		}
		printf("\n");
	}
	
	
	return 0;
}
