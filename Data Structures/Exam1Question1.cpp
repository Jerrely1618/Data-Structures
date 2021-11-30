//#include <iostream>
//using namespace std;
//	class Poly {
//private:
//	int order;	//order of the polynomial
//	int* coeff;	// pointer to array of coeff on the heap
//				// size of coeff array predicated on (order + 1)
//public:
//	Poly() :order(0) { coeff[0] = 1; };		//default constructor – order=0 & coeff[0] =1
//	Poly(int Order, int Default = 1) { order = Order; coeff[Order + 1] = Default; };	// creates  Nth order poly and inits all coeffs
//	Poly(int Order, int* nCoeff) {
//		order = Order;
//		coeff = nCoeff;
//	};  //creates an Nth polynomial & inits to the values of an external // vector of coefficients 
//	~Poly() {};//  destructor
//	Poly(const Poly& rhs) { coeff = rhs.coeff; order = rhs.order; };// copy constructor
//	Poly& operator=(const Poly& rhs) { coeff = rhs.coeff; order = rhs.order; };//Assignment operator
//
//
//	//mutators  & accessors
//	void set() {
//		for (int x = 0; x < order + 1; x++) {
//			cout << "Enter the coefficient for term " << x << ": ";
//			int currCoeff;
//			cin >> currCoeff;
//			coeff[x] = currCoeff;
//		}
//	}			 // Query user for coefficient values);
//	void set(int Coeff[], int size) { order = size - 1; coeff = Coeff; }; 	 // input coeffs via external coeff vector
//	int getOrder()const { return order; };  		// get order of polynomial
//	int* get()const { return coeff; }; 	      		//returns pointer to coeff array
//
//
//	//overloaded operators
//	Poly operator+(const Poly& rhs) {
//		int highOrder;
//		if (rhs.order > order) {
//			highOrder = rhs.order;
//			int* newCoeff= new int[highOrder];
//			int curr = 0;
//			while (curr < order + 1) {
//				newCoeff[curr] = coeff[curr] + rhs.coeff[curr];
//				curr++;
//			}
//			while (curr < rhs.order + 1) {
//				newCoeff[curr] = rhs.coeff[curr];
//				curr++;
//			}
//			Poly newPoly(highOrder, newCoeff);
//			return newPoly;
//		}
//		else if(rhs.order<order){
//
//			highOrder = order;
//			int* newCoeff = new int[highOrder];
//			int curr = 0;
//			while (curr < rhs.order + 1) {
//				newCoeff[curr] = coeff[curr] + rhs.coeff[curr];
//				curr++;
//			}
//			while (curr < order + 1) {
//				newCoeff[curr] = coeff[curr];
//				curr++;
//			}
//			Poly newPoly(highOrder, newCoeff);
//			return newPoly;
//		}
//		else {
//			highOrder = order;
//			int* newCoeff = new int[highOrder];
//			int curr = 0;
//			while (curr < rhs.order + 1) {
//				newCoeff[curr] = coeff[curr] + rhs.coeff[curr];
//				curr++;
//			}
//			Poly newPoly(highOrder, newCoeff);
//			return newPoly;
//
//		}
//	};		// add two polynomials
//	Poly operator-(const Poly& rhs) {
//		int highOrder;
//		if (rhs.order > order) {
//			highOrder = rhs.order;
//			int* newCoeff = new int[highOrder];
//			int curr = 0;
//			while (curr < order + 1) {
//				newCoeff[curr] = coeff[curr] - rhs.coeff[curr];
//				curr++;
//			}
//			while (curr < rhs.order + 1) {
//				newCoeff[curr] = -rhs.coeff[curr];
//				curr++;
//			}
//			Poly newPoly(highOrder, newCoeff);
//			return newPoly;
//		}
//		else if (rhs.order < order) {
//			highOrder = order;
//			int* newCoeff = new int[highOrder];
//			int curr = 0;
//			while (curr < rhs.order + 1) {
//				newCoeff[curr] = coeff[curr] - rhs.coeff[curr];
//				curr++;
//			}
//			while (curr < order + 1) {
//				newCoeff[curr] = coeff[curr];
//				curr++;
//			}
//			Poly newPoly(highOrder, newCoeff);
//			return newPoly;
//		}
//		else {
//			highOrder = order;
//			int* newCoeff = new int[highOrder];
//			int curr = 0;
//			while (curr < rhs.order + 1) {
//				newCoeff[curr] = coeff[curr] - rhs.coeff[curr];
//				curr++;
//			}
//			Poly newPoly(highOrder, newCoeff);
//			return newPoly;
//
//		}
//	
//	};		// subt two polynomials
//	//Poly operator*(const Poly& rhs);		// mult two polynomials
//	Poly operator*(const int scale) {
//		int curr = 0;
//		int highOrder = order;
//		int* newCoeff = new int[highOrder];
//		while (curr < order + 1) {
//			newCoeff[curr] = coeff[curr] * scale;
//			curr++;
//		}
//		Poly newPoly(highOrder, newCoeff);
//		return newPoly;
//	};		// scale a  polynomial
//	bool  operator==(const Poly& rhs) {
//		if (order == rhs.order) {
//			int curr = 0;
//			bool isEqual = true;
//			while (curr < order+1) {
//				if (coeff[curr] != rhs.coeff[curr]) {
//					isEqual = false;
//				}
//				curr++;
//			}
//			return isEqual;
//		}
//		else { return false; }
//	
//	};		// equality operator
//
//
//	const int& operator[ ](int I)const {
//		return coeff[I];
//	};       	// return the nth coefficient		//returns the coeff
//	int& operator[ ](int n){            		// returns the nth coefficient (lhs)
//		return coeff[n];
//	}
//	friend ostream& operator<<(ostream& Out, const Poly& rhs) {
//		int* OutCoeff = rhs.coeff;
//		for (int x = rhs.order; x > -1; x--) {
//			if (OutCoeff[x] != 0) {
//				if (OutCoeff[x] > 0 && x != rhs.order) {
//
//					if (x == 0) {
//						Out <<"+" << OutCoeff[x];
//					}
//					else {
//						Out <<"+" << OutCoeff[x] << "X^" << x;
//					}
//				}
//				else {
//					if (x == 0) {
//						Out << OutCoeff[x];
//					}
//					else {
//						Out << OutCoeff[x] << "X^" << x;
//					}
//				}
//			}
//		}
//		return Out;
//
//	};
//
//	};
//	Poly operator*(const int scale, Poly& rhs) {
//		int curr = 0;
//		int highOrder = rhs.getOrder();
//		int* newCoeff = new int[highOrder];
//		int* oldCoeff = rhs.get();
//		while (curr < highOrder + 1) {
//			newCoeff[curr] = oldCoeff[curr] * scale;
//			curr++;
//		}
//		Poly newPoly(highOrder, newCoeff);
//		return newPoly;
//	};
//	int maind()
//	{
//		string Name;
//		/*****************************************/
//		cout << "Student Enter Name" << endl;
//		cin >> Name;
//		cout << "----------------------------------------------" << endl;
//		cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
//		cout << "Student Name: " << Name << endl;
//		cout << "----------------------------------------------" << endl;
//		/*****************************************/
//
//		int Coeff1[] = { -19,1,-12,3,2 };
//		int Coeff2[] = {-19,1,-6,0,0,7,0,2 };
//		Poly P1(4, Coeff1);
//		Poly P2(7, Coeff2);
//		Poly P3 = P1 + P2;
//		Poly P4 = P2 - P1;
//		Poly P6 = P1 * 10;
//		Poly P7 = 10 * P1;
//		bool flag = (P1 == P2);
//		int Value = P2[5];
//		P1[3] = Value;
//		int z = P1[5];
//		cout << "P2 = " << P2 << endl;
//		
//		return 0;
//	};
