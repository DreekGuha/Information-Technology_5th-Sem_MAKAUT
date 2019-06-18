#include<iostream>
using namespace std;
class shape
{
	public:
		double ar;
		virtual void area()=0; //pure virtual function

};
class circle:public shape
{
	double rad;
	public:
		circle(double r)
		{
			rad=r;
		}
		void area()
		{
			ar=3.14*rad*rad;
			cout<<"area of circle "<<ar<<endl;
		}
};
class triangle:public shape
{
	double height,base;
	public:
		triangle(double h,double b)
		{
			height=h;
			base=b;
		}
		void area()
		{
			ar=0.5*base*height;
			cout<<"area of triangle "<<ar<<endl;
		}
};
class rectangle:public shape
{
	double lenght,bredth;
	public:
		rectangle(double l,double b)
		{
			lenght=l;
			bredth=b;
		}
		void area()
		{
			ar=lenght*bredth;
			cout<<"area of rectangle "<<ar<<endl;
		}
};
int main()
{
	shape *s[3];
	circle c(10.2);
	triangle t(12.5,8.4);
	rectangle r(5.0,8.0);

	s[0]=&c;
	s[1]=&t;
	s[2]=&r;

	for(int i=0;i<3;i++)
		s[i]->area();
	return 0;
}
