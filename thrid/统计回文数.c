//可能存在的问题：数组是否够大，数字可能出现乱码（重要）
#include<stdio.h>
#include<string.h>
void quicksort(char a[][1000],int low,int high);
int main(void)
{
	char file[1000],a[500][1000],b[500][1000],d[500][1000],e[500][1000];
	int i,j,t=0,len1,len2,x=0,y=0,p=0,q,c[500];
	i=-1;
	
	do{
		i++;
		file[i]=getchar();
	}while(file[i]!=EOF);
	
	printf("%c",file[2]);
	
	
	
	file[i]='\0';
	file[i-1]='\0';
	len1=strlen(file);
	for(i=0;i<len1;i++){
		if(file[i]=='0'||file[i]=='1'||file[i]=='2'||file[i]=='3'||file[i]=='4'||file[i]=='5'||file[i]=='6'||file[i]=='7'||file[i]=='8'||file[i]=='9')
		{
		  a[x][y]=file[i];//a用于提取数字 
		  y++;
	    }
	    if((file[i]!='0'&&file[i]!='1'&&file[i]!='2'&&file[i]!='3'&&file[i]!='4'&&file[i]!='5'&&file[i]!='6'&&file[i]!='7'&&file[i]!='8'&&file[i]!='9')&&(file[i-1]=='0'||file[i-1]=='1'||file[i-1]=='2'||file[i-1]=='3'||file[i-1]=='4'||file[i-1]=='5'||file[i-1]=='6'||file[i-1]=='7'||file[i-1]=='8'||file[i-1]=='9')){
	    	x++;
	    	y=0;
		}
	}
	if(file[i-1]=='0'||file[i-1]=='1'||file[i-1]=='2'||file[i-1]=='3'||file[i-1]=='4'||file[i-1]=='5'||file[i-1]=='6'||file[i-1]=='7'||file[i-1]=='8'||file[i-1]=='9')
	  x++;
	
	for(i=0;i<x;i++){
		if(a[i][0]!='0'){
			strcpy(d[t],a[i]);//消去第一位为0的数 
			t++;
		}
	}
	
	for(i=0;i<t;i++){
		len2=strlen(d[i]);
		for(j=0;j<len2;j++){
			if(d[i][j]!=d[i][len2-j-1])
			  break;
		}
		if(j==len2&&len2>1){//b用于提取回文数，至少两位数 
			strcpy(b[p],d[i]);//a由于乱码可能把回文数变成不是回文数，还需修正
			p++;
		}
	}
	
	for(i=0;i<p;i++)
	  c[i]=0;
	
	for(i=0;i<p;i++){
		for(j=i;j<p;j++){
			if(strcmp(b[i],b[j])==0)
			  c[i]++;//c用于记录回文数次数 
		}
	}
	
	q=c[0];
    for(i=1;i<p;i++){
    	if(c[i]>q){
    	    q=c[i];//用于记录回文数最多次数  
        }
	}	
	
	j=0;
	for(i=0;i<p;i++){
		if(c[i]==q){
			strcpy(e[j],b[i]);//将回文数次数最多的数提取出来
			j++;//j已固定，后续不可用于计数 
		}
	}
	
	
	quicksort(e,0,j-1);
	for(i=0;i<j;i++)
      printf("%s %d\n",e[i],q);
	
	
	if(p==0)
	  printf("None\n");
	
	return 0;
}

void quicksort(char a[][1000],int low,int high)
{
	int middle;
	
	if(low>=high) return;
	middle=split(a,low,high);
	quicksort(a,low,middle-1);
	quicksort(a,middle+1,high);
}

int split(char a[][1000],int low,int high)
{
	int len1,len2;
	
	char part_element[1000];
	strcpy(part_element,a[low]);
	len1=strlen(part_element);
	
	for(;;){
		len2=strlen(a[high]);
		while(low<high&&(len1<len2||(len1==len2&&strcmp(part_element,a[high])<=0))){
		    high--;
		    len2=strlen(a[high]);
		}
		if(low>=high) break;
		strcpy(a[low],a[high]);
		low++;
		
		len2=strlen(a[low]);
		while(low<high&&(len2<len1||(len2==len1&&strcmp(a[low],part_element)<=0))){
			low++;
			len2=strlen(a[low]);
		}
		if(low>=high) break;
		strcpy(a[high],a[low]);
		high--;
	}
	
	strcpy(a[high],part_element);
	return high;
}
