#include<stdio.h> 
int n,a[1000001];
void qsort(int l,int r)//应用二分思想
{
    int mid=a[(l+r)/2];   //中间数  int型变量会自动求整 
    int i=l,j=r;
    do{
        while(a[i]<mid) i++;//查找左半部分比中间数大的数
        while(a[j]>mid) j--;//查找右半部分比中间数小的数
        if(i<=j)//如果有一组不满足排序条件（左小右大）的数
        {
            int t=0;
			t=a[j];
			a[j]=a[i];
			a[i]=t;
			 
            i++;
            j--;
        }
    }while(i<=j);//这里注意要有=
    if(l<j) qsort(l,j);//递归搜索左半部分
    if(i<r) qsort(i,r);//递归搜索右半部分
}
int main()
{    
     
    scanf("%d",&n);
    for(int i=1;i<=n;i++) 
    scanf("%d",&a[i]);
    qsort(1,n);
    for(int i=1;i<=n;i++) 
    printf("%d ",a[i]);
}
