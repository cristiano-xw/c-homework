
#include<stdio.h>
#include<math.h>
#include<string.h>
char m[12][12];//做出地图 
int f[2]={0,0}; int c[2]={0,0};//分别装xy的值 
int d[2]={0,0};//装方向值 
int chu[166666];//判断是否有专属值出现 
int td=0;  
int min=0;//装入时间                
//m地图因该是先纵坐标再横坐标 
//z=0,1,2,3;分别表示向北向东向南向西 
void move(int y,int x,int z, int p)//p=0时移动农民，p=1时移动奶牛 
{ //分别发送农夫和奶牛的坐标 
  if(z==0)//向北走 
  {   
  	if(m[y-1][x]=='*')  
  	{
  		if(p==0)
  		{
  			d[0]=1;
		}
		if(p==1)   
		{
			d[1]=1;
		}
	}
	
	else
	{
		if(p==0)
		{
			f[0]--;
		}
		
		if(p==1)
		{
			c[0]--;
		}
	}
  }
  
   if(z==1)//向东走 
  {                          
  	if(m[y][x+1]=='*') 
  	{
  		if(p==0)
  		{
  			d[0]=2;
		}
		if(p==1)
		{
			d[1]=2;
		}
	}
	
	else
	{ 
		if(p==0)
		{
			f[1]++;
		}
		
		if(p==1)
		{
			c[1]++;
		}
	}
  }
  
  
   if(z==2)//向南走 
  {
  	if(m[y+1][x]=='*') 
  	{
  		if(p==0)         
  		{
  			d[0]=3;
		}
		if(p==1)
		{
			d[1]=3;
		}
	}
	
	else
	{
		if(p==0)
		{
			f[0]++;
		}
		
		if(p==1)
		{
			c[0]++;
		}
	}
  }
  
  if(z==3)//向西走 
  {
  	if(m[y][x-1]=='*') 
  	{
  		if(p==0)         
  		{
  			d[0]=0;
		}
		if(p==1)
		{
			d[1]=0;
		}
	}
	
	else
	{
		if(p==0)
		{
			f[1]--;
		}
		
		if(p==1)
		{
			c[1]--;
		}
	}
  }

}



int pd(void)
{
	if(f[1]==c[1]&&f[0]==c[0])
	{
		return 0;// 横纵坐标相等 结束判断 
	}
	
	return 1;//继续判断 
}


int main(void)
{
   int i=0;int j=0;
   for(i=1;i<=10;i++)
   {
      for(j=1;j<=10;j++)	
      {
      	scanf("%c",&m[i][j]); //读入地图 
      	
      	if(m[i][j]=='F')
      	{
      		f[0]=i; f[1]=j; //读入初始的坐标 先纵 
	    }
	    
	    if(m[i][j]=='C')
	    {
	    	c[0]=i;c[1]=j; //j横坐标 i为纵坐标 
		}
	  }
	  getchar();
   } 
   
   //printf("%d %d\n",f[0],f[1]);
   //printf("%d %d\n",c[0],c[1]);
   
   for(j=0;j<=11;j++) //将边界作为* 
   {
   	m[0][j]='*';
   	m[11][j]='*';   
   }
	
   for(i=0;i<=11;i++)
   {
   	m[i][0]='*';
   	m[i][11]='*';
   }
   
   /*for(i=0;i<=11;i++)
   {
   	for(j=0;j<=11;j++)
   	{
   		printf("%c",m[i][j]);
	}
	printf("\n");
   }*/
   
   while(pd())
   {
   	    td=f[0]+f[1]*10+c[0]*100+c[1]*1000+d[0]*10000+d[1]*40000;//生成专属值 
		//printf("%d\n",td);
		//printf("%d\n",d[0]);
		if (chu[td]==1)//如果出现过 
		{   //死循环了就输出0并结束程序
	    	printf("0k");
			return 0;
		}
		
		//printf("1k");
		chu[td]=1;//做上出现过的标记 
		move(f[0],f[1],d[0],0);
		move(c[0],c[1],d[1],1);
		min++;
		//printf("%d\n",min);
   }
   
   printf("%d\n",min);
   return 0;
   
   //用数组表示的时候，一定要注意第一个是纵坐标 
}
