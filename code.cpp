#include <iostream>
#include <string.h>
using namespace std;

class Book
{
	private:
	char* bookname;
	double price;
	int number;
	
	public:
	int borrow();
	int restore();
	void display();
	Book(char*,double,int);
	Book (const Book &n);
	~Book();
} ;
Book::Book(const Book &n)
{
	bookname=n.bookname;
}
Book::Book(char* name,double x,int y)
{
	bookname=new char[20]; //bookname指向新的地址，防止后面name更改，也导致bookname的更改。
//	bookname=name;//同时复制地址和内容，则会导致上一行失效。
	strcpy(bookname,name);//只复制内容。
	price=x;
	number=y;
}
int Book::borrow()
{
	number--;
	return number;
	
}
int Book::restore()
{
	number++;
	return number;
	
}
void Book::display()
{
	cout<<bookname<<" "<<price<<" "<<number<<endl;
}
Book::~Book()
{
	delete[]bookname;//just test 
	cout<<"xigou";
}
int main()
{
	char name[20]="C++";
	Book book1(name,23.5,3);
	strcpy(name,"Data Structure");
	Book book2(name,28.8,7);
	book1.borrow();
	book1.display();
	book2.restore();
	book2.display();
	return 0;
}
