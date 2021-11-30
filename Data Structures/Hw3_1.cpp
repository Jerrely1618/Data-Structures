//#include <iostream>
//#include <string>
//using namespace std;
//	
//class Animal {
//private:
//	int weight;
//	int age;
//public:
//	//Constructors and destructors
//	Animal(): age(0),weight(0) { cout << "Animal default contructor." << endl; };
//	Animal(int a, int w) { age = a; weight = w; };
//	~Animal() {};
//	Animal(const Animal& d1) { weight = d1.weight; age = d1.age;}
//
//
//	void talk1() { cout << "I can eat." << endl; };
//	void talk2() { cout << "I can sleep." << endl; };
//	void showData() { cout << "Age: " << age << endl; cout << "Weight: " << weight << " lb" <<endl; };
//	Animal& operator=(Animal &animal1) {
//		weight = animal1.weight;
//		age = animal1.age;
//		return *this;
//	};
//};
//
//class Dog : public Animal{
//	private:
//		string specie;
//	public:
//		//Constructors and destructors
//		Dog(): specie("Normal") { cout << "Default contructor successfully." << endl; };
//		Dog(string s) { specie = s;};
//		~Dog() {};
//		Dog(const Dog& d1) { specie = d1.specie;}
//
//
//		void talkDog() { cout << "I am a dog" << endl << "Specie: " << specie << endl; }
//		Dog & operator=(Dog &animal1) {
//			specie = animal1.specie;
//			return *this;
//		};
//};
//
//
//int mainh() {
//	string Name;
//	/*****************************************/
//	cout << "Student Enter Name" << endl;
//	cin >> Name;
//	cout << "----------------------------------------------" << endl;
//	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
//	cout << "Student Name: " << Name << endl;
//	cout << "----------------------------------------------" << endl;
//	/*****************************************/
//	Animal Max(9, 30);
//	Max.talk1();
//	Max.talk2();
//	Max.showData();
//	Animal Batman(2, 20);
//	Max = Batman;
//	Max.showData();
//
//	Dog Bruno("bulldog");
//	Bruno.talkDog();
//	Dog Mike("Chihuahua");
//	Bruno = Mike;
//	Bruno.talkDog();
//
//
//	return 0;
//};