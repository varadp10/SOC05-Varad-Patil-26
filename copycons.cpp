#include<iostream>
using namespace std;

class Book
{
	public:
	int book_id;
	string book_name;

	void display()
	{
	cout<<"The book id is:"<<book_id;
	cout<<"The book name is:"<<book_name;
	}

	Book(int b_id, string b_n)
	{
	book_id=b_id;
	book_name=b_n;
	}

	Book(Book & b)
	{
	book_id=b.book_id;
	book_name=b.book_name;
	}
};

int main()
{
	Book b1(123,"xyz");
	Book b2(b1);
	b1.display();
	b2.display();
	return 0;
}

