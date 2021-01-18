#include<stdio.h>
#include<string.h>
int main(void)
{   
    int n=0;
    scanf("%d",&n);
    char a[22][1111];
    memset(a,0,sizeof(a));
    int i=0; int j=0;
    getchar();
    for(i=1;i<=n;i++)
    {
    	for(j=0;j<1111;j++)
    	{
    		scanf("%c",&a[i][j]);
    		if(a[i][j]=='\n')
    		{
    			break;
			}
		}
	}
	
	int l[22]={0};
	for(i=1;i<=n;i++)
	{
		l[i]=strlen(a[i]);
	}
	
	int v=0;//看做高票有几位先生
	int max=0;
	for(i=1;i<=n;i++)
	{
		if(l[i]>l[max])
		{
			max=i;
		}
	}
	
	for(i=1;i<=n;i++)
	{
		if(l[i]==l[max])
		{
			v++;
		}
	}
	
	if(v==1)
	{
		printf("%d\n",max);
		printf("%s",a[max]);
		return 0;
	}
	
	char b[22][111];
	
	//printf("%d ",v);
	if(v!=1)
	{
		for(i=1;i<=n;i++)
		{
			if(l[i]==l[max])
			{
				strncpy(b[i],a[i],9);       
				//printf("ok ");
			}
		}
	}
	
	//printf("\n");
	//for(i=1;i<=n;i++)
	//{
	//	printf("%s",b[i]);
	//}
	
	
	int c[22]={0};
	memset(c,0,sizeof(c));
	       
	for(i=1;i<=n;i++)
	{
		sscanf(b[i],"%d",&c[i]);
	}
	
	//for(i=1;i<=n;i++)
//	{
	//	printf("%d ",c[i]);
	//}
	
	int m=0;
	for(i=1;i<=n;i++)
	{
		if(c[i]>c[m])
		{
			m=i;
		}
	}
	
	printf("%d\n",m);
	printf("%s",a[m]);
	return 0;
}
