#include<stdio.h> 
int main()
   {       
          int a[2]={0};    
   	      int n=0,x=0,num=0;  
           
   	      scanf("%d",&n);
   	      scanf("%d",&a[0]);
   	      int b[1000000]={0};  
   	      int m=0;
   	      for(m=0;m<100000;m++)
   	      {
   	      	b[m]=1;
		  }
   	      int k=0;
   	      
   	      for(int i=1;i<n;i++)
			 {
   		      scanf("%d",&a[1]);   
   		      if(a[1]>a[0])
			{
   			   b[k]++;  
			   a[0]=a[1];            
		    }
		     else 
		     {
			 k++;             
		     a[0]=a[1]; 
			 }            
	         }
   
   int j=0;int max=0;
   for(j=0;j<k+1;j++)
   {
   	if(b[j]>b[max])
   	{
   		max=j;
	}
   }
   printf("%d",b[max]);

   	return 0;
   }
