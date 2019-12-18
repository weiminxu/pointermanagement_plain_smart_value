#include <iostream>
#include "plain_pointer.h"
#include "value_ptr.h"

using namespace std;

void test_plainpointer()
{
	int i = 42;
	AHasPtr p1(&i, 42);
	AHasPtr p2 = p1;
	cout << p2.get_ptr_val() << endl;

	p1.set_ptr_val(0);
	cout << p2.get_ptr_val() << endl;

	//it is easy to generate wild pointer
	/*
	int* ip = new int(42);
	AHasPtr ptr(ip, 10);
	cout << ptr.get_ptr_val() << endl;
	delete ip;
	cout << ptr.get_ptr_val() << endl;
	*/
}

void test_valuepointer()
{
	int obj = 0;

	CHasPtr ptr1(obj, 42);
	CHasPtr ptr2(ptr1);
	cout << ptr1.get_ptr_val() << ", " << ptr1.get_int() << endl;
	cout << ptr2.get_ptr_val() << ", " << ptr2.get_int() << endl;
}

int main()
{
	//test_plainpointer();
	test_valuepointer();

	return 0;
}