//	Create program that creates arrays of size 8 for the following data types(use STLvector template) :
//		...ints, floats, chars, strings, pairs
//		...initializes these arrays with user - defined values
//		...sorts the arrays by ascending value
//		...reverses the values of the sorted arrays
//		...passes the arrays to a function Sum() that  calculates the sum of all the data elements

#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
void SUM(T v1) {
	for (int x = 1; x < 8; x++) {
		v1[0] += v1[x];
	}
	cout << "Sum of the vector: " << v1[0] << endl;
}


int asdmaifsdfsan() {
	string Name;
	/*****************************************/
	cout << "Student Enter Name" << endl;
	cin >> Name;
	cout << "----------------------------------------------" << endl;
	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
	cout << "Student Name: " << Name << endl;
	cout << "----------------------------------------------" << endl;
	/*****************************************/
	vector<int> v1(8);
	vector<float> v2(8);
	vector<char> v3(8);
	vector<string> v4(8);
	vector<pair<int,char>> v5(8);
	for(int y=0;y<8;y++){
			int z=0;
			cin>>z;
			v1[y]=z;
	}
	for(int y=0;y<8;y++){
			float b=0;
			cin>>b;
			v2[y]=b;
	}
	for(int y=0;y<8;y++){
			char a='a';
			cin>>a;
			v3[y]=a;
	}
	for(int y=0;y<8;y++){
			string c="";
			cout << "c" << c << endl;
			cin>>c;
			v4[y]=c;
	}
	for(int y=0;y<8;y++){
			pair<int,char> d;
			cin>>d.first;
			cin >> d.second;
			v5[y]=d;
	}
	int temp(0);
	for (int x = 0; x < 8; x++){
		for (int y = x + 1; y < 8; y++){
			if (v1[x] > v1[y])
			{
				temp = v1[x];
				v1[x] = v1[y];
				v1[y] = temp;
			}
		}
	}
	temp = 0;
	for (int x = 0; x < 8; x++) {
		for (int y = x + 1; y < 8; y++) {
			if (v1[x] < v1[y]){
				temp = v1[x];
				v1[x] = v1[y];
				v1[y] = temp;
			}
		}
	}
	SUM(v1);

	for (int z = 0; z < 8; z++) {
		cout << v1[z] << endl;
	}
	return 0;
}