#include<stdio.h>
#include<string.h>
#include<stdlib.h>
	struct stu{
		char name[11];
		char num[19];
		char point[4];
		struct stu *next; 
	}*p1,*p2,*head,*p,*q,*t;
	
	//����Ϊ�ṹ�壻 

		int paiming(const char b[],struct stu*head,int n)
		{
	 	char c[1111];char d[19]; strcpy(c,b);struct stu*p=head;struct stu*p2=head;int temp=1;
	 	
		 
		if(strcmp(b,"A")>0)
		{
		//���� 
		//struct_pointer->title;
	    for(int i=1;i<n+1;i++){
		if(strcmp(c,p->name)==0) //��ʱ���ڱȽ����� 
		{
			break;
		} 
	    p=p->next;  
	    }
	
	   struct stu*p1;
	   for(int k=1;k<n+1;k++)
	    {//����������� 
	    if(strcmp(p->point,"n/a")==0){
	    	break; 
		} 
		if((strcmp(p2->point,"n/a")!=0)&&((strlen(p->point)<strlen(p2->point))||((strlen(p->point)==strlen(p2->point))&&((strcmp(p->point,p2->point))<0))))
    {
	  temp++;
	} p2=p2->next; 
	
	}
	return temp;}
	
	else if(strlen(b)==4){
	//�����֤�Ļ���
	
	 	   for(int i=1;i<n+1;i++){
	 	   	strcpy(d,p->num);
		   if(strcmp(c,&d[14])==0){
			break;
		} 
	   p=p->next;
	}//�Ѿ���¼��p�ˣ� 
	 for(int k=1;k<n+1;k++){//����������� 
	    if(strcmp(p->point,"n/a")==0){
	    	return (-1);
		} 
		if((strcmp(p2->point,"n/a")!=0)&&((strlen(p->point)<strlen(p2->point))||((strlen(p->point)==strlen(p2->point))&&((strcmp(p->point,p2->point))<0))))
    {
		temp++;
	}p2=p2->next;
	}
	return temp;}
	else if((strlen(b)==2)||(strlen(b)==3)||(strlen(b)==1)) {//���֪��c[]�Ƿ��� 
		
		for(int i=1;i<n+1;i++)
		{
		if(strcmp(c,"n/a")==0){
		return -1;
		}
		if(strcmp(c,p->point)==-1){
			temp++;
		} 
		p=p->next;
		} 
	} return temp; 
	}
//����Ϊ�����ֺ����� 


int main()
   {
	head=0;char b[11];char c[19];
	int n,temp;
	scanf("%d %s",&n,b); //��B����洢���� 
	fflush(stdin);  //��ջ��� 

	  for(int i=1;i<=n;i++){
      p1=(struct stu*)malloc(sizeof(struct stu)); //�� struct stu*���ͷ���ռ� 
      if(head==0)
	  {
      	head=p1;
      	p2=p1;//��p1������� 
	  }
	  else{
	  	p2->next=p1;
	  	p2=p1;//ȡ���㣬p1����������P2����Ԭ������ 
	  } 
	  		
	}
	
	p2->next=0;
	p=head;
	
	for(int i=1;i<=n;i++){
	scanf("%s %s %s",p->name,p->num,p->point);   //������ַ���һ��scanf printf����p 
	fflush(stdin);
	p=p->next;
		
	}
	if(strcmp(b,"A")>0)
	{//��������ֵĻ��� 
	
	p=head;
	    for(int i=1;i<=n;i++){
	    if(strcmp(b,p->name)==0)
		{  //ֱ�ӱȽ������Ƿ���ͬ 
	    int v=paiming(b,head,n);
	    if(v!=-1){
		printf("%s %s %s %d",p->name,p->num,p->point,v);}
		if(v==-1){
	    printf("%s %s %s n/a",p->name,p->num,p->point);
		}
	}
		p=p->next;
	}//������ǰ�����ǶԶԶԣ� 
    
    }
       if(strlen(b)==4)
	    {//��������֤�� 
         q=head; //head �������ͷָ�� 
    	 for(int i=1;i<=n;i++){
         strcpy(c,q->num);
         if(strcmp(b,&c[14])==0){
         int v=paiming(b,head,n);
         if(v!=0){
         printf("%s %s %s %d",q->name,q->num,q->point,v);}
		 if(v==0){
		 printf("%s %s %s n/a",q->name,q->num,q->point);
		 }	
		 }
		 q=q->next;
		}
	}//�������ǶԵ� 
	 if((strlen(b)==2)||(strlen(b)==3)){//����Ƿ����Ļ� 
	t=head; 
	    
	for(int i=1;i<=n;i++){
	if(strcmp(b,t->point)==0){
	   int v=paiming(b,head,n);
	   if(v!=0){
	   	printf("%s %s %s %d\n",t->name,t->num,t->point,v);
	   }
	   if(v==0){
	   	printf("%s %s %s n/a\n",t->name,t->num,t->point);
	   }
	}
	    t=t->next;
	
	}
	 }} 
