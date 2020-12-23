#include<stdio.h>
#include<math.h>
#include<string.h>
 
int huiwen(int x)
{   
    
    int y=0;
	int s=0;
	s=x;
	
	
	while(s>0)
	{
		y=y*10+s%10;
		s=s/10;
	}
	if(y==x)
	{
		 return 1;
	}
	
	
		 return 0;
    

 
}//判断是否位回文数 

int main(void)
{
	char a[1111]="0";int i=-1;
	int u=-1;//表示回文数（不重复）出现的次序 
	int b[100]; //用来存放回文数出现的次数 
	int c[100];//按照出现的先后存放回文数 类型相同才可赋值 
	 
	int r=0;
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
		
		char s[1000];
		strncpy(s,a+i-v,v);   //我把数字部分截取下来 
		l=strlen(s);
		 
		
		int j[1111];
		
		sscanf(s,"%d",&j[r]); 
		r++;                    //将数字存入数组中 //但数组并不是数 
		//printf("%d\n",a[r-1]);
		
		int er=0;
		er=j[r-1];
		printf("%d\n",er);
		if(huiwen(j[r-1])>0&&l>1)//在此处判断是否为回文数
		{    
		    
		    //printf("%d\n",j[r-1]);
			int o=0;
		     u++; //表示一共出现了几次回文数 且不重复 
		    // printf("%d\n",u);
		    if(u==0)    //第一次出现回文数   
			{
			b[u]=b[u]+1;
			c[u]=j[r-1]; 
			//printf("ok\n");  
		 
			}        
			
			if(u!=0) //不是第一次出现 
			{
				int e=0;
				for(e=0;e<u;e++) //看是否有相同的数 
				{
				if (j[r-1]==c[e])  
				{
					b[e]=b[e]+1;
					u=u-1;
					o=1; 
					break;
				}
				} 
				    if(o!=1)
				    {
					c[u]=j[r-1];
					b[u]++;
				    }
			}
		 
		
	   
		
	
}	}}
	
	if(u>=0){
	
	int max=0;
	int p=0;
	for(p=0;p<u;p++)
	{
		if(b[p]>b[max])
		{
			max=p;
		}
	}
	
	printf("%d %d",c[max],b[max]);
}

    if(u==-1)
	{
		printf("wrong");
	}	
	return 0;
	
	
	
	
	
	
	
	
	 
}
