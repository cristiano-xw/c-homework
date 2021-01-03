#include<stdio.h>
#include<string.h>
int main(void)
{   
    int n=0;
    scanf("%d",&n);
    int x=0; int y=0;
    scanf("%d%d",&x,&y);
    int a[222]={0};
    int b[222]={0};
    
    int i=0;
    for(i=1;i<=x;i++)
    {
    	scanf("%d",&a[i]); 
	}
	
	for(i=1;i<=y;i++)
	{
		scanf("%d",&b[i]);
	}
	
	int p=0;int q=0;
	int s1=0;int s2=0;
	for(i=1;i<=n;i++)
	{
	  p=a[i%x];
	  q=b[i%y]; 
	  if(i%x==0)
	  {
	  	p=a[x];
	  }
	  if(i%y==0)
	  {
	  	q=b[y];
	  }
	  
	  switch(p)
	  {
	  	case 0:switch(q)
            {
                case 1:s2++;break;
                case 2:s1++;break;
                case 3:s1++;break;
                case 4:s2++;break;
            };break;
            
        case 1:switch(q)
            {
                case 0:s1++;break;
                case 2:s2++;break;
                case 3:s1++;break;
                case 4:s2++;break;
            };break;
            
        case 2:switch(q)
            {
                case 0:s2++;break;
                case 1:s1++;break;
                case 3:s2++;break;
                case 4:s1++;break;
            };break;
            
        case 3:switch(q)
            {
                case 0:s2++;break;
                case 1:s2++;break;
                case 2:s1++;break;
                case 4:s1++;break;
            };break;
        
         case 4:switch(q)
            {
                case 0:s1++;break;
                case 1:s1++;break;
                case 2:s2++;break;
                case 3:s2++;break;
            };break;
            
	  		
	  }
	  
	}
	printf("%d %d",s1,s2);
    
    
    
    
	return 0;
}
