#include<stdio.h> 
#include<malloc.h> 
#include<string.h> 
int main()
{
    int **a; //�����άָ�롣
    int m, n;//������������
    int i,j;
     
    scanf("%d%d", &m, &n); //����������������
     
    a = (int **) malloc(sizeof(int *) *m);//����һ��һάָ��ռ䡣
    for(i = 0; i < m; i ++)
    a[i] = (int *)malloc(sizeof(int) * n); //����ÿ��һάָ�룬����һ�����ݵĿռ䡣
     
    for(i = 0; i < m; i ++)
        for(j = 0; j < n; j ++)
            scanf("%d",&a[i][j]);//�����i�е�j�е����ݡ�����&p[i][j]Ҳ����д��p[i]+j������ *(p+i) + j. ������ͬ��
     
    /*printf("���������Ϊ%d��%d�У�\n", m, n);
    for(i = 0; i < m; i ++)
    {
        for(j = 0; j < n; j ++)//���ѭ���������һ��Ԫ�ء�
            printf("%d ", p[i][j]);//���i��j�е�Ԫ�ء�
        printf("\n");//ÿ����������ӻ��з���
    } */
	
	for(i=0;i<n;i++)
	{ 
	char s[100]="0";
	scanf("%s\n",s);
	
	
	if(strcmp(s,"SR")==0)
	{
	int u=0,q=0;
	char b[100];
	scanf("%d%d",&u,&q);
	strcpy(b,a[u]);
	strcpy(a[u],a[q]);
	strcpy(a[q],b);
	continue; 
	} //�����ض�ĳһ�� 
	
	if(strcmp(s,"SC")==0)
	{
		int m=0,q=0;int k;
		scanf("%d %d",&m,&q);
		int i=0;
	for(i=0;i<r;i++)
	{
		k=a[i][m];
		a[i][m]=a[i][q];
		a[i][q]=k;
	}
	continue;
   }//����ĳһ��
   
    if(strcmp(s,"DR")==0)
    {   
	    int f=0;
    	//printf("��Ҫɾ��һ��\n");
    	int m=0;
    	scanf("%d",&m);
        for (f=m;f<r;f++)
    	{  
		     //printf("1\n");
    		strcpy(a[f],a[f+1]);
    		iq=iq+1;
		}
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
	  for(x=m;x<c;x++)
	  {
	  	a[y][x]=a[y][x+1]; 
	  }
     } continue;
	
	}// ����ĳһ�� 
	
}
	
	for (i=0;i<r;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0; 
	
	
	
 
} 
     
     
    return 0;
}

