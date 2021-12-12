//	Using the map container which contains a string for the  input word and int cnt for the number 
// of chars in each 
// stored word, write an STL program that takes the following phrases from the Gettysburg Address :
//
//“/*Four score and seven years ago our fathers brought forth upon this continent, a new nation, 
//conceived in Liberty, and dedicated to the proposition that all men are created equal.
//Now we are engaged in a great civil war, testing whether that nation, or any nation so conceived
//and so dedicated,can long endure.We are met on a great battle - field of that war.
//We have come to dedicate a portion of that field, 
//as a final resting place for those who here gave their lives that that nation might live.It is
//altogether fitting and proper that we should do this.*/”
// 
//Output in ascending order all the words contained in this speech and their corresponding 
//frequency  value


#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	//string Name;
	///*****************************************/
	//cout << "Student Enter Name" << endl;
	//cin >> Name;
	//cout << "----------------------------------------------" << endl;
	//cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
	//cout << "Student Name: " << Name << endl;
	//cout << "----------------------------------------------" << endl;
	///*****************************************/
	map<string, int> m1;
	string a;
	int i = 0;
	int cnt;
	int word = 0;
	getline(cin, a);

	for (int x = 0; x < a.length(); x++) {
		if ((a[x] == ' ')||(a[x]==',')||(a[x]=='.')) { word++; }
	}
	word++;
	for (int y = 0; y < word; y++) {
		string b = "";
		cnt = 0;
		for (int x = i; x < a.length(); x++) {
			if (isalpha(a[i])) {
				b += a[i];
				cnt++;
			}
			else { i++; break; }
			i++;
		}
		if (cnt != 0) {
			m1[b] = cnt;
		}
	}

	for (auto x = m1.rbegin(); x != m1.rend(); x++) {
		i = 0;
		int frequency = 0;
		for (int e = 0; e < word; e++) {
			string b = "";
			for (int c = i; c < a.length(); c++) {
				if (isalpha(a[i])) {
					b += a[i];
				}
				else { i++; break; }
				i++;
			}
			if (x->first == b) {
				frequency++;
			}
		}
		cout << x->first << " " << frequency << endl;
	}

	return 0;
}