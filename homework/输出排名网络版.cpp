#include<stdio.h>
#include<string.h>

int main()
{
    char Name[100][20],cTemp[20];   //����һ������������ѧ�������ͳɼ� 
    float mark[100],fTemp;
    int i,j,iNum;

    puts("������ѧ����");
    scanf("%d",&iNum);
    puts("��ֱ����������ͳɼ�");
    for(i=0;i<iNum;i++)
    {
        scanf("%s",&Name[i]);
        scanf("%f",&mark[i]);
    }

    for(i=1;i<iNum;i++)                                            //����ʼ��ð�ݣ�
    {
        for(j=iNum-1;j>=i;j--)
        {
            if(mark[j]>mark[j-1])
            {
                fTemp=mark[j-1];                                   //�����ɼ�
                mark[j-1]=mark[j];
                mark[j]=fTemp;
                
                strcpy(cTemp,Name[j-1]);                          //��������
                strcpy(Name[j-1],Name[j]);
                strcpy(Name[j],cTemp);
            }
        }
    }

printf("����\t����\t�ɼ���\n");
    for(i=0;i<iNum;i++)
    {
        printf("%d\t%s\t%f\n",i+1,Name[i],mark[i]);
    }
    return 0;
} 
