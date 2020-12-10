#include<stdio.h>
int main()
{
  double d1,n1,n2,n3,n4,n5,a,b,c,d,e;
  while(scanf("%lf %lf %lf %lf %lf",&n1,&n2,&n3,&n4,&n5)!=EOF && n1!=0
       && n2!=0 && n3!=0 && n4!=0 && n5!=0)
  {
    d1=0;
    if(n2-n1==n3-n2 && n3-n2==n4-n3 && n4-n3==n5-n4)
    {d1=n2-n1;
      a=n5+d1;
      b=a+d1;
      c=b+d1;
      d=c+d1;
      e=d+d1;
    }
    else if(n2/n1==n3/n2 && n3/n2==n4/n3 && n4/n3==n5/n4)
    {d1=n2/n1;
     a=n5*d1;
      b=a*d1;
      c=b*d1;
      d=c*d1;
      e=d*d1;
    }
    else if(n1+n2==n3 && n2+n3==n4 && n3+n4==n5)
    {a=n4+n5;
     b=n5+a;
     c=a+b;
     d=b+c;
     e=c+d;
    }
    printf("%.f %.f %.f %.f %.f\n",a,b,c,d,e);
  }
  return 0;
}
