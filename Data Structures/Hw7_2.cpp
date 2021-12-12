//#include <iostream>
//#include <vector>
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
//	vector<Dog> v1(8);
//	
//	//Print vector list(IDs)
//	for (int x = 0; x < 8; x++) {
//		cout << "v[" << x << "] :" << v1[x].Id << endl;
//	};
//
//	//Create new dog
//	Dog firstDog;
//
//	//Insert the new Dog
//	v1.insert(v1.begin()+4, firstDog);
//	
//	//Print vector list after new dog (IDs)
//	for (int x = 0; x < v1.size(); x++) {
//		cout << "v[" << x << "] :" << v1[x].Id << endl;
//	};
//	return 0;
//}
