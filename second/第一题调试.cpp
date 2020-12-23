//大数乘法
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
        k=n+m;//保证相乘后的位数不会大于k
       // printf("s1的长度=%d s2的长度=%d\n",n,m);
        /*把字符串s1和s2逆序用数字排列*/
        for(i=0; i<n; i++)
            a[i]=s1[i]-48;   //char型得到正确整形的值需要减去ASCII码值48； 
        for(i=0; i<m; i++)
            b[i]=s2[i]-48;
          /* 乘运算*/
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
 /*去除前导0*/
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
