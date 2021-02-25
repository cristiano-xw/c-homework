#include<bits/stdc++.h> 
#include<set>
using namespace std;
multiset<int>q;
int n,t,x,order;
int main()
{
    q.insert(-2147483647);
    q.insert(2147483647); 
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&t,&x);
        if(t==1) 
        {
            multiset<int>::iterator it=q.lower_bound(x);
            order=0;
            for(multiset<int>::iterator i=q.begin();i!=it;i++,order++);
            printf("%d\n",order);
        }
		
        else if(t==2)
        {
            order=-1;
                for(multiset<int>::iterator it=q.begin();it!=q.end();it++)
                {
                    order++;
                    if(order==x)
                        printf("%d\n",*it);
                }
        }
        
        else if(t==3)
        {
            multiset<int>::iterator it=q.lower_bound(x);
            printf("%d\n",*--it);
        }
        
        else if(t==4)
        {
            printf("%d\n",*q.upper_bound(x));
        }
        
        else
        {
            q.insert(x);
        }
    }
    return 0;
}
