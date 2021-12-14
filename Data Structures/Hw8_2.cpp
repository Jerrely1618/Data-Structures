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