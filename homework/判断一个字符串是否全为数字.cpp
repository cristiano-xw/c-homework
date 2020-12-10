#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="1000023233d";
    if(strspn(a, "0123456789")==strlen(a))
    {
        printf("数字\n");
    }else{
        printf("不全为数字\n");
    }
    return 0;
}
