#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = a;i <= b;i++)
using namespace std;
const int N = 3100;
int len[20],m,n,pos[20],h[20];
char a[N][N];  //�����������飬ע�⿪��һ

void prepare()
{
    int sum = 1;            //��¼��֦����ǰ׺��
    len[1] = 1;pos[1] = 1;  //��һ����֦��Ϊ1����һ���ڵ�ˮƽλ��Ϊ1
    FOR(i,2,m)
    {
        len[i] = sum + i-1; //����ʽ��
        sum += len[i];
        pos[i] = len[i] + 1;//˳��õ���i���һ���ڵ��ˮƽλ��
    }
    h[m] = 1;
    for(int i = m-1; i ;i --) h[i] = h[i+1]+len[i]+1;//�õ���i�����ֱλ��
    memset(a,' ',sizeof(a)); //ȫ�������ո�
}

//����
void draw(int x,int y,int depth)
{ 
    a[x][y] = 'o'; //���ڵ�
    if(depth == 1) return;  //��Ҷ�ӽڵ��ˣ�����
    //��ʼ����֦��lx,ly��λ����֦��rx,ry��λ����֦
    int lx = x+1,ly = y-1,rx = x+1,ry = y+1;
    FOR(i,1,len[depth-1])
	{ //ע�⻭����֦����Ϊ��һ�����֦����
        a[lx][ly] = '/';
        a[rx][ry] = '\\';
        lx = lx+1,ly = ly-1,rx = rx+1,ry = ry+1;
    }
    draw(lx,ly,depth-1);   //����һ��ڵ�
    draw(rx,ry,depth-1);
}

//ɾ��
void destroy(int x,int y){
    a[x][y] = ' ';           //���õ���Ϊ�ո�
    if(a[x-1][y-1] == '\\') destroy(x-1,y-1);         //���Ͻ�
    if(a[x-1][y+1] == '/') destroy(x-1,y+1);          //���Ͻ�
    if(a[x+1][y-1] == '/' || a[x+1][y-1] == 'o') destroy(x+1,y-1); //���½ǣ���Ϊ���»�Ҫɾ�����ӽڵ㣬Ҫ��һ���ж�
    if(a[x+1][y+1] == '\\'|| a[x+1][y+1] == 'o') destroy(x+1,y+1); //���½�ͬ��
}

//��ӡ
void print(){
    int height = h[1];          //��һ�����ֱλ��
    int width = 6 * (1<<(m-1)); //��һ��Ŀ�ȣ����
    FOR(i,1,height){
        FOR(j,1,width)
            printf("%c",a[i][j]);
        printf("\n");
    }
}

int main(){
    cin>>m>>n;
    int i,j;
    prepare();
    draw(1,pos[m],m); //(1��pos[m])Ϊ���ڵ����꣬λ�ڵ�m��
    
	while(n--)
	{
        cin>>i>>j;
        if(i > 10) continue;
        int x = h[m+1-i],y; //��Ϊ��Ķ�������Ŀ��ͬ����ת��һ��
        //�ֵ�һ��������������������ˮƽλ��y
        if(i == m)
		{ 
            if(j & 1) y = pos[1] + j/2*6;
            else y = pos[1] + j/2*6 - 2;
        }
        else y = pos[m+1-i] + (j-1)* (2 * len[m+1-i] + 2); //��������
        destroy(x,y);
    }
    
    print();
    return 0;
}
