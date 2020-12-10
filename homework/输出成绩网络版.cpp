//printf("%s %d\n",name[i],score[i]);
//这里写反了


		//	if(score[j]>score[i] || (score[j] == score[i] && strcmp(name[j], name[i]) < 0))
	//这里加上
	
	
//完整程序

// Q990697.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,j,temp;
	int score[256];
	char name[256][256];
	char name2[256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&name[i],&score[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{

			if(score[j]>score[i] || (score[j] == score[i] && strcmp(name[j], name[i]) > 0))
			{
				temp=score[i];
				score[i]=score[j];
				score[j]=temp;
				strcpy(name2,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],name2);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s %d\n",name[i],score[i]);
	}
	return 0;
}
 
