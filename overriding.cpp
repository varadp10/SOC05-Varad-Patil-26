#include <iostream>
using namespace std;

class Person
{
	private:
	int age;

	public:

	void eat()
	{
	cout<<"The person is eating";
	}
};

class Doctor: public Person
{
	public:
	void eat()
	{
	cout<<"The doctor is eating";
	}
};

int main()
{
	Doctor d;
	Person p;
	d.eat();
	p.eat();
	return 0;
}

