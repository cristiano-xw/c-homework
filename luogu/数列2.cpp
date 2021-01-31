#include<stdio.h> 
int a[100010]; 
int main()
{
    int n,m;
	int i;
	int max=0;
	int cnt=0;  
    
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]+cnt>m) 
        {
            cnt=0;
            max++;
        }                                        
        cnt=cnt+a[i];
    }
    
    if(cnt!=0) 
    {
        max++;       
    }
    
    printf("%d",max);
    return 0;
}
