//#include <iostream>
//#include <map>
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
//	map <string, double> m1;
//	m1["Strawberry"] = 2.0;
//	m1["Cantaloupe"] = 1.57;
//	m1["Watermelon"] = 1.9;
//	m1["Banana"] = 3.5;
//	m1["Orange"] = 2.2;
//	m1["Apple"] = 7.3;
//	m1["Tangerine"] = 3.3;
//	m1["Peach"] = 8.6;
//	m1["Grape"] = 6.8;
//	m1["Cherry"] = 5.6;
//	m1["Mango"] = 6.2;
//	m1["Apricot"] = 2.35;
//	m1["Dewberry"] = 1.0;
//	m1["Blueberry"] = 0.3;
//	m1["Fig"] = 2.23;
//	m1["Plums"] = 9.6;
//	m1["Pear"] = 10.2;
//	m1["Tomato"] = 6.3;
//	m1["Coconut"] = 1.15;
//	m1["Kiwi"] = 4.65;
//	map<string, double>::iterator m1It;
//	double max = 0;
//	for (m1It = m1.begin(); m1It != m1.end(); m1It++) {
//		cout << "Fruit: " << m1It->first << "            Weight: " << m1It->second << endl;
//	}
//	map<string, double>::iterator resultMax;
//	for (m1It = m1.begin(); m1It != m1.end(); m1It++){
//		if (m1It->second > max) {
//			resultMax = m1It;
//			max = m1It->second;
//		}
//	}
//	map<string, double>::iterator resultMin;
//	double min = max;
//	for (m1It = m1.begin(); m1It != m1.end(); m1It++) {
//		if (m1It->second < min) {
//			min = m1It->second;
//			resultMin = m1It;
//		}
//	}
//	cout << "The fruit with max weight: " << resultMax->first << "             Weight: " << resultMax->second << endl;
//
//	cout << "The fruit with min weight: " << resultMin->first << "             Weight: " << resultMin->second << endl;
//	return 0;
//}