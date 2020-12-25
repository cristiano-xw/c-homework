#include<stdio.h>
int *max(int *a,int *b)
{
	if (*a>*b)
	return a;
	if (*b>*a)
	return b;
}
 int main(void)
 {
 	int x,y,*a;
 	scanf("%d%d",&x,&y);
 	a=max(&x,&y);
 	printf("%d",*a);
 	return 0;
 	
 }
