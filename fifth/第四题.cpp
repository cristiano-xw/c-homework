#include<stdio.h>
#include<string.h>
int main(void)
{

  char a[1111]="0";
  char b[100][100];//用来装单词有重复
  char c[100][100]; //用来装单词 没有重复
  int d[100]={0}; //用来装出现的次数 
  int p=0;
  
  int n=-1;
  do{
		n++;
		a[n]=getchar();
	  }while(a[n]!=EOF); //实现文本的存入 从第0开始 一共有n+1个数 


  //printf("%c",a[0]);
  int i=0;
  for(i=0;i<n+1;i++)
  {
  	if(a[i]>='A'&&a[i]<='Z')
  	{
  		a[i]=a[i]+'a'-'A'; //全部转换为小写字母 
	}
  } //ok
  
  
  
  for(i=0;i<n+1;i++)
  { 
    if(a[i]>='a'&&a[i]<='z')
     {
	
  	int v=0;
  	while(a[i]>='a'&&a[i]<='z')
  	{
  		v++; //一共有v个连续字母 
  		i++; 
	}
	
	strncpy(b[p],a+i-v,v);
	p++;  //把单词存起来  一共有p个单词 
     }
  } 
  //printf("%s",b[0]);
  
  int r=0;int u=0;int k=0; 
  
  for(i=0;i<p;i++)
  {
  	int v=0;
  	if(u==0)//第一次出现单词
	{   
	    strcpy(c[0],b[0]);
		d[0]=d[0]+1;
		u=u+1;
		v=1;
		//printf("%s",c[0]);
	} 
	
	if(u!=0&&v==0)
	{    
	    int g=0;//作为标记
		for(k=0;k<u;k++)
		{
			if(strcmp(b[i],c[k])==0)  
			{
				d[k]=d[k]+1;
				g=1;    
				//printf("ok\n");
			}
		}
		if(g==0)
		{
			strcpy(c[u],b[i]);
			d[u]++;
			u++;
			//printf("no\n");
		}
	}
	
  }
  //一共会有u组不同数
  
  //printf("%s",c[2]);
  int max=0;
  for(i=0;i<u;i++)
  {
  	if(d[i]>d[max])
  	{
  		max=i;
	}
  }    
  
  char h[100][100];
  int m=0; int ci=0;
  for(i=0;i<u;i++)
  {
  	if(d[i]==d[max])
  	{
  		strcpy(h[m],c[i]);
  		m++;  //将出现次数最多的单词存入 
  		ci++;  //一共有ci个 
	}
  }
  //printf("%d\n",d[0]);
  //printf("%d\n",d[1]);
  
  /*if(strcmp(h[0],h[1])>0)
  {
  printf("%s %d",h[0],d[max]);
   } 
   
   if(strcmp(h[0],h[1])<0)   
  {
  printf("%s %d",h[1],d[max]);
   } */ 
   
   int big=0;
   for(i=0;i<ci;i++)
   {
   	if(strcmp(h[i],h[big])>0)
   	{
   		big=i;
	}
   }
  printf("%s %d",h[big],d[max]);  
	
	
return 0;
	
	
  
   


}
