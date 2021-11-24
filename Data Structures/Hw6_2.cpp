//2.	Create template for the array class so that one can create an array of
// arbitrary size for ints, floats, chars, etc.The class should contain
// ...default / parametrized constructor, copy constructor, destructor, 
//...overloaded assignment operator,  
//...index operator, 
//...insertion and extractor operators.
#define N 64
#include <iostream>
using namespace std;
template<typename T>

class Array {
private:
    T* pType;
    int  itsSize;
public:
    // constructors
    Array(int size) :itsSize(size) {
        pType = new T[size];
        for (int x = 0; x < size; x++) {
            pType[x] = 0;
        }
    };
    Array(const Array& rhs) { itsSize = rhs->itsSize; pType = rhs->pType; };//copy constructor
    ~Array() { delete[] pType; };       //destructor

    // operators
    Array& operator=(const Array& rhs) { 
        Array& nArray; 
        nArray->itsSize = rhs->itsSize; 
        nArray->pType = rhs->pType; 
        return nArray;
    };
    T& operator[](int offSet) { return pType[offSet];};
    const T& operator[](int offSet) const { return pType[offSet]; }; //works with const objects

    // friend function
    friend ostream& operator<< (ostream& out, const Array<T>& rhs) {
        out << rhs->GetitsSize;
        return out;
    };
    friend istream &operator>>( istream  &input, Array<T> &D ) { 
         input >> D.itsSize;
         return input;            
    }
};

int mainsnbv() {
	string Name;
	/*****************************************/
	cout << "Student Enter Name" << endl;
	cin >> Name;
	cout << "----------------------------------------------" << endl;
	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
	cout << "Student Name: " << Name << endl;
	cout << "----------------------------------------------" << endl;
	/*****************************************/
	

	return 0;
}