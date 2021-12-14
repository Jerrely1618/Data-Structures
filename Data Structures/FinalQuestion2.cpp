//Write a C++ program that utilizes STL to manipulate a portfolio of bonds.
//
//The bonds are defined as follows :
//
//struct bond {
//
//	char name[32]; //bond name (e.g. NYC Water Authority)
//	unsigned int maturity; //maturity year
//	float principal;
//	float R; //interest rate
//
//};
//
//You need to solve the following problem :
//
//· Input 20 bonds from the console and provide their names, year to maturity, interest rate, and principal value.You should input various bonds
//  to have the same name(e.g.NYC Water Authority).Make sure that you provide a wide range of maturity dates, principal values and interest rates for each entry
//· Insert each new bond into a STL list container
//
//· After completing inserting all you data you should :
//
//o Provide a count of how many bonds in your portfolio have the same name(e.g.NYC Water Authority, etc)
//§ You will need to provide a second list container that contains nodes having unique names and frequency count
//o Print all the bonds(with associated member data)
//o Print all bonds in ascending order of their interest rate
//o Print the minimumand maximum principal values of the entire bond portfolio
//o Take the range of bond principalsand create a 5 element histogram array that indicates how many bonds fall within each slot value
//
//o The Bond Names should be one of these candidates :
//
//§ NYC Water Authority
//§ Nuveen High Yield Municipal
//§ Delaware National High Yield
//§ Lord Abbett High Yield
//§ BNY Mellon High Yield
//§ PIMCO High Yield Municipal
#include <iostream>
#include <string>
#include <list>
using namespace std;

struct bond {

	char name[32]; //bond name (e.g. NYC Water Authority)
	unsigned int maturity; //maturity year
	float principal;
	float R; //interest rate

};

int main()
{
	//string Name;
	///*****************************************/
	//cout << "Student Enter Name" << endl;
	//cin >> Name;
	//cout << "----------------------------------------------" << endl;
	//cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
	//cout << "Student Name: " << Name << endl;
	//cout << "----------------------------------------------" << endl;
	///*****************************************/
	bond B1 = { "NYC Water authrotiy",2010,1654,6.2 };
	bond B2 = { "Nuveen High",2009,1659.3,1.5 };
	bond B3 = { "Delaware National",2020,1566.32,2.2 };
	bond B4 = { "Lord Abbet",2021,9543.1,1.6 };
	bond B5 = { "BNY Mellon",2013,785.2,1.48 };
	bond B6 = { "PIMCO High",2010,796,5.2 };
	bond B7 = { "PIMCO High",2010,4613,6.2 };
	bond B8 = { "Delaware National",1999,7815,9.2 };
	bond B9 = { "PIMCO High",2007,357,9.5 };
	bond B10 = { "Lord Abbet",2006,3259,0.05 };
	bond B11 = { "NYC Water authrotiy",2002,95236,1 };
	bond B12 = { "Nuveen High",2002,7452,8.6 };
	bond B13 = { "Nuveen High",2019,4125,4.2 };
	bond B14 = { "Lord Abbet",2012,6437,4.3 };
	bond B15 = { "PIMCO High",2014,9856.32,0.1 };
	bond B16 = { "NYC Water authrotiy",2015,125.33,0.6 };
	bond B17 = { "NYC Water authrotiy",2017,11.2,3.0 };
	bond B18 = { "BNY Mellon",2017,9999.9,7.2 };
	bond B19 = { "NYC Water authrotiy",2020,10000.9,1.1 };
	bond B20 = { "NYC Water authrotiy",2020,5000.5,1.68};
	list<bond> l1;
	l1.push_back(B1);
	l1.push_back(B2);
	l1.push_back(B3);
	l1.push_back(B4);
	l1.push_back(B5);
	l1.push_back(B6);
	l1.push_back(B7);
	l1.push_back(B8);
	l1.push_back(B9);
	l1.push_back(B10);
	l1.push_back(B11);
	l1.push_back(B12);
	l1.push_back(B13);
	l1.push_back(B14);
	l1.push_back(B15);
	l1.push_back(B16);
	l1.push_back(B17);
	l1.push_back(B18);
	l1.push_back(B19);
	l1.push_back(B20);

	//for (int i = 0; i < 20; i++) {
	//	char name[32] = "NYC Water Authority";
	//	unsigned int maturity = 2015+i;
	//	float principal=1655.3+float(i);
	//	float interest=3.2+float(i);
	//	//cin>>name;
	//	//cout << name << endl;
	//	//cin >> maturity;
	//	//cin >> principal;
	//	//cin >> interest;
	//	bond B2 = { *name,maturity,principal,interest };
	//	
	//	l1.push_back(B2);
	//	list<bond>::iterator IT = l1.begin();
	//	cout << IT->name << endl;
	//}

	for (list<bond>::iterator It = l1.begin(); It != l1.end(); It++) {
		
	
	}



	return 0;
}
