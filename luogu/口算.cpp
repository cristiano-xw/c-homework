#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,p=0;
	scanf("%d",&n);
	int i=0;
	char b;
    //b����װ����� 
	for(i=0;i<n;i++)
	{
	char a[5]="0";
	int c=0,d=0;
	int l=0;//���� 
	char s[100];
	scanf("%s",a);  //����ͷһ���ַ� 
	if(a[0]>='a'&&a[0]<='z')  //�������ĸ   ��������֣�������һ�εĽ�� 
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
	    sprintf(s,"%d+%d=%d",c,d,c+d);//���������b�� 
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
