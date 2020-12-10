#include<stdio.h>
#include<string.h>
#include<stdlib.h>
	struct stu{
		char name[11];
		char num[19];
		char point[4];
		struct stu *next; 
	}*p1,*p2,*head,*p,*q,*t;
	
	//上面为结构体； 

		int paiming(const char b[],struct stu*head,int n)
		{
	 	char c[1111];char d[19]; strcpy(c,b);struct stu*p=head;struct stu*p2=head;int temp=1;
	 	
		 
		if(strcmp(b,"A")>0)
		{
		//姓名 
		//struct_pointer->title;
	    for(int i=1;i<n+1;i++){
		if(strcmp(c,p->name)==0) //此时是在比较名字 
		{
			break;
		} 
	    p=p->next;  
	    }
	
	   struct stu*p1;
	   for(int k=1;k<n+1;k++)
	    {//满足分数更少 
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
	//是身份证的话；
	
	 	   for(int i=1;i<n+1;i++){
	 	   	strcpy(d,p->num);
		   if(strcmp(c,&d[14])==0){
			break;
		} 
	   p=p->next;
	}//已经记录下p了； 
	 for(int k=1;k<n+1;k++){//满足分数更少 
	    if(strcmp(p->point,"n/a")==0){
	    	return (-1);
		} 
		if((strcmp(p2->point,"n/a")!=0)&&((strlen(p->point)<strlen(p2->point))||((strlen(p->point)==strlen(p2->point))&&((strcmp(p->point,p2->point))<0))))
    {
		temp++;
	}p2=p2->next;
	}
	return temp;}
	else if((strlen(b)==2)||(strlen(b)==3)||(strlen(b)==1)) {//如果知道c[]是分数 
		
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
//上面为排名字函数； 


int main()
   {
	head=0;char b[11];char c[19];
	int n,temp;
	scanf("%d %s",&n,b); //在B里面存储名字 
	fflush(stdin);  //清空缓存 

	  for(int i=1;i<=n;i++){
      p1=(struct stu*)malloc(sizeof(struct stu)); //给 struct stu*类型分配空间 
      if(head==0)
	  {
      	head=p1;
      	p2=p1;//让p1冲锋陷阵； 
	  }
	  else{
	  	p2->next=p1;
	  	p2=p1;//取代你，p1究极打工王，P2究极袁世凯。 
	  } 
	  		
	}
	
	p2->next=0;
	p=head;
	
	for(int i=1;i<=n;i++){
	scanf("%s %s %s",p->name,p->num,p->point);   //链表和字符串一样scanf printf都是p 
	fflush(stdin);
	p=p->next;
		
	}
	if(strcmp(b,"A")>0)
	{//如果是名字的话； 
	
	p=head;
	    for(int i=1;i<=n;i++){
	    if(strcmp(b,p->name)==0)
		{  //直接比较名字是否相同 
	    int v=paiming(b,head,n);
	    if(v!=-1){
		printf("%s %s %s %d",p->name,p->num,p->point,v);}
		if(v==-1){
	    printf("%s %s %s n/a",p->name,p->num,p->point);
		}
	}
		p=p->next;
	}//到这里前绝对是对对对； 
    
    }
       if(strlen(b)==4)
	    {//如果是身份证； 
         q=head; //head 是链表的头指针 
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
	}//到这里是对的 
	 if((strlen(b)==2)||(strlen(b)==3)){//如果是分数的话 
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
