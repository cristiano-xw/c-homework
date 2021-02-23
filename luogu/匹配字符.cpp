#include<cstdio>
#include<cstring>
int  q[101],top;
char c[101],b[101];
int main()
{
    int i,l;
    scanf("%s",c);
    l=strlen(c);
    for (i=0;i<l;i++)
    {
        if (c[i]=='(') {q[++top]=i; b[i]=')';}
        if (c[i]=='[') {q[++top]=i; b[i]=']';}
        if (c[i]==')'||c[i]==']')
            if (!top||b[q[top]]!=c[i])
                if (c[i]==')') b[i]='('; else b[i]='[';
            else b[q[top--]]=' ';
    }
    for (i=0;i<l;i++)
    {
        if (b[i]=='('||b[i]=='[') printf("%c",b[i]);
        printf("%c",c[i]);
        if (b[i]==')'||b[i]==']') printf("%c",b[i]);
    }
    return 0;
}
