#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,p=0;
	scanf("%d",&n);
	int i=0;
	char b;
    //b用来装运算符 
	for(i=0;i<n;i++)
	{
	char a[5]="0";
	int c=0,d=0;
	int l=0;//长度 
	char s[100];
	scanf("%s",a);  //读入头一个字符 
	if(a[0]>='a'&&a[0]<='z')  //如果是字母   如果是数字，则用上一次的结果 
	{
	     b=a[0];
		scanf("%d%d",&c,&d);
	}
	else
	 {
	 	sscanf(a,"%d",&c);
	 	scanf("%d",&d);
	 }
	  
	 memset(s,0,sizeof(s));
	 if(b=='a')
	 {   
	    p=1;
	    sprintf(s,"%d+%d=%d",c,d,c+d);//将结果存在b中 
	     l=strlen(s);
	     printf("%s\n",s);
	    printf("%d\n",l);
	    
	    continue;
	   
     }
     if(b=='b')
     {  
        p=2;
     	sprintf(s,"%d-%d=%d",c,d,c-d);
        l=strlen(s);
	    printf("%s\n",s);
	    printf("%d\n",l);
     	continue;
     }
     if(b=='c')
     {
     p=3;
      sprintf(s,"%d*%d=%d",c,d,c*d);
     l=strlen(s);
	 printf("%s\n",s);
	 printf("%d\n",l);
     	continue;
	 }
	  
	  
}}
