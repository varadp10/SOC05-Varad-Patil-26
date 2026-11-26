#include <iostream>
using namespace std;

class Calculator
{
	private:
	int num;

	public:
	int add( int a, int b )
	{
	return a+b;
	}

	int add ( int a, int b, int c )
	{
	return a+b+c;
	}
};

int main()
{
	Calculator c;
	cout<<" Addition of a and b is:"<<c.add(4,5)<<endl;
	cout<<"Addition of a,b and c is:"<<c.add(7,8,5)<<endl;
	return 0;
}

