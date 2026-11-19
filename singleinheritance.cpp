#include <iostream>
using namespace std;

class Person
{
	public:
	int age;
	string name;

	void getdata()
	{
	cout<<"Enter age";
	cin>>age;
	cout<<"Enter name";
	cin>>name;
	}

	void display()
	{
	cout<<"The name is:"<<name;
	cout<<"The age is:"<<age;
	}
};

class Student:public Person
{
	public:
	int roll_no;
	float marks;

	void input()
	{
	cout<<"input roll no:";
	cin>>roll_no;
	cout<<"input marks";
	cin>>marks;
	}

	void display1()
	{
	cout<<"the roll no is:"<<roll_no;
	cout<<"The marks are:"<<marks;
	}
};

int main()
{
	Student s;
	s.getdata();
	s.display();
	s.input();
	s.display1();
	return 0;
}
