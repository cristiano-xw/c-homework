#include<stdio.h>
int main(void)
{
   bool digit_seen[10]={false};
   int digit;
   long n;
   printf("enter a number\n ");
   scanf("%ld",&n);
   while (n>0)
   {
   	digit =n ;
   	if(digit_seen[digit])
   	break;
   	digit_seen[digit]=true;
   	n/=10;
	   }
	   		if(n>=1)
     printf("repeated digit\n");
     else
     printf("no repeated digit\n");
     return 0;
}
