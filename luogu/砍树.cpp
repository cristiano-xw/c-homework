#include<bits/stdc++.h>
using namespace std;
long long n,bz,s=0,mid,leftt,longest,trees[1000008];
int main()
{
    scanf("%lld%lld",&n,&bz); 
    for(int i=1;i<=n;i++) 
    {
        scanf("%lld",&trees[i]);
        longest=max(longest,trees[i]);//�ҵ��ľ�� 
    }
                  
    while(leftt<=longest)    
    {
        mid=(leftt+longest)/2; //���м�㿪ʼ��Ϊ��ľ���߶�
        s=0; 
        for(int i=1;i<=n;i++) 
			if(trees[i]>mid) //���ĸ߶ȴ��ڷ�ľ���߶� 
				s+=trees[i]-mid; //�ߵĲ����ۼ� 
        if(s<bz) //ľ�Ĳ��� 
			longest=mid-1;//������� ��С�߶�����ľ�� 
		else 
			leftt=mid+1;//���ұ��� ���Ӹ߶ȼ�Сľ�� 
    }
    
    cout<<leftt-1; 
    return 0;                                            
}
