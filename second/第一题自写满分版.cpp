//����һ�������������Ǹ�λ����λ������һ�����飬�������ǵ�λ����λ��Ϊ�˱�����ˣ����ǽ����������������������λ
//����������λ�Ǻϡ�Ȼ��ӵ�λ����λ��ˣ����ó˻�λ��Ϊ�����˻�����λ��֮�͡���δ����������ͨ���ж������λ���
//�������ж϶��˼�λ����󵹹�������� 
#include<stdio.h>
#include<math.h>
#include<string.h>
#define M 10005
int main(void)
{
	int f=0;
	scanf("%d",&f);
	int e=0;
	for (e=0;e<f;e++)
	{   int i,j,n,m,k; 
		char s1[M],s2[M],s[M];
		int a[M],b[M],c[M];
		scanf("%s%s",s1,s2);
		memset(c,0,sizeof(c)); //��ʼ��c
		n=strlen(s1);
		m=strlen(s2);
		k=m+n; //������Ȳ��᳤�����˻����������
		
		for(i=0;i<n;i++)
		a[i]=s1[n-i-1]-48; //��char�ͱ���ת��Ϊ��Ӧint�ͱ��� ��ֵ��Ҫ��ȥ48 
		for(j=0;j<m;j++)
		b[j]=s2[m-j-1]-48; 
		
		for(i=0;i<n;i++)
		 for(j=0;j<m;j++)
		   c[i+j]+=a[i]*b[j]; //��ѭ�˷����ɣ���λ��ˡ�
		   
		for(i=0;i<k;i++)
		{
			if (c[i]>10)
			{
				c[i+1]+=c[i]/10;//��Ϊ��int�ͣ����Ի����С����
				c[i]%=10; 
			}
		}
		
		i=k;
		while(c[i]==0)//ȥ����λ������㣬ȷ��׼ȷλ�� 
		i--; 
		
		if(i<0) printf("0");
		
        else
        {
            for(; i>=0; i--)
                printf("%d",c[i]);
        }
        printf("\n");
		
	}
	return 0;
}
