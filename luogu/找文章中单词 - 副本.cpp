#include<stdio.h>
#include<string.h>
int main(void)
{   
    int num=0;
	char a[11]="0";
	//scanf("%s",a);//�洢���� 
	gets(a);
	//fgets(a,11,stdin);
	 
	char b[1000001]="0";
	//scanf("%s",b);//�洢���� 
	gets(b);
	//fgets(b,1000001,stdin);
	 
	int i=0;
    int l1=0;
    int l2=0;
    l1=strlen(a);
    l2=strlen(b);  //�ֱ𿴳��ȶ���ո� 
  //  printf("%d\n",l2);
    for(i=0;i<l1;i++)
    {
    	if(a[i]>='A'&&a[i]<='Z')
    	{
    		a[i]=a[i]+'a'-'A'; //ת����Сд 
		}
	}
	
	for(i=0;i<l2;i++)
	{
		if(b[i]>='A'&&b[i]<='Z')
    	{
    		b[i]=b[i]+'a'-'A'; //ת����Сд 
		}
	}
	
//	printf("%s\n",a);
//	printf("%s\n",b);
	
	int u=0;
	int j=0;int k=0;int v=0;//v��ʾ�м�����ͬ 
	
	while(k<l2) //b�ӵ�һλ��ĩβ 
	{
		
	if(a[j]==b[k])
	{
		v++;
		j++;
		k++;
	}
	else 
	{    
	    v=0;
		j=0;                    
		k=k-v+1;
	}
	if(v==l1)
	{
	   if((b[k]>='a'&&b[k]<='z')||(b[k-v-1]>='a'&&b[k-v-1]<='z')) //�ж���ĸǰ���Ƿ�����ĸ 
	   {
	   	num=num;
	   }
	   else
	   {
	   	for(u=k-v;u<k;u++)
	   	{
	   		b[u]=1;
		}
	   	num=num+1;
	   }
	   
	}
	
    }
    
    if(num==0)  //���������-1 
    {
    	printf("-1");
	}
	
	if(num!=0)
	{
		printf("%d ",num);
	}
	int o=0;
	for(o=0;o<l2;o++)
	{
		if(b[o]==1)
		{
			printf("%d",o);
			break;
		}
	}
	
	
	
	
}
