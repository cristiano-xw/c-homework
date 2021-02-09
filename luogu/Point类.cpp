#ifndef_POINT_H
#define_point_h
class point 
{
	public:
		point (float x=0;float y=0):x(x),y(y){}
	const float getx() {return x;}
	const float gety() {return y;}
	private :
		float x,y;
};
#endif
