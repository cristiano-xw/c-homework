//程序中输入一个正整数(32位int可以存放下)，请判断他是否为回文数。
//思路可以通过每个数除以十得到最后一位，然后将最后一位作为第一位存入一个新数中，直到原数不大于0. 
//在for循环调用变量，必须在循环里从新声明 
#include <stdio.h>
int main()
{   
	int n=0;
	//printf("Please input numbers:\n ");
   // printf("how many times do you want to play\n");
    int m;
    scanf("%d",&n);
     
    int i=0;
    for(i=0;i<n;i++)
	{
	int s,y=0;
	int num = 0; 
	scanf("%d", &num);
	s=num;
	while(s>0)
	{
		y=y*10+s%10;
		s=s/10;
	}
	if(y==num)
	{
		printf("Yes\n", num);
		//num = 0;
	}
	else{
		printf("No\n", num);
		//printf("%d",y);
	//	num = 0;
	}
	
    }
} 
