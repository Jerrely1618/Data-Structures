#include <iostream>
using namespace std;


int mains(int size, char* arr[]) {
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