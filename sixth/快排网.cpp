#include<stdio.h> 
int n,a[1000001];
void qsort(int l,int r)//Ӧ�ö���˼��
{
    int mid=a[(l+r)/2];   //�м���  int�ͱ������Զ����� 
    int i=l,j=r;
    do{
        while(a[i]<mid) i++;//������벿�ֱ��м��������
        while(a[j]>mid) j--;//�����Ұ벿�ֱ��м���С����
        if(i<=j)//�����һ�鲻����������������С�Ҵ󣩵���
        {
            int t=0;
			t=a[j];
			a[j]=a[i];
			a[i]=t;
			 
            i++;
            j--;
        }
    }while(i<=j);//����ע��Ҫ��=
    if(l<j) qsort(l,j);//�ݹ�������벿��
    if(i<r) qsort(i,r);//�ݹ������Ұ벿��
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
