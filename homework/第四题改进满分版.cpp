//����n��ѧ�������������֤�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ�������������֤�š�
//ע�⣺ѧ�������п���ȱ����û�гɼ�����ʾΪn/a.
//��������Ϊ������10���ַ����ַ��������֤�Ǳ�׼18λ���ɼ�Ϊ0��100֮���һ��������
#include<stdio.h>
#include<string.h>
struct student
{
	char name[10];
	char ID[20];
	char score[100];
	
};

int main()
{   
    int len;
    int i;
    int n;
	//printf("how many students are there\n");
	scanf("%d",&n);
	//printf("please input students` information\n");
	
	struct student student[n]; //����һ������student�Ľṹ�壬�������ѧ������Ϣ 
	for(i=0;i<n;i++)
	{   
		scanf("%s%s%s",&student[i].name,&student[i].ID,&student[i].score);
	}
     
	int max=0;
	int min=0;
	
	
	for(i=0;i<n;i++)
	{
//	len = strlen(student[i].score);
	
     if (strcmp(student[i].score,"n/a")==0&&i+1<n)
	 {
	 	i=i+1;
	 	
	  } 
	  
	 if (strcmp(student[max].score,"n/a")==0)
	 {
	 	max=max+1;
	 	
	  } 
	   if (strcmp(student[min].score,"n/a")==0)
	 {
	 	min=min+1;
	 	
	  } 
	  
	if (strcmp(student[i].score,"n/a")!=0)   //�ų�a/n��Ӱ�� 
	
	
	{   
		 
		
		if(strcmp(student[max].score,student[i].score)<0&&strlen(student[i].score)== strlen(student[max].score) || strlen(student[i].score)> strlen(student[max].score)) 
		{ 
		max=i;  
		} 
		
		
		if(strcmp(student[min].score,student[i].score)>0&&strlen(student[i].score)== strlen(student[min].score)|| strlen(student[i].score)<strlen(student[min].score)  )
		{
		
		min=i;  
	    
	     
		 
	    } 
		
	}
   }   
  // for(i=0;i<n;i++)
  // {
   //	if (strcmp(student[i].score,"100")==0) 
   //	{
  // 		max=i;
//	   }
  // }
    
     for(i=0;i<n;i++)
     {  
        if (strcmp(student[i].score,"n/a")!=0)
     	if(strcmp(student[max].score, student[i].score)==0 && strcmp(student[i].name, student[max].name) < 0)
     	{
     		max=i;
		 }
	 }
	 
	  for(i=0;i<n;i++)
     {  if (strcmp(student[i].score,"n/a")!=0)
     	if(strcmp(student[min].score, student[i].score)==0 && strcmp(student[i].name, student[min].name) > 0)
     	{
     		min=i;
		 }
	 }
    
     
    
      //printf("%d\n",min);
	 //printf("the result is\n");
	 printf("%s %s\n",student[max].name,student[max].ID);
	 printf("%s %s\n",student[min].name,student[min].ID);
	 return 0;
}
