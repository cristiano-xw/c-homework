#include<stdio.h>
#include<string.h>
int main()
{   
     char a[105][105];
    
    int n,m;
     
    scanf("%d %d",&n,&m);
    
    
    for(int i=1;i<=n;i++)//�����ͼ 
    {
        for(int j=1;j<=m;j++) 
        {   char k;
            scanf("%c",&k);
            if(k=='*') a[i][j]=1;//����ǵ��׾ͽ��������Ϊһ 
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==1) printf("*"); //����ǵ��ײ���������� 
            else
            {
                printf("%d",a[i+1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i][j+1]+a[i][j-1]+a[i-1][j+1]+a[i-1][j]+a[i-1][j-1]);
                //���Աߵ��׼�������� 
            }
        }
        printf("\n");
    }
    return 0;//���Ľ����������� 
}
