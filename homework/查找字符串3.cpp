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
	len=strlen(str1);   //读取出字符串的长度 
	//printf("%d",len);
	
	
	
	if (len<=100)
	{    
	   if (len==3)
	{
		if (strcmp(str1,str)==0)//比较是否和SCU相同 
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
			b++;//若成功此时b=3 
		}
		else
		{
			a=a-b+1;//从比较的第一位开始重新比较 
			b=0;
		}
		//printf("%d\n",a);
		if(b==strlen(str))
	    	{   
		    int  j=a;
            int  k=a+3;
			for(j=a-3;str1[j-1]=='A';j--);  //a是相同的最后一位 +1
			//for(j=a-3;--j;str1[j]=='A');//可以等价转为先自减在执行 
			//printf("%d\n",j);
            for(k=a;str1[k]=='A';k++);//因为数组第一个数为a[0]，第一个for循环为 先判断成立在自减 最终[j-1]会变为0，所以j会变为0
			 
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
