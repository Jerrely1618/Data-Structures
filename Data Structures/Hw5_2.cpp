//
//#include <iostream>
//#include <string>
//using namespace std;
//struct node { // Node class to represent a node of the linked list.
//    string name;
//    double priceLb;
//    node* leftNext;
//    node* rightNext;
//};	//end of Node
//struct node* new_node(string name,double value){
//	struct node *tmp= new node;
//	tmp->priceLb = value;
//    tmp->name = name;
//	tmp->leftNext = NULL; tmp->rightNext = NULL;
//	return tmp;
//}
//struct node* insert_node(struct node* node,double value, string name){
//	if (node == NULL) {return new_node(name, value); }
//	if (value < node->priceLb){
//		node->leftNext = insert_node(node->leftNext, value,name);
//	}
//	else if (value > node->priceLb){
//		node->rightNext = insert_node(node->rightNext, value,name);
//	}
//	return node;
//}
//void print(struct node *root_node){
//	if (root_node != NULL){
//		print(root_node->leftNext);
//        cout << root_node->name<<endl;
//        cout << root_node->priceLb<<endl;
//		print(root_node->rightNext);
//	}
//}
//void printLetter(struct node *root_node, char letter){
//	if (root_node != NULL){
//		printLetter(root_node->leftNext,letter);
//		if(root_node->name.at(0)>=letter){
//        	cout << root_node->name<<endl;
//		}
//		printLetter(root_node->rightNext,letter);
//	}
//}
//double avgPrice(struct node *root_node,int num){
//	double total1 = 0;
//	double total2 = 0;
//	double total3 = 0;
//	if (root_node != NULL){
//		num++;
//		total1=avgPrice(root_node->leftNext,num);
//        total2+=root_node->priceLb;
//		total3=avgPrice(root_node->rightNext,num);
//	}
//	double total= total1+total2+total3;
//	if(num==1){
//		return total/15;
//	}
//	else { return total; }
//}
//int maingf(){
//	string Name;
//	/*****************************************/
//	cout << "Student Enter Name" << endl;
//	cin >> Name;
//	cout << "----------------------------------------------" << endl;
//	cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
//	cout << "Student Name: " << Name << endl;
//	cout << "----------------------------------------------" << endl;
//	/*****************************************/
//	struct node* root = nullptr;
//    int x = 0;
//    double value = 0;
//    string name;
//    root = insert_node(root,3.1,"Lemon");
//    while(x<14){
//        cout <<"Enter Value: "<<endl;
//		cin >> value;
//        cout <<"Enter name: "<<endl;
//        cin>>name;
//        insert_node(root,value,name);
//        x++;
//    }
//	print(root);
//    double average=avgPrice(root,0);
//	printLetter(root,'M');
//	return 0;
//}
