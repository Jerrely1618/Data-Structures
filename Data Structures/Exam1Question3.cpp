//#define N 64
//#include <iostream>
//using namespace std;
//template<class T>
//
//class Array {
//private:
//    T* pType;
//    int  itsSize;
//public:
//    // constructors
//    Array(int size) :itsSize(size) {
//        pType = new T[size];
//        for (int x = 0; x < size; x++) {
//            pType[x] = 0;
//        }
//    };
//    Array(const Array& rhs) { itsSize = rhs->itsSize; pType = rhs->pType; };//copy constructor
//    ~Array() { delete[] pType; };       //destructor
//
//    // operators
//    Array& operator=(const Array& rhs) { 
//        Array& nArray; 
//        nArray->itsSize = rhs->itsSize; 
//        nArray->pType = rhs->pType; 
//        return nArray;
//    };
//    T& operator[](int offSet) { return pType[offSet];};
//    const T& operator[](int offSet) const { return pType[offSet]; }; //works with const objects
//
//    // accessors
//    int GetitsSize() const { return itsSize; }
//
//    // friend function
//    friend ostream& operator<< (ostream& out, const Array<T>& rhs) {
//        out << rhs->GetitsSize;
//        return out;
//    };
//
//    //Overloaded arithmetic operators
//    void operator++() {
//        for (int x = 0; x < itsSize; x++) {
//            pType[x]+=1;
//        }
//    };		//increments each element of array by one 
//
//
//
//};
//
//int maidasnd()
//{
//	string Name;
//	/*****************************************/
//	cout << "Student Enter Name" << endl;
//	cin >> Name;
//	cout << "----------------------------------------------" << endl;
//	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
//	cout << "Student Name: " << Name << endl;
//	cout << "----------------------------------------------" << endl;
//	/*****************************************/
//    Array<int>X(16);
//    Array<float>Y(16);
//    Array<char>C(16);
//
//    cout << "Int : " << endl;
//    for (int x = 0; x < 16; x++) {
//        X[x] = x + x;
//        cout << X[x] << " ";
//    };
//    cout << endl;
//    cout << "Float: " << endl;
//    for (float x = 0; x < 16; x++) {
//        Y[x] = x+x;
//        cout << Y[x] << " ";
//    };
//    cout << endl;
//    char c = 'a';
//    cout << "Char: " << endl;
//    for (int x = 0; x < 16; x++) {
//        C[x] = c;
//        cout << C[x] << " ";
//        c++;
//    };
//    cout << endl;
//
//    
//    int value = X[4];
//    Y[5] = Y[6] + Y[7];
//    cout << "Value: " << value << endl;
//    cout << "Y[5]: " << Y[5] << endl;
//
//    float scalar = 4;
//    cout << "Scalar work: " << endl;
//    for (int i = 0; i < 16; i++) {
//        Y[i] = 4 * Y[i];
//        cout << Y[i] << " ";
//    };
//
//
//	return 0;
//};
