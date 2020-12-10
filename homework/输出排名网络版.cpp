#include<stdio.h>
#include<string.h>

int main()
{
    char Name[100][20],cTemp[20];   //定义一个数组来保存学生姓名和成绩 
    float mark[100],fTemp;
    int i,j,iNum;

    puts("请输入学生数");
    scanf("%d",&iNum);
    puts("请分别输入姓名和成绩");
    for(i=0;i<iNum;i++)
    {
        scanf("%s",&Name[i]);
        scanf("%f",&mark[i]);
    }

    for(i=1;i<iNum;i++)                                            //排序开始（冒泡）
    {
        for(j=iNum-1;j>=i;j--)
        {
            if(mark[j]>mark[j-1])
            {
                fTemp=mark[j-1];                                   //交换成绩
                mark[j-1]=mark[j];
                mark[j]=fTemp;
                
                strcpy(cTemp,Name[j-1]);                          //交换姓名
                strcpy(Name[j-1],Name[j]);
                strcpy(Name[j],cTemp);
            }
        }
    }

printf("名次\t姓名\t成绩：\n");
    for(i=0;i<iNum;i++)
    {
        printf("%d\t%s\t%f\n",i+1,Name[i],mark[i]);
    }
    return 0;
} 
