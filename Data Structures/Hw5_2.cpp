//	..Write a program that implements a binary tree having nodes that contain the following items :
//  (i)Fruit name(ii) price per lb.The program should allow the user to input any fruit name(duplicates allowed), price.
// ..The root node should be initialized to{ �Lemon� , $3.00 }.  The program should be able to do the following tasks :
//	create a basket of 15 fruits / prices
//	..list all the fruits created(name / price)
//	calculate the average price of the basket
//	print out all fruits having the first letter of their name >= �L�-
#include <iostream>
using namespace std;
struct Node { // Node class to represent a node of the linked list.
    string name;
    double priceLb;
    Node* leftNext;
    Node* rightNext;
};	//end of Node
struct node* new_node(string name,double value){
	struct node *tmp = (struct node *)malloc(sizeof(struct node));
	tmp->priceLb = value;
    tmp->name = name;
	tmp->leftNext = tmp->rightNext = NULL;
	return tmp;
}
struct node* insert_node(struct node* node,double value){
	if (node == NULL) return new_node(value);
	if (value < node->priceLb){
		node->leftNext = insert_node(node->leftNext, value);
	}
	else if (value > node->priceLb){
		node->rightNext = insert_node(node->rightNext, value);
	}
	return node;
}
void print(struct node *root_node){
	if (root_node != NULL){
		print(root_node->leftNext);
        cout << root_node->name<<endl;
        cout << root_node->priceLb<<endl;
		print(root_node->rightNext);
	}
}
double avgPrice(struct node *root_node, double curr){
	double total = curr; 
    if (root_node != NULL){
		avgPrice(root_node->leftNext, total);
        total+=root_node->priceLb;
		avgPrice(root_node->rightNext,total);
	}
    double avg = total/15;
    return avg;
}
int mainw(){
	string Name;
	/*****************************************/
	cout << "Student Enter Name" << endl;
	cin >> Name;
	cout << "----------------------------------------------" << endl;
	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
	cout << "Student Name: " << Name << endl;
	cout << "----------------------------------------------" << endl;
	/*****************************************/
	struct Node* root = NULL;
    int x = 0;
    double value = 0;
    string name;
    root = insert_node(root,3.0,"Lemon");
    while(x<14){
        cout <<"Enter Value: "<<endl;
        scanf("%d",value);
        cout <<"Enter name: "<<endl;
        cin>>name;
        insert_node(root,value,name);
        x++;
    }
    print(root);
    double average=avgPrice(root,0);

	return 0;
}
