#include "IntegerList.h"
#include <iostream>
using namespace std;

void display(IntegerList b)
{
	for (int i = 0; i < b.getNumElements(); i++)
		cout << b.getElement(i) << endl;
}

int main()
{
	const int SIZE = 5;
	IntegerList a(SIZE);

	// just put some numbers in to test it
	for (int i = 0; i < SIZE; i++)
		a.setElement(i, i * 2);

	cout << "A's values:" << endl;
	display(a);
	IntegerList d();
	IntegerList b(5);
	for (int i = 0; i < 5; i++)
		b.setElement(i, i * 2);
	IntegerList c(9);
	for (int i = 0; i < 9; i++)
		c.setElement(i, i * 3);
	cout << endl;
	display(b);
	cout << endl;
	display(c);
	b = c;
	cout << endl;
	display(b);

	//d(a);


}