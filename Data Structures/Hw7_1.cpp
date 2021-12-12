//
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//
////SUM function to sum ALL data ELEMENTS
//template <typename T>
//void SUM(T v1) {
//	for (int x = 1; x < 8; x++) {
//		v1[0] += v1[x];
//	}
//	cout << "Sum of the vector: " << v1[0] << endl;
//}
//
//int mgfdaindsff() {
//	string Name;
//	/*****************************************/
//	cout << "Student Enter Name" << endl;
//	cin >> Name;
//	cout << "----------------------------------------------" << endl;
//	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
//	cout << "Student Name: " << Name << endl;
//	cout << "----------------------------------------------" << endl;
//	/*****************************************/
//	vector<int> v1(8);
//	vector<float> v2(8);
//	vector<char> v3(8);
//	vector<string> v4(8);
//
//	//SET VECTORS WITH USER-DEFINED VALUES
//	cout << "int vector: " << endl;
//	for(int y=0;y<8;y++){
//			int z=0;
//			cin>>z;
//			v1[y]=z;
//	}
//	cout << "float vector: " << endl;
//	for(int y=0;y<8;y++){
//			float b=0;
//			cin>>b;
//			v2[y]=b;
//	}
//	cout << "char vector: " << endl;
//	for(int y=0;y<8;y++){
//			char a='a';
//			cin>>a;
//			v3[y]=a;
//	}
//	cout << "string vector: " << endl;
//	for(int y=0;y<8;y++){
//			string c="";
//			cin>>c;
//			v4[y]=c;
//	}
//
//	//SORT BY ASCENDING VALUE
//	int first;
//	for (int x = 0; x < 8; x++) {
//		for (int y = x + 1; y < 8; y++) {
//			if (v1[x] > v1[y])
//			{
//				first = v1[x];
//				v1[x] = v1[y];
//				v1[y] = first;
//			}
//		}
//	}
//	float second;
//	for (int x = 0; x < 8; x++) {
//		for (int y = x + 1; y < 8; y++) {
//			if (v2[x] > v2[y])
//			{
//				second = v2[x];
//				v2[x] = v2[y];
//				v2[y] = second;
//			}
//		}
//	}
//	char third;
//	for (int x = 0; x < 8; x++) {
//		for (int y = x + 1; y < 8; y++) {
//			if (v3[x] > v3[y])
//			{
//				third = v3[x];
//				v3[x] = v3[y];
//				v3[y] = third;
//			}
//		}
//	}
//	string fourth;
//	for (int x = 0; x < 8; x++) {
//		for (int y = x + 1; y < 8; y++) {
//			if (v4[x] > v4[y])
//			{
//				fourth = v4[x];
//				v4[x] = v4[y];
//				v4[y] = fourth;
//			}
//		}
//	}
//
//	//REVERSE THE VECTOR
//	
//	int temp1(0);
//	for (int x = 0; x < 8; x++) {
//		for (int y = x + 1; y < 8; y++) {
//			if (v1[x] < v1[y])
//			{
//				temp1 = v1[x];
//				v1[x] = v1[y];
//				v1[y] = temp1;
//			}
//		}
//	}
//	float temp2(0);
//	for (int x = 0; x < 8; x++) {
//		for (int y = x + 1; y < 8; y++) {
//			if (v2[x] < v2[y])
//			{
//				second = v2[x];
//				v2[x] = v2[y];
//				v2[y] = second;
//			}
//		}
//	}
//	char temp3('a');
//	for (int x = 0; x < 8; x++) {
//		for (int y = x + 1; y < 8; y++) {
//			if (v3[x] < v3[y])
//			{
//				third = v3[x];
//				v3[x] = v3[y];
//				v3[y] = third;
//			}
//		}
//	}
//	string temp4(" ");
//	for (int x = 0; x < 8; x++) {
//		for (int y = x + 1; y < 8; y++) {
//			if (v4[x] < v4[y])
//			{
//				fourth = v4[x];
//				v4[x] = v4[y];
//				v4[y] = fourth;
//			}
//		}
//	}
//
//	//SUM DATA ELEMENTS
//	SUM(v1);
//	SUM(v2);
//	SUM(v3);
//	SUM(v4);
//
//	for (int z = 0; z < 8; z++) {
//		cout << v1[z] << endl;
//	}
//	for (int x = 0; x < 8; x++) {
//		cout << v2[x] << endl;
//	}
//	for (int z = 0; z < 8; z++) {
//		cout << v3[z] << endl;
//	}
//	for (int z = 0; z < 8; z++) {
//		cout << v4[z] << endl;
//	}
//	return 0;
//}