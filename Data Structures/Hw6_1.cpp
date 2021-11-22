//1.	Create program that contains the template for the void swap(d1, d2) function where d1and d2 can be ints, float, char, strings.Demonstrate all cases in one program.
//
//2.	Create template for the array class so that one can create an array of arbitrary size for ints, floats, chars, etc.The class should contain default / parametrized constructor, copy constructor, destructor, overloaded assignment operator,  index operator, insertionand extractor operators.
#include <iostream>
using namespace std;


int mainsuyh(int size, char* arr[]) {
	string Name;
	/*****************************************/
	cout << "Student Enter Name" << endl;
	cin >> Name;
	cout << "----------------------------------------------" << endl;
	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
	cout << "Student Name: " << Name << endl;
	cout << "----------------------------------------------" << endl;
	/*****************************************/
	for (int t = 1; t < 17; ++t) {
		cout << arr[t] << endl;
	}
	return 0;
}