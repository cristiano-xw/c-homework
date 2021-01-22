#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;
char a[1000001];

int main()
{
    char ch;
    long long n,num=0;
    while(scanf("%c",&ch),ch!=' ')
        a[++num]=ch;
    scanf("%lld",&n);
    
    while(num<n)
    {
        long long i=num;
        while(n>i*2) i*=2;
        n=n-(i+1);
        if(n==0) n=i;
    }
    
    printf("%c",a[n]);
    return 0;
}
