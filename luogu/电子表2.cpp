#include<stdio.h> 
#include<malloc.h> 
#include<string.h> 
int main()
{
    char **a;   //�����άָ�롣��Ŷ�ά�������ݡ� 
    int r, c;   //������������
    int i,j;
    int sum=0;
    int qwe=0;
    int hum=0;
    int l=0;
     
    scanf("%d%d", &r, &c); //����������������
     
    a = (char**) malloc(sizeof(char*) *(r+3)); //����һ��һάָ��ռ䡣
    for(i = 0; i <r+1; i ++) //�������ռ䣬��ΪҪ�ӳ� 
    a[i] = (char *)malloc(sizeof(int) * (c+2));  //����ÿ��һάָ�룬����һ�����ݵĿռ䡣a[i]��ָ���i�е�ָ�� 
     
    for(i = 0; i < r; i ++)  
        for(j = 0; j < c; j ++)
            scanf("%d",&a[i][j]);
            
             
	
	 
    //�����ҵ����˺ܾã���Ϊ����a��i���� char *�ͱ��� ����ʱ����Ҫȡ��ַ 
    int n=0;
	//printf("how many commands are there\n");
	scanf("%d",&n);
	for(l=0;l<n;l++)     //�ⲿѭ�����������Ժ��ڲ���ͬ          
{
	char s[100]="0";
	scanf("%s\n",s);
	
	if(strcmp(s,"SR")==0)
	{
    
	int m=0,q=0;
	
	char b[100]="0";
	
	scanf("%d %d",&m,&q);
	strcpy(b,a[m-1]);   //strcpy������������char*�ͱ��� Ҳ���ǽ�����ָ��ָ���Ԫ�� 
	strcpy(a[m-1],a[q-1]);
	strcpy(a[q-1],b);
	 
	continue; 
	 
	} //�����ض�ĳһ�� 
	
	if(strcmp(s,"SC")==0)
	{
		int m=0,q=0;int k;
		scanf("%d %d",&m,&q);
		int i=0;
	for(i=0;i<r;i++)
	{
		k=a[i][m-1];   //������������Ϊ�Ҷ�ά������ȫ��int�ͱ���    
		a[i][m-1]=a[i][q-1];
		a[i][q-1]=k;
	}
	continue;
   }//����ĳһ��
   
   
   if(strcmp(s,"DR")==0)
    {   
	    int f=0;
    	//printf("��Ҫɾ��һ��\n");
    	int m=0;
    	scanf("%d",&m);
        for (f=m-1;f<r-1;f++)
    	{  
		     
    		strcpy(a[f],a[f+1]);
		            
		}
		  sum=sum+1;     
		continue;	 
	} //ɾȥĳһ�� 
   
   
   if(strcmp(s,"DC")==0)
	{
	  int f=0;
	  int m=0;
	  int y=0;
	  int x=0;
	  //printf("����ɾ����һ��\n");
      scanf("%d",&m);
      //�ӵ�һ�п�ʼ
      for(y=0;y<r;y++)
	  {  //printf("k\n");
	  for(x=m-1;x<c;x++)
	  {
	  	a[y][x]=a[y][x+1]; 
	  } 
     } 
	 qwe=qwe+1; 
	 continue;
	
	}// ɾ��ĳһ�� 
	
	if(strcmp(s,"IR")==0)          
	{   
	    int x=0;
	     
		//printf("��Ҫ����һ���Ϸ�����һ��\n");
		scanf("%d",&x);
		
		for(i=r;i>x-1;i--)
		{
		   strcpy(a[i],a[i-1]);	 
		}
		
	    for(i=0;i<c;i++)
	    {
	    	a[x-1][i]=0;
		}
		
		r=r+1;
	    continue;
	} //����һ��0 
	
	if(strcmp(s,"IC")==0)   
	{
		int i=0;
		scanf("%d",&i);
		int y=0;int x=0;
	  for(y=r-1;y>=0;y--)
	  {   
	  for(x=c;x>i-1;x--)
	  {
	  	a[y][x]=a[y][x-1]; 
	  } 
     } 
      for(y=0;y<r;y++)
      {
      	a[y][i-1]=0;
	  }
	  
	}
	hum=hum+1;
}  //����һ��0 
	 
	for(i = 0; i < r-sum; i ++)  
	{
	for(j=0;j<c-qwe+hum;j++)
	printf("%d ", a[i][j]); 
	printf("\n");
	//printf("ok\n");
	  
    }
     
     

    
    
 }
