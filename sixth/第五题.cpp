#include<stdio.h>
int main(void)
{
	char ch;
	while(ch!=EOF)
	{
		int w=0;int n=0;
		scanf("%d %d",&w,&n);
		if(w%2==0)
		{
			int a[20]={0};
		    int i=0;
		    for(i=0;i<n;i++)   
		{
			scanf("%d",&a[i]);
		}
			printf("ERROR\n"); 
		}
		
		if(w%2!=0)
		{
		int a[20]={0};
		int i=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		//һ����n������
		
		int c[20]={0};
		for(i=0;i<n;i++)
		{
		    c[i]=a[i]; //Ϊ�˲��ƻ�ԭ�������� ��a������c����c���� 
		}  
		
		
		int j=0;
		for(j=0;j+w<=n;j++)
		{   
		    int b[20]={0};
		    for(i=0;i<n;i++)
		    {
		    	b[i]=a[i]; //Ϊ�˲��ƻ�ԭ�������� 
			}
		
			int p=0;int q=0;
			int u=0;
			for(p=j;p<j+w-1;p++)
			{
				for(q=p+1;q<j+w;q++) 
				{
					if(b[q]<b[p])
					{
						u=b[q];
						b[q]=b[p];
						b[p]=u;
					}
				}
			}  //���ڶ�b����������
			
			c[j+(w+1)/2]=b[j+(1+w)/2]; 
		} 
		
		
		for(i=0;i<n;i++)
		{
		    printf("%d ",c[i]); 
		}  
		
		printf("\n");
		
		
	    }
		
		ch=getchar();
	}
	
	return 0;
}
