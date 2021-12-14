//
//#include <iostream>
//#include <vector>
//using namespace std;
//
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
//	vector<int> v1(100);
//	
//	for (int x = 0; x < 100; x++) {
//		v1[x] = x+1;
//	}
//	vector<int>::iterator forward;
//	vector<int>::reverse_iterator backward=v1.rbegin();
//	vector<int>::const_iterator forwardEnd = v1.begin() + 50;
//	for (forward = v1.begin(); forward != forwardEnd; forward++) {
//		cout << *forward << " + " << *backward << " = " << *forward + *backward << endl;
//		backward++;
//	}
//	return 0;
//}