#include<stdio.h>
int main(void)
{   

    char a[11111]="0";
    int i=0;
    for(i=0;;i++)
    {
    	scanf("%c",&a[i]);
    	if(a[i]=='\n')
    	{
    		break;
		}
	}
	
	int l=0;
	l=i;
	//printf("%d",l);
	int j=0;
	for(i=0;i<l;i++)
	{   
	    
		while(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
		  j++;//统计单词的个数 
		  i++;
		}
		
		int p=0;
		for(p=i-1;p>=i-j;p--)  
		{
			printf("%c",a[p]);  //逆序输出 
		}
		j=0;
		
		printf("%c",a[i]);
		
		
		
	}
	
	
	
	return 0;
}
