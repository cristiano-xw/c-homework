#include<stdio.h>
int n,a[1000001];
void qsort(int l,int r)    
{
    int m=a[(l+r)/2];  
    int i=l,j=r;
    do{
        while(a[i]<m) i++;   
        while(a[j]>m) j--;   
        if(i<=j)   
        {
           int k=0;
           k=a[i];
           a[i]=a[j];
           a[j]=k;
            i++;
            j--;
        }
    }while(i<=j); 
    
    if(l<j) qsort(l,j); 
    if(i<r) qsort(i,r); 
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    qsort(1,n);
    for(int i=1;i<=n;i++) printf("%d ",a[i]);
    return 0;
}
