//����n��ѧ�������������֤�š��ɼ������Ҳ����ƥ����Ҵ���ѧ����������ѧ�źͳɼ���
//ѧ�������п���ȱ����û�гɼ�����ʾΪn/a�� 
//��������Ϊ������10���ַ����ַ��������֤�Ǳ�׼18λ���ɼ�Ϊ0��100֮���һ��������
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[10];
	char ID[20];
	char score[100];
	char rank[100]; 
	
};

int main(void)
{   
    int n,i;
	int j; 
    char a[100];
    char b[100];
    char c[100];
    
    scanf("%d",&n);               
	struct student student[n]; //����һ������student�Ľṹ�壬�������ѧ������Ϣ 
	for(i=0;i<n;i++)
	{   
		scanf("%s%s%s",&student[i].name,&student[i].ID,&student[i].score);
	}
	
	for(i=1;i<n;i++)          //�����һ������󣬰ѵ�һ����������n������Ҫn-1��                                   //����ʼ��ð�ݣ�
    {
    	
        for(j=n-1;j>=0;j--)//�Ƚϵ�ʱ����Ը��ݳ��ȱȽ� 
        {
            if(strcmp(student[j].score,student[j-1].score)>0&&strlen(student[j].score) == strlen(student[j-1].score) || strlen(student[j].score)> strlen(student[j-1].score) )  //��������� 
            {
            	
              strcpy(a,student[j-1].score);                                  //�����ɼ�
              strcpy(student[j-1].score,student[j].score);    
              strcpy(student[j].score,a);
              
               strcpy(b,student[j-1].name);                                  //�����ɼ�
               strcpy(student[j-1].name,student[j].name);    
               strcpy(student[j].name,b);
               
            strcpy(c,student[j-1].ID);                                  //�����ɼ�
            strcpy(student[j-1].ID,student[j].ID);    
            strcpy(student[j].ID,c);
            
            }
            
        }
      }//��������������һ 
    
                  
    
    
    
    char d[100];int t;int k; int p;int q;
    scanf("%s",d);//��������Ϣ����
                 
    
    
    
                           
    
    
    

    for (t=0;t<n;t++)
    {
    	if (strcmp(d,student[t].score)==0)
		{
			break;
		}
	}        //��ǰ�����ң��ҵ���һ�������������ͬ���� ��ʼ����Ϊt+1 
	
	
	 
	
	
    
    
    int m=t+1; 
    int r=t;
	 q=1;                //�������������������г�ʼ����Ϊ m 
    for(k=t;k>=0;k--)    //�ҳ�������ͬ�� 
    {
    	if (strcmp(student[k].score,student[k-1].score)==0)
    	{
    		m=m-1;  r=r-1; q=q+1;//q��ʾ�м����ɼ���ͬ���� �����ǹ�ͬ������Ϊm �۲������ͬ�ɼ���ѧ����һ��������Ϊr
		}
		if (strcmp(student[k].score,student[k-1].score)!=0)
		{
			break;
		}
	}
	int e=t;
	for(k=t;k<n;k++)    //�ҳ�������ͬ�� 
    {
    	if (strcmp(student[k].score,student[k+1].score)==0)
    	{
    		e=e+1;   q=q+1;   //q��ʾ�м����ɼ���ͬ���� �����ǹ�ͬ������Ϊm   �۲������ͬ�ɼ���ѧ������������Ϊe 
		}
		if (strcmp(student[k].score,student[k+1].score)!=0)
		{
			break;
		}
	}
	
    for (t=0;t<n;t++)
    {    
    
        
    	if (strcmp(d,student[t].score)==0 )
		{
		   for(i=r;i<=e;i++)
		   {
		   printf("%s %s %s %d\n",student[i].name,student[i].ID,student[i].score,m);
		   }
		   break;
		}
	}       //�����ճɼ����ҵ�ʱ������ͬ�ɼ���һͬ����� ֻ�гɼ���ͬ�Ż����������ͬ 
	
	
	
    
           return 0;
	
	
	
}
