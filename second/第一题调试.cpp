//�����˷�
#include<stdio.h>
#include<math.h>
#include<string.h>
#define M 10005
 
int main()
{   
    int f=0;
    //printf("how many times do you want to play\n");
    scanf("%d",&f);
    int e=0;
     
    for(e=0;e<f;e++)
    {   
	    int i,j,m,n,k;
        char s1[M],s2[M],s[M];
        int a[M],b[M],c[M];
        scanf("%s%s",s1,s2); 
        memset(c,0,sizeof(c));
        //printf("%s\n",c);
        n=strlen(s1);
        m=strlen(s2);
        k=n+m;//��֤��˺��λ���������k
       // printf("s1�ĳ���=%d s2�ĳ���=%d\n",n,m);
        /*���ַ���s1��s2��������������*/
        for(i=0; i<n; i++)
            a[i]=s1[i]-48;   //char�͵õ���ȷ���ε�ֵ��Ҫ��ȥASCII��ֵ48�� 
        for(i=0; i<m; i++)
            b[i]=s2[i]-48;
          /* ������*/
        for(i=n-1; i>=0; i--)
            for(j=m-1; j>=0; j--)
                c[i+j]+=a[i]*b[j];
                
        for(i=0; i<=k; i++)
        {
            if(c[i]>=10)
            {
                c[i+1]+=c[i]/10;
                c[i]%=10;
            }
        }
 /*ȥ��ǰ��0*/
        i=0;
        while(c[i]==0) i++;
        
  
        if(i>n) printf("0");
        else
        {
            int r=0;
            for(r=i;r<k;r++)
                printf("%d",c[r]);
        }
        printf("\n");
    }
    return 0;
}
