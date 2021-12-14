//#include <iostream>
//#include <map>
//using namespace std;
//template<typename P>
//
//class Mtx { // class for matrix
//	int nrows; // number of rows
//	int ncols; // number of columns
//	P** ets; // pointer to array of (int) pointers
//
//public:
//	Mtx(int, int, P**); // construct a matrix
//	Mtx(int, int, P = 0); // construct a matrix
//	Mtx(const Mtx&); // copy constructor
//	~Mtx(); // destructor
//	int numrows() const { return nrows; } // return number of rows
//	int numcols() const { return ncols; } // return number of columns
//	P* operator[](int i)const { return ets[i]; } // returns row i
//	void swap(int i, int j); //swap rows
//	Mtx& operator=(const Mtx& rhs); //Assignement overloaded operator
//	Mtx<P> operator+(const Mtx& rhs); //overloaded + operator
//};
//
//// end of matrix class
//
////member function definitions
//template<typename P>
//Mtx<P>::Mtx(int n, int m, P** dbp) { // define members in Mtx
//	nrows = n;
//	ncols = m;
//	ets = new P* [nrows]; // array of int pointers to nrows
//
//	for (int i = 0; i < nrows; i++) {
//		ets[i] = new P[ncols]; //create array of size [cols]
//		for (int j = 0; j < ncols; j++)
//			ets[i][j] = dbp[i][j]; //fill array with external array
//	}
//
//}
//template<typename P>
//Mtx<P>::Mtx(int n, int m, P a) {
//	ets = new P* [nrows = n];
//
//	for (int i = 0; i < nrows; i++) {
//		ets[i] = new P[ncols = m];
//		for (int j = 0; j < ncols; j++) ets[i][j] = a; //constant value
//	}
//
//}
//template<typename P>
//Mtx<P>::~Mtx() { // destructor
//
//	for (int i = 0; i < nrows; i++) delete[] ets[i]; //delete ith row
//	delete[] ets; //delete array of pointers
//
//}
//template<typename P>
//Mtx<P>& Mtx<P>::operator=(const Mtx& rhs) {
//
//	if (this != &rhs) {
//		delete[]ets;
//		nrows = rhs.nrows;
//		ncols = rhs.ncols;
//		ets = new P* [nrows]; // array of int pointers to nrows
//
//		for (int i = 0; i < nrows; i++) {
//			ets[i] = new P[ncols]; //create array of size [cols]
//			for (int j = 0; j < ncols; j++)
//				ets[i][j] = rhs[i][j]; //fill array with external array
//		}
//	}
//
//	return *this;
//
//}
//template <typename P>
//Mtx<P> Mtx<P>:: operator+(const Mtx& rhs) {
//
//	if (rhs.nrows != nrows || rhs.ncols != ncols) {
//		cout << "Matrix Sizes don't match" << endl;
//		exit(1);
//	}
//
//	Mtx<P> T(nrows, ncols); //create temp matrix
//
//	for (int i = 0; i < nrows; i++) {
//		for (int j = 0; j < ncols; j++) {
//			T.ets[i][j] = ets[i][j] + rhs[i][j];
//		} //add matrix components
//	}
//	return T;
//}
//
//int main() {
//	//string Name;
//	///*****************************************/
//	//cout << "Student Enter Name" << endl;
//	//cin >> Name;
//	//cout << "----------------------------------------------" << endl;
//	//cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
//	//cout << "Student Name: " << Name << endl;
//	//cout << "----------------------------------------------" << endl;
//	///*****************************************/
//
//	Mtx<int> A(8, 8, 0);
//	Mtx<int> B(8, 8, 0);
//	Mtx<int> C(8, 8, 0);
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			A[i][j] = i * j;
//			B[i][j] = i + j;
//		}
//	}
//	C = A + B;
//
//	Mtx<float> D(8, 8, 0.0);
//	Mtx<float> E(8, 8, 0.0);
//	Mtx<float> F(8, 8, 0.0);
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			D[i][j] = (float)(i * j);
//			E[i][j] = (float)(i + j);
//		}
//	}
//	F = D + E;
//return 0;
//}