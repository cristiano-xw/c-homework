#include<stdio.h>
#include<string.h>
char huiwen(char s[1000]) //判断是否为回文数 
{
 int l=0;
 l=strlen(s);
 //printf("%d",l);
 
 int i=0;
 int r=0;//r作为标记 
 if(s[0]!='0')
 {
 	
 if(l==2)
 {
 	if(s[0]==s[1])
 	{
 		return 1;
	 }
	 
	else
	{
		return 0;
	}
 }

if(l==3)
{
	if(s[0]==s[2])
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


 if(l%2==0&&l!=2)
 {
 for(i=0;i<l/2-1;i++)
 {
 	if(s[i]!=s[l-i-1])
 	{
 		
 		r=1;
 		return 0;
	}
 }
 if(r==0)
 {
 	return 1;
 }
 }
 
 if(l%2!=0&&l!=3)
 {
 	for(i=0;i<(l-1)/2-1;i++)
 	{
 		if(s[i]!=s[l-i-1])
 		{
 		
 		r=1;
		return 0;
		}
	}
	if(r==0)
	{
		return 1;
	}
 }}
 if(s[0]=='0')
 {
 	return 0;
 }
 
  
} 



int main(void)
{
    char a[1111]="0";
	int i=-1;
    char s[1000][1000]; //定义个二维字符串数组 //用来存储所有数据 
    char q[1000][1000];//用来装回文数 
    int b[100]={0};//用来装回文数出现的次数 
    int w=0;int u=0;
	do{
		i++;
		a[i]=getchar();
	  }while(a[i]!=EOF); //实现文本的存入 从第0开始 
	                  
	
	for(i=0;i<1111;i++)  
	  {    
	     
        if(a[i]>='0'&&a[i]<='9')  
        {
		 int v=0;int l=0;
		//printf("%d",v);
		while(a[i]>='0'&&a[i]<='9')//从0开始检索数字 
		{   
		    //printf("ok\n");
			v++ ;
			i++;  //v用来计数看有几个数字 
	    }
		
		//printf("%d\n",v);
		
		 
		if(v!=1)
		{
		strncpy(s[w],a+i-v,v);   //我把数字部分截取下来 
	    w=w+1;
	    }
	    if(v==1)
	    {
	    	continue;
		}
		
		//int er=0;
		//er=strlen(a);
		//printf("lidd%d\n",er);
		
	    if(huiwen(s[w-1])==1) //判断为回文数 
	    {    int chu=0;
	    	 if(u==0) //第一次出现回文数 
	    	{
	    	 	b[u]=1;
	    	 	strcpy(q[0],s[w-1]);
	    	 	u=u+1; 
	    	 	continue;
			} 
			if(u!=0) //已经不是第一次出现了 此时前面有u个不同的回文数 
			{
				int e=0;
				for(e=0;e<u;e++)
				{
					if(strcmp(s[w-1],q[e])==0)
					{
						b[e]=b[e]+1;
						chu=1; //打上标记 
					}
				}
				
				if(chu==0)
				{
					b[u]++;
					strcpy(q[u],s[w-1]);
					u++;
				}
			} 
			
		}
	     
        }
        
}


//printf("%d\n",b[0]);

int max=0;
int h=0;

if(u!=0)
{
for(h=0;h<u;h++)
{
	if(b[h]>b[max])
	{
		max=h;
	}
}

 

char t[10][100];
int c=0;   int nb=0;
for(h=0;h<u;h++)
{
	if(b[h]==b[max])
	{
	sprintf(t[c],"%s %d",q[h],b[h]);
	//printf("%s\n",t[c]);
	c++;
	nb++;
    }
	
}

if(nb!=1)
{
int len1,len2;
len1=strlen(t[0]);
len2=strlen(t[1]);
if(len1<len2)
{
	printf("%s\n",t[0]);
	printf("%s\n",t[1]);
}
 
 if(len1>len2)
{
	printf("%s\n",t[1]);
	printf("%s\n",t[0]);
}
 
}

if(nb==1)
{
	printf("%s %d",q[max],b[max]);
}

}

if(u==0)
{
	printf("None");
}

return 0;
}
