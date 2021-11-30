///*
//1.	Write a short program that reads phrases from the input stream and stores each
//new line into an array of  C++ strings.  For each new line, the program computes
//the numeric sum value of each phrase terminated with ‘\n’. For the following 
//section of the Gettysburg Address store the numeric values of each phrase into 
//a int cnt[32] array.
//"Four score and seven years ago our fathers brought forth upon this continent,",
//"a new nation, conceived in Liberty, and dedicated to the proposition that all",
//"men are created equal.",
// "Now we are engaged in a great civil war, testing whether that nation, or any",
//"nation so conceived and so dedicated, can long endure. We are met on a great",
//"battle-field of that war. We have come to dedicate a portion of that field,",
//"as a final resting place for those who here gave their lives that that nation",
//"might live. It is altogether fitting and proper that we should do this."
//
//*/
//#include <iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//
//
//int mainfgry() {
//
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
//
//	char* currentPhrase[9];
//	int cnt[32];
//	char a[188];
//
//	for (int x = 0; x <= 8; x++) {
//		int index = 0;
//		cin.getline(a, 188, '\n');
//		cnt[x] = 0;
//		currentPhrase[x] = a;
//		while ((currentPhrase[x][index] != '\0')) {
//			cnt[x] += currentPhrase[x][index];
//			index++;
//		};
//	}
//	for (int x = 1; x < 9; x++) {
//		cout << "Phrase "<< x << " has: " << cnt[x] << endl;
//	}
//	return 0;
//};