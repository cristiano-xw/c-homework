#include<bits/stdc++.h>
using namespace std;
int p1,p2,p3,i=0,k;
char ch[300],be,af,f,j,p;//p用于输出; 
int main()  
   {
	scanf("%d%d%d%s",&p1,&p2,&p3,ch);//输入;
	while(ch[i])
	{ 
		be=ch[i-1];af=ch[i+1];f=ch[i];//f存储ch[i],便于判断; 
		if(f=='-'&&af>be&&(be>='0'&&af<='9'||be>='a'&&af<='z'))
		{ 
			for(p3==1?j=be+1:j=af-1; p3==1?j<af:j>be; p3==1?j++:j--)
			{
				p=j;//j是整形变量，p是字符型变量，这样是将p赋值为ASCII码为j的字符; 
				if(p1==2)//是否大写; 
					p=(p>='a')?  p-32:p;//如果是字母就转成大写 
				else if(p1==3) p='*';//是否输出'*' 
				for(k=0; k<p2; k++)//输出p2个 
					printf("%c",p);
			}
		} 
		else
		printf("%c",f);//如果ch[i]是非'-'或者其前后不满足条件，就原样输出;
		i++;   //一定要放在后面，不然会出错QAQ;
	}
	return 0;
}
