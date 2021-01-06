#include<stdio.h>
#include<string.h>
int a[100],b[100],c[100],d[100];
int sum; 
int n; 
int print();
void queen(int i) 
{
    if(i>n)
    {
        print();  
		printf("%d\n",i); 
    }  
    else
    {
        for(int j=1;j<=n;j++) 
        {
            if((b[j]==0)&&(c[i+j]==0)&&(d[i-j+n]==0)) 
            {
                a[i]=j; 
                b[j]=1; 
                c[i+j]=1;
                d[i-j+n]=1;  
                queen(i+1); 
                
                b[j]=0;
                c[i+j]=0;
                d[i-j+n]=0;
                
            }
        }
    }
}

int print()
{
    if(sum<=2) 
    {
        for(int k=1;k<=n;k++)
        {
        printf("%d ",a[k]); 
        }
        printf("\n");
    }
   sum++; 
}

int main()
{    
    scanf("%d",&n);
    queen(1); 
    printf("%d",sum);
    return 0;
}
