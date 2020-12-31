#include<stdio.h>
#include<string.h>
int main(void)
{    
    int n=0;
    scanf("%d",&n);
	char s[101];
	scanf("%s",s);
	getchar();
	int i=0;
	while(i<n)
	{ 
	  printf("%d\n",i);
	  int m=0;
	  scanf("%d\n",&m);
	  if (m==1)
	  {
	  	char p[100]="0";
	    scanf("%s",p);
	  	strcat(s,p);
	  	printf("%s\n",s);
	  	i++;
	  	continue;
	  }
	  if(m==2)
	  {  
	    char p[100]="0";
	  	strncpy(p,s+5,5);
	  	memset(s,0,sizeof(s));
	  	strcpy(s,p);//从新给s赋值 
	  	printf("%s\n",s);
	  	i++;
	  	continue;
	  }
	  
	  if(m==3) //插入片段，在文档中第 a 个字符前面插入字符串 str，并输出文档的字符串
	  {
	  	int a=0;
	  	scanf("%d",&a);
	  	char z[100]="0";
	  	char x[100]="0";
	  	int len=0;
	  	len=strlen(s);
	  	strncpy(z,s,a);
	  	strncpy(x,s+a,len-a);
	  	char str[100]="0";
	  	scanf("%s",str);
	  	strcat(z,str);
	  	strcat(z,x);
	  	memset(s,0,sizeof(s));
	  	strcpy(s,z);
	  	printf("%s\n",s);
	  	i++;
	  	continue;
	  }
	  
	  if(m==4)
	  {
	  	char p[100];
	  	scanf("%s",p);
	  	int l=0,f=0;
	  	l=strlen(p);
	  	f=strlen(s);
	  	int w=0;int e=0;
	  	int v=0;
	  	while(w<l&&e<f)
	{
	  	if(p[w]==s[e])
	  	{
	  	w++;
		e++;
		v++;	
		}
		else
		{
			w=0;
			e=e-v+1;
		}
		if(v==l)
		{
		printf("%d\n",e-l);
		}
		if(v!=l&&e==f-1)
		{
		printf("-1\n");
		}
	}
	 i++; }
	 
	}
	return 0;
	
}
