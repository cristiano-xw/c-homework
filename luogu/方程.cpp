#include<cstdio>
double a,b,c,d;
double fc(double x)
{
    return a*x*x*x+b*x*x+c*x+d;
}
int main()
{
    double l,r,m,x1,x2;
    int s=0,i;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);  //����
    for (i=-100;i<100;i++)
    {
        l=i; 
        r=i+1;
        x1=fc(l); 
        x2=fc(r);
        if(!x1) 
        {
            printf("%.2lf ",l); 
            s++;
        }      //�ж���˵㣬�����ֱ�������
                        
                        //�����ж��Ҷ˵㣬���ظ���
        if(x1*x2<0)                             //�������и���
        {
            while(r-l>=0.001)                     //���ֿ��ƾ��ȡ�
            {
                m=(l+r)/2;  //middle
                if(fc(m)*fc(r)<=0) 
                   l=m; 
                else 
                   r=m;   //�����е㴦����ֵ��С���䡣
            }
            printf("%.2lf ",r);  
            //����Ҷ˵㡣
            s++;
        }
        if (s==3) 
            break;             
            //�ҵ��������˳���Ż�ʡһ��ʱ��
    }
    return 0;
}

