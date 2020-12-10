#include<stdio.h>
#include<string.h>
int main(void)
{
	//printf("how many times do ypu want to try")
	int n;
	int i=0;
	scanf("%d",&n);
	char str[100]="scu";
	char str1[100];
	scanf("%s",str1);
	int len;
	len = strlen(str1);
	
	if (n<10&&len<=100)
	{
		printf("YES");
		while(i<n)
		{
		len = strlen(str1);
		if (len<=100)
		{
			if (len==3)
			{
				if (strcmp(str1,str)==0)
				{
					printf("YES");
				}
				else 
				{
					printf("NO");
				}
			}
			if (len!=3)
			{   int j,k;
				int a=0;
				for (a=0;a<len;a++)
				if (str1[a]=='S'&&str1[a+1]=='C'&&str1[a+2]=='U')
				break;
				for(j=a;str1[j-1]=='A';j--);
                for(k=a+3;str1[k]=='A';k++);
                {if(j==0&&k==i)
                printf("yes!\n");
				else 
				printf("no!\n");}
  			}
			}
	i++;}
	}//if n<10 µÄ 
	
	
	
	
	
	else 
	{
		printf("NO");
		
	}
}
