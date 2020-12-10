#include<stdio.h>
int main(void)
{ 
   int d1=0;
  int n1,n2,n3,n4,n5,a,b,c,d,e;
  //printf("please input 5 numbers\n");
   //scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
   
 while(scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5)!=EOF && n1+n2+n3+n4+n5!=0)
   
   {
   
   if (n2-n1==n3-n2 && n3-n2==n4-n3 && n4-n3==n5-n4)
    { 
	 printf("case one\n");
	  d1=n2-n1;
      a=n5+d1;
      b=a+d1;
      c=b+d1;
      d=c+d1;
      e=d+d1;
      printf("%d %d %d %d %d\n",a,b,c,d,e);
      
    }
     if(n2/n1==n3/n2 && n3/n2==n4/n3 && n4/n3==n5/n4)
    {
     printf("case two\n");
	  d1=n2/n1;
      a=n5*d1;
      b=a*d1;
      c=b*d1;
      d=c*d1;
      e=d*d1;
      printf("%d %d %d %d %d\n",a,b,c,d,e);
      
    }
     if(n1+n2==n3 && n2+n3==n4 && n3+n4==n5)
    {
     printf("case three\n");
	 a=n4+n5;
     b=n5+a;
     c=a+b;
     d=b+c;
     e=c+d;
     printf("%d %d %d %d %d\n",a,b,c,d,e);
     
    }
   // printf("%d %d %d %d %d\n",a,b,c,d,e);
    
}
   
}

