//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class date{
//	private:
//		double day, month, year;
//	public:
//		//Constructors and destructors
//		date() : day(0), month(0), year(0) { cout << "Default date" << endl; }
//		date(int d, int m, int y) { day = d; month = m; year = y; }
//		date(const date& d1) { day = d1.day; month = d1.month; year = d1.year; }
//		~date() {}
//
//
//		double getYear()const { return year;}
//		double getDay()const { return day;}
//		double getMonth()const { return month;}
//
//		date operator-(const date rhs) { 
//			int nYear = year - rhs.year; 
//			int nMonth = month - rhs.month; 
//			int nDay = day - rhs.day;
//			return date(nDay, nMonth, nYear);
//		}
//};
//
//int maidhjn() {
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
//	double P = 1000.0;
//	double r = 0.05;
//	date issue(6, 1, 2021);
//	date maturity(6, 1, 2031);
//	double resultP;
//
//	date timePassed = maturity - issue;
//
//	resultP = P * (pow((1.0 + r), timePassed.getYear()));
//
//	cout << "The principal at maturity is: $" << resultP << endl;
//
//	return 0;
//};