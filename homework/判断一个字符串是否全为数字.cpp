#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="1000023233d";
    if(strspn(a, "0123456789")==strlen(a))
    {
        printf("����\n");
    }else{
        printf("��ȫΪ����\n");
    }
    return 0;
}
