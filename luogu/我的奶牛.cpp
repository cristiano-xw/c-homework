#include<stdio.h>
#include<string.h>
int m[12][12]={0};
int f[2];int c[2];
int d[2]={0,0};

void move(int y,int x,int mi,int h) 
{
	if(mi==0)
	{
		if(m[y-1][x]=='*')  
		{
			if(h==0)
			{
			  d[0]=1;	
			}
			if(h==1)
			{
			  d[1]=1;
			}
		}
		
		else
		{
			if(h==0)
			{
				f[0]--;
			}
			if(h==1)
			{
				c[0]--;
			}
		}
	}
	
	if(mi==1)
	{
		if(m[y][x+1]=='*')
		{
			if(h==0)
			{
			  d[0]=2;	
			}
			if(h==1)
			{
			  d[1]=2;
			}
		}
		
		else
		{
			if(h==0)
			{
				f[1]++;
			}
			if(h==1)
			{
				c[1]++;
			}
		}
	}
	
	if(mi==2)
	{
		if(m[y][x+1]=='*')
		{
			if(h==0)
			{
			  d[0]=3;	
			}
			if(h==1)
			{
			  d[1]=3;
			}
		}
		
		else
		{
			if(h==0) 
			{
				f[0]++;
			}
			if(h==1)
			{
				c[0]++;
			}
		}
	}
	
	if(mi==3)
	{
		if(m[y][x-1]=='*')
		{
			if(h==0)
			{
			  d[0]=0;	
			}
			if(h==1)
			{
			  d[1]=0;
			}
		}
		
		else
		{
			if(h==0)  
			{
				f[1]--;
			}
			if(h==1)
			{
				c[1]--;
			}
		}
	}
	
	
	
}

int pd(){  

	if (f[1]==c[1]&&f[0]==c[0]) return 0;
	else return 1;
}

int main(void)
{  
    int min=0;
    long long int td=0;
	int z[166666]; 
    int i=0; int j=0;
    for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			scanf("%c",&m[i][j]);
			if(m[i][j]=='F') 
			{
				f[0]=i;f[1]=j;//先是纵坐标，再是横坐标 
			}
			if(m[i][j]=='C')
			{
				c[0]=i;c[1]=j;
			}
		}
		getchar();
	}
	
	//printf("%d %d",f[0],f[1]);
	for(j=0;j<=11;j++)
	{
		m[0][j]='*';
		m[11][j]='*';
	}
	
	for(i=0;i<=11;i++)
	{
		m[i][0]='*';
		m[i][11]='*';
	}
	
	while (pd()==1) 
	{ 
		td=f[0]+f[1]*10+c[0]*100+c[1]*1000+d[0]*10000+d[1]*40000;
	    printf("%d ",td);
		if (z[td]==1)
		{ 
			printf("0");
			return 0;
		}
		z[td]=1;//标记
		
		move(f[0],f[1],d[0],0);
		move(c[0],c[1],d[1],1);//依次移动农夫和奶牛
		min++;
	}
	
	printf("%d\n",min);
	
	
	return 0;
}
