#include <iostream>
using namespace std;
class Box
{
	double length;
	double breath;
	double height;
	public:
		double getvolume()
		{
			return length*breath*height;
		}
		void setLength(double len)
		{
			length=len;
		}
		void setBreath(double br)
		{
			breath=br;
		}
		void setHeight(double h)
		{
			height=h;
		}
		Box operator+(Box b)
		{
			Box box;
			box.length=this->length+b.length;
			box.breath=this->breath+b.breath;
			box.height=this->height+b.height;
			return box;
		}
};
int main()
{
	Box box1;
	Box box2;
	Box box3;
	double volume=0.0;

	box1.setLength(6.0);
	box1.setBreath(7.0);
	box1.setHeight(5.0);

	box2.setLength(12.0);
	box2.setBreath(13.0);
	box2.setHeight(10.0);
	
	volume=box1.getvolume();
	cout<<"Volume of box 1 is "<<volume<<endl;

	volume=box2.getvolume();
	cout<<"Volume of box 2 is "<<volume<<endl;

	box3=box1+box2;

	volume=box3.getvolume();
	cout<<"Volume of box 3 is "<<volume<<endl;
	
	return 0;
}
