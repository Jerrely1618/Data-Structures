////	Write a program that contains a �Dog� class whose data consists of int Id and a static int cnt that keeps track of how many dogs have been created.The Dog class should contain default constructor  that sets the Id value with the updated vale of cntand prints a message : cout << �dog #Id : � << X[i].Id.The Dog class should also have a copy constructor that updates cnt and assigns it to the Id# of constructed dog.The copy constructor should output the Id# of the constructed object.The Dog class should have a destructor that reduces the cnt value each time a �Dog� goes out of scope.The destructor should print the Id# of the �dog� that goes out of scope.
////a.Create a deque array of dogs(size 8).
////b.Output the Id values of all the dogs
////c.After creating the Dog deque, pop  two dogs from the front.
////d.Explain the stream of outputs that this problem creates
//#include <iostream>
//#include <algorithm>
//#include <deque>
//using namespace std;
//
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
//int mdsfainfdsfs() {
//	string Name;
//	/*****************************************/
//	cout << "Student Enter Name" << endl;
//	cin >> Name;
//	cout << "----------------------------------------------" << endl;
//	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
//	cout << "Student Name: " << Name << endl;
//	cout << "----------------------------------------------" << endl;
//	/*****************************************/
//	
//	deque<Dog> v1(8);
//	for(int x = 0 ; x<v1.size(); x++){
//		cout << "v["<<x<<"] :"<<v1[x].Id<<endl;
//	}
//	v1.pop_front();
//	v1.pop_front();
//	for (int x = 0; x < v1.size(); x++) {
//		cout << "v[" << x << "] :" << v1[x].Id << endl;
//	}
//	return 0;
//}