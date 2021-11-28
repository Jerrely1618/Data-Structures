//	Create program that creates arrays of size 8 for the following data types(use STLvector template) :
//		...ints, floats, chars, strings, pairs
//		...initializes these arrays with user - defined values
//		...sorts the arrays by ascending value
//		...reverses the values of the sorted arrays
//		passes the arrays to a function Sum() that  calculates the sum of all the data elements
//		Write a program that contains a �Dog� class whose data consists of int Id and a static int cnt that keeps track of how many dogs have been created.The Dog class should contain default constructor  that sets the Id value with the updated vale of cntand prints a message : cout << �dog #Id : � << X[i].Id.The Dog class should also have a copy constructor that updates cnt and assigns it to the Id# of constructed dog.The copy constructor should output the Id# of the constructed object.The Dog class should have a destructor that reduces the cnt value each time a �Dog� goes out of scope.The destructor should print the Id# of the �dog� that goes out of scope.
//	
//		Create a vector array of dogs(size 8).
//		Output the Id values of all the dogs
//	 After creating the Dog array, insert a new dog into location #5.
//Explain the stream of outputs that this problem creates.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Sum(vector){
}

int mainsbnc() {
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
	vector<pair> v5(8);
	
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
			getline(cin,c);
			v4[y]=c;
	}
	for(int y=0;y<8;y++){
			pair d=0;
			cin>>d;
			v5[y]=d;
	}
	
	sort(v1.begin(),v1.end());

	sort(v2.begin(),v2.end());

	sort(v3.begin(),v3.end());

	sort(v4.begin(),v4.end());

	sort(v5.begin(),v5.end());
	
	reverse(v1.begin(),v1.end());

	reverse(v2.begin(),v2.end());

	reverse(v3.begin(),v3.end());

	reverse(v4.begin(),v4.end());

	reverse(v5.begin(),v5.end());
	return 0;
}