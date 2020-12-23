#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
    int m=0;
    scanf("%d",&m);
    int a[100];
    int i=0;
    for(i=0;i<m;i++)
    {
    	scanf("%d",&a[i]);
	}
	int min=0;
	for(i=0;i<m;i++)
	{
		if(a[i]<a[min])
		{
		   min=i;
		}
	}
	printf("%d",a[min]);
	return 0;
}
