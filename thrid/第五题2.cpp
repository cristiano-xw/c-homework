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
    

 
}//�ж��Ƿ�λ������ 

int main(void)
{
	char a[1111]="0";int i=-1;
	int u=-1;//��ʾ�����������ظ������ֵĴ��� 
	int b[100]; //������Ż��������ֵĴ��� 
	int c[100];//���ճ��ֵ��Ⱥ��Ż����� ������ͬ�ſɸ�ֵ 
	 
	int r=0;
	do{
		i++;
		a[i]=getchar();
	  }while(a[i]!=EOF); //ʵ���ı��Ĵ��� �ӵ�0��ʼ 
	                  
	
	for(i=0;i<1111;i++)  
	{    
	     
        if(a[i]>='0'&&a[i]<='9')  
        {
		 int v=0;int l=0;
		//printf("%d",v);
		while(a[i]>='0'&&a[i]<='9')//��0��ʼ�������� 
		{   
		    //printf("ok\n");
			v++ ;
			i++;  //v�����������м������� 
	    }
		
		//printf("%d\n",v);
		
		char s[1000];
		strncpy(s,a+i-v,v);   //�Ұ����ֲ��ֽ�ȡ���� 
		l=strlen(s);
		 
		
		int j[1111];
		
		sscanf(s,"%d",&j[r]); 
		r++;                    //�����ִ��������� //�����鲢������ 
		//printf("%d\n",a[r-1]);
		
		int er=0;
		er=j[r-1];
		printf("%d\n",er);
		if(huiwen(j[r-1])>0&&l>1)//�ڴ˴��ж��Ƿ�Ϊ������
		{    
		    
		    //printf("%d\n",j[r-1]);
			int o=0;
		     u++; //��ʾһ�������˼��λ����� �Ҳ��ظ� 
		    // printf("%d\n",u);
		    if(u==0)    //��һ�γ��ֻ�����   
			{
			b[u]=b[u]+1;
			c[u]=j[r-1]; 
			//printf("ok\n");  
		 
			}        
			
			if(u!=0) //���ǵ�һ�γ��� 
			{
				int e=0;
				for(e=0;e<u;e++) //���Ƿ�����ͬ���� 
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
