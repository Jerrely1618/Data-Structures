
#include <iostream>
using namespace std;
template<typename T>
void Swap(T* first, T* second){
	T temp = *first;
	*first = *second;
	*second = temp;
}

int maijhgjn() {
	string Name;
	/*****************************************/
	cout << "Student Enter Name" << endl;
	cin >> Name;
	cout << "----------------------------------------------" << endl;
	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
	cout << "Student Name: " << Name << endl;
	cout << "----------------------------------------------" << endl;
	/*****************************************/
	int a,b;
	char c,d;
	float e,f;
	string g = "Hello";
	string h = "Goodbye";
	a=2;
	b=9;
	c='s';
	d='h';
	e=3.14;
	f=2.71;

	Swap(&a, &b);
	Swap(&c, &d);
	Swap(&e, &f);

	cout << a << " " << b << endl;

	cout << c << " " << d << endl;

	cout << e << " " << f << endl;

	return 0;
}