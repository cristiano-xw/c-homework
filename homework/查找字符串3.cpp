#include<stdio.h>
#include<string.h>
int main(void)
{   
    int i=0,n;
   // printf("how many times do yo want to play\n");
    scanf("%d",&n);
	
    while(i<n)
	{
    int len; 
    char str[10]="SCU";
    //printf("please input your characters\n");
	char str1[100];
	scanf("%s",str1);
	len=strlen(str1);   //��ȡ���ַ����ĳ��� 
	//printf("%d",len);
	
	
	
	if (len<=100)
	{    
	   if (len==3)
	{
		if (strcmp(str1,str)==0)//�Ƚ��Ƿ��SCU��ͬ 
		{
			printf("YES\n");
		}
		else 
		{
			printf("NO\n");
		}
	}
	 if (len !=3)
	 {
	    int a=0,b=0;
		while (a<len&&b<3)
		if (str1[a]==str[b])
		{
			a++;
			b++;//���ɹ���ʱb=3 
		}
		else
		{
			a=a-b+1;//�ӱȽϵĵ�һλ��ʼ���±Ƚ� 
			b=0;
		}
		//printf("%d\n",a);
		if(b==strlen(str))
	    	{   
		    int  j=a;
            int  k=a+3;
			for(j=a-3;str1[j-1]=='A';j--);  //a����ͬ�����һλ +1
			//for(j=a-3;--j;str1[j]=='A');//���Եȼ�תΪ���Լ���ִ�� 
			//printf("%d\n",j);
            for(k=a;str1[k]=='A';k++);//��Ϊ�����һ����Ϊa[0]����һ��forѭ��Ϊ ���жϳ������Լ� ����[j-1]���Ϊ0������j���Ϊ0
			 
            //printf("%d\n",k);
			if (j==0&&k==len)
			{
				printf("YES\n") ;
			}
			else 
			{
				printf("NO\n");
			}	
			}
	}
		
	        
	}
	else
	{
		printf("NO\n");
	}
	i=i+1;
	
    }

    return 0;
} 
