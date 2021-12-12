////Write a program that contains a �Dog� class whose data consists of int Idand a static int cnt that keeps track of how many dogs have been created.The Dog class should contain default constructor  that sets the Id value with the updated vale of cntand prints a message : cout << �dog #Id : � << X[i].Id.The Dog class should also have a copy constructor that updates cnt and assigns it to the Id# of constructed dog.The copy constructor should output the Id# of the constructed object.The Dog class should have a destructor that reduces the cnt value each time a �Dog� goes out of scope.The destructor should print the Id# of the �dog� that goes out of scope.
////a.Create a list array of dogs(size 8).
////b.Output the Id values of all the dogs
//////c.After creating the Dog list, insert a new dog into location #5.
//////d.Explain the stream of outputs that this problem creates.
//#include <iostream>
//#include <algorithm>
//#include <list>
//using namespace std;
//class Dog {
//public:
//		int Id;
//		static int cnt;
//		Dog() :Id(cnt++) { cout << "dog #Id : " << Id << endl; };
//		Dog(const Dog& rhs) {cnt = rhs.Id; Id = cnt; cout << "copy consructor Id = " << Id << endl; };
//		~Dog() { cnt--; cout << "Destroyed dog: " << Id << endl;};
//};
//
//int Dog::cnt = 0;
//
//int main() {
//	//string Name;
//	///*****************************************/
//	//cout << "Student Enter Name" << endl;
//	//cin >> Name;
//	//cout << "----------------------------------------------" << endl;
//	//cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
//	//cout << "Student Name: " << Name << endl;
//	//cout << "----------------------------------------------" << endl;
//	///*****************************************/
//	
//	list<Dog> v1(8);
//	Dog D1;
//	int x = 0;
//	for (auto It = v1.begin(); It != v1.end(); It++) {
//		cout << "L1[" << x << "]: " << It->Id << endl;
//		x++;
//	};
//	list<Dog>::iterator It = v1.begin();
//	for (int x = 0; x < 5; x++) {
//		It++;
//	};
//	v1.insert(It, D1);
//	return 0;
//}