///*
//
//2.	Write a program that counts the number of letters in each word of the 
//Gettysburg Address and stores these values into a histogram array. 
//The histogram array should contain 10 elements representing word lengths
//1 – 10. After reading all words in the  Gettysburg Address, output the 
//histogram to the display.
// 
//
//*/
//#include <iostream>
//using namespace std;
//int mahjin() {
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
//	int histogram[11] = { 0,0,0,0,0,0,0,0,0,0 };
//	int wordCnt;
//	char a[50000];
//
//	int index = 0;
//	cin.getline(a, 5000, '\n');
//	cin.getline(a, 5000, '\n');
//	wordCnt = 0;
//	while ((a[index] != '\0')) {
//		if (isalpha(a[index])) {
//			wordCnt++;
//		}
//		else{
//			histogram[wordCnt] += 1;
//			wordCnt = 0;
//		}
//		index++;
//	};
//	histogram[wordCnt] += 1;
//
//	for (int x = 1; x <= 10; x++) {
//		cout << "Words with " << x << " words: ";
//		for (int y = 0; y < histogram[x]; y++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//return 0;
//};