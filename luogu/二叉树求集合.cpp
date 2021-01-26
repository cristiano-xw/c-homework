//用一个只显示0，1的数组，来表示该位是否显示；
//而每一位都有0，1两种选择，在每一位选择结束之后，开始以同样的方式来建立其下一个元素（子树）；
#include<stdio.h>
#include<malloc.h>
int N;//在这里定义N，为了可以跨函数体使用。 
void f(int* a,int* tag,int n)
{   
    
	if (n==N) //而递归结束的条件则是，当n==N时，递归结束；
	{
		printf("--> ");
		for(int i=0;i<N;i++)
		{
			if(tag[i]==1)
			printf("%d ",a[i]); 
		} 
		printf("\n");
		return ;
	} 
    tag[n]=1;//标记为1，说明要输出，跳到下一个。
	f(a,tag,n+1);
	tag[n]=0;//标记为0，不输出
	f(a,tag,n+1);// 递归跳到下一个
}
int main(void)
{
	int m=0;
	scanf("%d",&m);
	int j=0;
	for(j=0;j<m;j++)
	{
	  scanf("%d",&N);//这是每个数组的长度
	  int *a;
	  a=(int*)malloc(sizeof(int)*N);//为a这个数组动态申请空间。
	  int i=0;
	  for(i=0;i<N;i++)
	  {
	  	scanf("%d",&a[i]) ;//这里a【i】是一个数，必须要通过取地址才可以输入。 
	   } 
	   int tag[N];
	   f(a,tag,0); 
	}
	
}















