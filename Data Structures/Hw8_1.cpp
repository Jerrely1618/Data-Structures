//Write a program that contains a “Dog” class whose data consists of int Idand a static int cnt that keeps track of how many dogs have been created.The Dog class should contain default constructor  that sets the Id value with the updated vale of cntand prints a message : cout << “dog #Id : ” << X[i].Id.The Dog class should also have a copy constructor that updates cnt and assigns it to the Id# of constructed dog.The copy constructor should output the Id# of the constructed object.The Dog class should have a destructor that reduces the cnt value each time a “Dog” goes out of scope.The destructor should print the Id# of the “dog” that goes out of scope.
//a.Create a list array of dogs(size 8).
//b.Output the Id values of all the dogs
//c.After creating the Dog list, insert a new dog into location #5.
//d.Explain the stream of outputs that this problem creates.
//	Write a program that contains a “Dog” class whose data consists of int Id and a static int cnt that keeps track of how many dogs have been created.The Dog class should contain default constructor  that sets the Id value with the updated vale of cntand prints a message : cout << “dog #Id : ” << X[i].Id.The Dog class should also have a copy constructor that updates cnt and assigns it to the Id# of constructed dog.The copy constructor should output the Id# of the constructed object.The Dog class should have a destructor that reduces the cnt value each time a “Dog” goes out of scope.The destructor should print the Id# of the “dog” that goes out of scope.
//a.Create a deque array of dogs(size 8).
//b.Output the Id values of all the dogs
//c.After creating the Dog deque, pop  two dogs from the front.
//d.Explain the stream of outputs that this problem creates
#include <iostream>
using namespace std;


int mainsnbv(int size, char* arr[]) {
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