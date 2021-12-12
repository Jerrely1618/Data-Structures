////•	Create integer list of size 24
////o	insert elements from - 3 to 29
////o	using iterator print out all nodes
////o	remove all  elements divisible by 3
////o	using iterator print out all nodes
//
//#include <iostream>
//#include <list>
//using namespace std;
//bool divisible(const int& num) {
//	return num % 3 == 0;
//}
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
//	list<int> l1(33);
//	int x = -3;
//	cout << "Nums in list: " << endl;
//	for (auto It = l1.begin(); It != l1.end(); It++) {
//		*It = x;
//		x++;
//		cout << *It << endl;
//	}
//	l1.remove_if(divisible);
//	cout << endl << endl << "After removing num divisible by 3: " << endl;
//	for (auto It = l1.begin(); It != l1.end(); It++) {
//		cout << *It << endl;
//	}
//	return 0;
//}