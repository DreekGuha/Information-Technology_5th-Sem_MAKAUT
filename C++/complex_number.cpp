	#include<iostream>//add two complex number
	using namespace std;
	class complex
	{
			private:
					double r;
					double i;
			public:
					complex();
					void add(complex,complex);
					void read();
					void print();

	};
	complex::complex()
	{
		r=i=0;
	}
	void complex:: add(complex op1,complex op2)
	{
		r=op1.r+op2.r;
		i=op1.i+op2.i;
	}
	void complex::print()
	{
		cout<<r<<" + i*"<<i<<endl;
	}
	void complex::read()
	{
		cout<<"Enter the real part for operand"<<endl;
		cin>>r;
		cout<<"Enter the imagenary part for operand"<<endl;
		cin>>i;

	}
	int main()
	{
		complex operand1,operand2,result;
		cout<<"First operand "<<endl;
		operand1.read();
		cout<<"Second operand "<<endl;
		operand2.read();
		result.add(operand1,operand2);
		cout<<"The sum is..."<<endl;
		result.print();
		return 0;
	}
