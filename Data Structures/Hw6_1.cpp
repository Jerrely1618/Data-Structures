
//2.	Create template for the array class so that one can create an array of
// arbitrary size for ints, floats, chars, etc.The class should contain
// default / parametrized constructor, copy constructor, destructor, overloaded
// assignment operator,  index operator, insertionand extractor operators.
#include <iostream>
using namespace std;
template<typename T>
void swap(T& first, T& second){
	T* temp = first;
	first=second;
	second = temp;
}

int mainsuyh() {
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
	f=2.71828;

	swap(a,b);
	swap(c,d);
	swap(e,f);
	swap(g,h);


	return 0;
}