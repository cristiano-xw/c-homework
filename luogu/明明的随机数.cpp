#include<stdio.h>
int main(void)
{   

    int n=0;
    scanf("%d",&n);
    int a[1111]={0};
    int i=0;
    for(i=0;i<n;i++)
    {   
        int j=0;
    	scanf("%d",&j);
    	a[j]=1;//做上标记 
	}
	
	int v=0;
	for(i=0;i<1111;i++)
	{ 
		if(a[i]==1)
		{   
			v++; 
		}
	}
	printf("%d\n",v);
	
	for(i=0;i<1111;i++)
	{ 
		if(a[i]==1)
		{   
			printf("%d ",i) ;
		}
	}
	
	return 0;
}
