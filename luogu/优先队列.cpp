#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
	priority_queue<int>pque;
	
	pque.push(3);
	pque.push(5);
	pque.push(1);
	pque.push(8);
	pque.push(9);
	
	while(pque.empty()==0)
	{
		cout<<pque.top()<<" ";
		pque.pop();
	}
	return 0;
}
