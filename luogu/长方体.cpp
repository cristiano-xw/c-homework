#include<bits/stdc++.h> 
using namespace std;

class vol
{
protected :
    int length;
    int width;
    int height;
    
public:
    vol(int l,int w,int h)
    {
        length = l;
        width=w;
        height=h;
    }
    
    int getperimeter()
    {
        int perimeter = (length*width*height);
        return perimeter;
    }
    void showperimeter()
    {
        cout << "����������" << getperimeter() << endl;
    }
};

class surface
{
private:
	int length; int width; int height;
	 
public:
    surface(int l,int w,int r):length(l), width(w),height(r)
    {}
    int getperimeter()
    {
        int perimeter = 2*(length*width+height*width+length*height);
        return perimeter;
    }
    void showperimeter()
    {
        cout << "������ı������" << getperimeter() << endl;
    }
};

int main()
{
	cout<<"���볤���";
	int a=0;int b=0;int c=0;
	cin>>a>>b>>c;
	cout<<"����߷ֱ�Ϊ"<<a<<" "<<b<<" "<<c<<" "<<endl;
    vol *s = new vol(a,b,c);
    s->getperimeter();
    s->showperimeter();
    surface* r = new surface(a,b,c);
    r->getperimeter();
    r->showperimeter();
return 0;
}

