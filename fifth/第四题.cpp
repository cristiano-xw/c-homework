#include<stdio.h>
#include<string.h>
int main(void)
{

  char a[1111]="0";
  char b[100][100];//����װ�������ظ�
  char c[100][100]; //����װ���� û���ظ�
  int d[100]={0}; //����װ���ֵĴ��� 
  int p=0;
  
  int n=-1;
  do{
		n++;
		a[n]=getchar();
	  }while(a[n]!=EOF); //ʵ���ı��Ĵ��� �ӵ�0��ʼ һ����n+1���� 


  //printf("%c",a[0]);
  int i=0;
  for(i=0;i<n+1;i++)
  {
  	if(a[i]>='A'&&a[i]<='Z')
  	{
  		a[i]=a[i]+'a'-'A'; //ȫ��ת��ΪСд��ĸ 
	}
  } //ok
  
  
  
  for(i=0;i<n+1;i++)
  { 
    if(a[i]>='a'&&a[i]<='z')
     {
	
  	int v=0;
  	while(a[i]>='a'&&a[i]<='z')
  	{
  		v++; //һ����v��������ĸ 
  		i++; 
	}
	
	strncpy(b[p],a+i-v,v);
	p++;  //�ѵ��ʴ�����  һ����p������ 
     }
  } 
  //printf("%s",b[0]);
  
  int r=0;int u=0;int k=0; 
  
  for(i=0;i<p;i++)
  {
  	int v=0;
  	if(u==0)//��һ�γ��ֵ���
	{   
	    strcpy(c[0],b[0]);
		d[0]=d[0]+1;
		u=u+1;
		v=1;
		//printf("%s",c[0]);
	} 
	
	if(u!=0&&v==0)
	{    
	    int g=0;//��Ϊ���
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
  //һ������u�鲻ͬ��
  
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
  		m++;  //�����ִ������ĵ��ʴ��� 
  		ci++;  //һ����ci�� 
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
