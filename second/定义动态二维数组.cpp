#include<stdio.h> 
#include<malloc.h> 
#include<string.h> 
int main()
{
    char **a; //�����άָ�롣
    int m, n;//������������
    int i,j;
     
    scanf("%d%d", &m, &n); //����������������
     
    a = (char **) malloc(sizeof(char *) *m); //����һ��һάָ��ռ䡣
    for(i = 0; i < m; i ++)
    a[i] = (char *)malloc(sizeof(int) * n); //����ÿ��һάָ�룬����һ�����ݵĿռ䡣
     
    for(i = 0; i < m; i ++)
        for(j = 0; j < n; j ++)
            scanf("%d",&a[i][j]); //�����i�е�j�е����ݡ�����&p[i][j]Ҳ����д��p[i]+j������ *(p+i) + j. ������ͬ��
           
    printf("���������Ϊ%d��%d�У�\n", m, n);
    
    for(i = 0; i < m; i ++)
    {
        for(j = 0; j < n; j ++)//���ѭ���������һ��Ԫ�ء�
            printf("%d", a[i][j]);//���i��j�е�Ԫ�ء�
        printf("\n");//ÿ����������ӻ��з���
    } 
 } 
