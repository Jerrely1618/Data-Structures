//	Write a program that creates a singly link list of used automobiles containing nodes that describe the model name(string), 
// price(int) and owner’s name.The program should create a list containing 12 nodes created by the user.There are only three types of models(BMW, Cadillac, Toyota)
//  and the prices range from $2500 – $12, 500.  The program should allow the user to provide
//	..Print a printout of all cars contained in the list(model, price, owner)
//	..Provide a histogram(global array) of all cars in the list portioned into $500 buckets
//	..Calculate the average price of the cars contained in the list
//	..Provide the details for all cars more expensive than the average price
//	Remove all nodes having a price less than 25 % of average price
//	Print a printout of all cars contained in the updated list(model, price, owner)
//
//	Write a program that implements a binary tree having nodes that contain the following items :
//  (i)Fruit name(ii) price per lb.The program should allow the user to input any fruit name(duplicates allowed), price.
// The root node should be initialized to{ “Lemon” , $3.00 }.  The program should be able to do the following tasks :
//	create a basket of 15 fruits / prices
//	list all the fruits created(name / price)
//	calculate the average price of the basket
//	print out all fruits having the first letter of their name >= ‘L’
#include <iostream>
using namespace std;

class Node { // Node class to represent a node of the linked list.
public:
    string name;
    int price;
    string owner;
    Node* next;

    // Default constructor
    Node() {
        name = " ";
        price = 0;
        owner = " ";
        next = NULL;
    }

    // Parametrized Constructor
    Node(string  name,int price, string owner) {
        this->name = name;
        this->price = price;
        this->owner = owner;
        this->next = NULL;
    }
};	//end of Node

class Linkedlist {  // Linked list class to implement a linked list.
private:
    Node* head;

public:

    Linkedlist() { head = NULL; }// Default constructor
    void printList() {
        Node* temp = head;
        if (temp == NULL) {
            cout << "Empty List " << endl;
        }
        else {
            while (temp != NULL)
            {
                cout << "Model: " << temp->name << endl;
                cout << "Price: " << temp->price << endl;
                cout << "Owner: " << temp->owner << endl << endl;
                temp = temp->next;
            }
        }
    };
    void printHist() {
        Node* temp = head;
        if (temp == NULL) {
            cout << "Empty List " << endl;
        }
        else {
            int x = 500;
            int y = 0;
            while (y < 25) {
                cout << x << " ";
                if (x > 10000) {
                    cout << "Price " << x - 500 << "-" << x << ": ";
                }
                else if (x == 10000) {
                    cout << "Price " << x - 500 << "-" << x << ":  ";
                }
                else {
                    cout << "Price " << x - 500 << "-" << x << ":    ";
                }
                while (temp != NULL) {
                    if (temp->price <= x && temp->price > x-500) {
                        cout << "*";
                    }
                    temp = temp->next;
                }
                x += 500;
                temp = head;
                cout << endl;
                y++;
            }
        }
    }
    void insertNode(Node* n1) {
        if (head == NULL) {
            head = n1;
        }
        else {
            Node* curr = head;
            while (curr->next != NULL) {
                curr = curr->next;
            }
            curr->next = n1;
        }
    }
    int avgCost() {
        Node* temp = head;
        int total = 0;
        int x = 0;
        if (temp == NULL) {
            cout << "Empty List " << endl;
        }
        else {
            while (temp != NULL)
            {
                x++;
                total += temp->price;
                temp = temp->next;
            }
        }
        return (total / x);
    }
    void details(int avg){
        Node* temp = head;
        if (temp == NULL) {
            cout << "Empty List " << endl;
        }
        else {
            while (temp != NULL)
            {
                if (temp->price > avg) {
                    cout << "Model: " << temp->name << endl;
                    cout << "Price: " << temp->price << endl;
                    cout << "Owner: " << temp->owner << endl << endl;
                }
                temp = temp->next;
            }
        }
    }
    void deleteLess(int avg) {
        Node* temp = head;
        if (temp == NULL) {
            cout << "Empty List " << endl;
        }
        else {
            while (temp != NULL)
            {
                if (temp->price < avg) {
                    cout << "Model: " << temp->name << endl;
                    cout << "Price: " << temp->price << endl;
                    cout << "Owner: " << temp->owner << endl << endl;
                }
                temp = temp->next;
            }
        }
    }
};
int main()
{
	string Name;
	/*****************************************/
	cout << "Student Enter Name" << endl;
	cin >> Name;
	cout << "----------------------------------------------" << endl;
	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
	cout << "Student Name: " << Name << endl;
	cout << "----------------------------------------------" << endl;
	/*****************************************/

    Node n1("Bmw", 2500, "Mike");
    Node n2("Cadillac", 9000, "Alex");
    Node n3("Cadillac", 10000, "Joe");
    Node n4("Toyota", 5000, "Mark");
    Node n5("Bmw", 2750, "Arman");
    Node n6("Cadillac", 9250, "Arcg");
    Node n7("Cadillac", 12000, "Byron");
    Node n8("Toyota", 11500, "Pepe");
    Node n9("Bmw", 2650, "Tyler");
    Node n10("Cadillac", 9030, "Aldo");
    Node n11("Cadillac", 11200, "Peter");
    Node n12("Toyota", 4000, "Erin");

    Linkedlist L1;
    L1.insertNode(&n1);
    L1.insertNode(&n2);
    L1.insertNode(&n3);
    L1.insertNode(&n4);
    L1.insertNode(&n5);
    L1.insertNode(&n6);
    L1.insertNode(&n7);
    L1.insertNode(&n8);
    L1.insertNode(&n9);
    L1.insertNode(&n10);
    L1.insertNode(&n11);
    L1.insertNode(&n12);

    L1.printHist();



	return 0;
}
