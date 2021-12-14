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