//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main() {
//	string Name;
//	/*****************************************/
//	cout << "Student Enter Name" << endl;
//	getline(cin, Name);
//	cout << "----------------------------------------------" << endl;
//	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
//	cout << "Student Name: " << Name << endl;
//	cout << "----------------------------------------------" << endl;
//	/*****************************************/
//	map<string, int> m1;
//	string a;
//	int i = 0;
//	int cnt;
//	int word = 0;
//	getline(cin, a);
//
//	for (int x = 0; x < a.length(); x++) {
//		if ((a[x] == ' ')||(a[x]==',')||(a[x]=='.')) { word++; }
//	}
//	word++;
//	for (int y = 0; y < word; y++) {
//		string b = "";
//		cnt = 0;
//		for (int x = i; x < a.length(); x++) {
//			if (isalpha(a[i])) {
//				b += a[i];
//				cnt++;
//			}
//			else { i++; break; }
//			i++;
//		}
//		if (cnt != 0) {
//			m1[b] = cnt;
//		}
//	}
//
//	for (auto x = m1.rbegin(); x != m1.rend(); x++) {
//		i = 0;
//		int frequency = 0;
//		for (int e = 0; e < word; e++) {
//			string b = "";
//			for (int c = i; c < a.length(); c++) {
//				if (isalpha(a[i])) {
//					b += a[i];
//				}
//				else { i++; break; }
//				i++;
//			}
//			if (x->first == b) {
//				frequency++;
//			}
//		}
//		cout << x->first << " " << frequency << endl;
//	}
//
//	return 0;
//}