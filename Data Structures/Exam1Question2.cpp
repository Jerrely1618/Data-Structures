//#include <iostream>
//#include <string>
//using namespace std;
//
//class Node { // Node class to represent a node of the linked list.
//public:
//    string data;
//    Node* next;
//
//    // Default constructor
//    Node() {
//        data = " ";
//        next = NULL;
//    }
//
//    // Parametrized Constructor
//    Node(string  data) {
//        this->data = data;
//        this->next = NULL;
//    }
//};	//end of Node
//
//
//class Linkedlist {  // Linked list class to implement a linked list.
//private:
//    Node* head;
//
//public:
//    
//    Linkedlist() { head = NULL; }// Default constructor
//
//    void insertNode(Node* n1) {
//        if (head == NULL) {
//            head = n1;
//        }
//        else {
//            Node* curr = head;
//            while (curr->next != NULL) {
//                curr = curr->next;
//            }
//            curr->next = n1;
//        }
//    };
//
//    void insertNode(Node* n1, int t) {
//        Node* curr = head;
//        if (t == 1) {
//            if (head == NULL) {
//                head = n1;
//            }
//            else{
//                Node* first=head;
//                head = n1;
//                n1->next = first;
//            }
//        }
//        else {
//            int x = 0;
//            while (x < t) {
//                    if (x == t-2) {
//                        Node* temp = curr->next;
//                        curr->next = n1;
//                        n1->next = temp;
//
//                    }
//                    else {
//                        if (curr != NULL) {
//                            curr = curr->next;
//                        }
//
//                    }
//                    x++;
//                }
//        }
//
//    };
//
//    void printList() {
//        Node* temp = head;
//        if (temp == NULL){
//            cout << "Empty List " << endl;
//        }
//        else {
//            while (temp != NULL)
//            {
//                cout << "Data: " << temp->data << endl;
//                temp = temp->next;
//            }
//        }
//    };// Function to print the linked list.
//    
//    void printList(char t) {
//        Node* temp = head;
//        if (temp == NULL) {
//            cout << "Empty List " << endl;
//        }
//        else {
//            while (temp != NULL) {
//                int x = 0;
//                bool p = 0;
//                while (x < temp->data.size()) {
//                    if (temp->data.at(x) == t) {
//                        p = 1;
//                    }
//                    x++;
//                }
//                if (p == true) {
//                    cout << temp->data << endl;
//                }
//                temp = temp->next;
//            }
//        }
//    
//    };// Function to print the all nodes containing char t
//
//    void deleteNode(int t) {
//        int x = 0;
//        Node* temp = head;
//        Node* curr = head->next;
//        if (t == 1) {
//            head = head->next;
//            temp = head;
//            curr = temp->next;
//        }
//        else if (t == 20) {
//            while (x < 18) {
//                temp = temp->next;
//                if (curr != NULL) {
//                    curr = curr->next;
//                }
//                x++;
//            }
//            temp->next = NULL;
//        }
//        else {
//            while ( x < t + 1) {
//                if (x == t-2) {
//                    cout << temp->data << endl;
//                    cout << curr->data << endl;
//                    temp->next = curr->next;
//                    if (temp != NULL) {
//                        curr = temp->next;
//                    }
//                }
//                else {
//                    temp = temp->next;
//                    if (curr != NULL) {
//                        curr = curr->next;
//                    }
//                    
//                }
//                x++;
//            }
//        }
//    };// Function to delete the node at given position
//
//    void deleteNode(char u) {
//        Node* temp= head;
//        Node* curr = head->next;
//        bool p = 0;
//
//        if (temp == NULL) {
//            cout << "Empty List " << endl;
//        }
//        else {
//            int z = 0;
//            while (z < temp->data.size()) {
//                if (temp->data.at(z) == u) {
//                    p = 1; 
//                }
//                z++;
//            }
//            if (p == 1) {
//                head = head->next;
//                temp = head;
//                curr = temp -> next;
//            }
//
//            while (temp->next != NULL) {
//                p = 0;
//                int x = 0;
//                while (x < curr->data.size()) {
//                    if (curr->data.at(x) == u) {
//                        p = 1; 
//                    }
//                    x++;
//                }
//                if (p == 1) {
//                    temp->next = curr->next;
//                    if (temp != NULL) {
//                        curr = temp->next;
//                    }
//                }
//                else {
//                    temp = temp->next;
//                    curr = curr->next;
//                }
//            }
//        }
//
//    
//    };// Function to delete the node at given position
//};
//
//int maidlkdnjabdhgjabnoidksabhjdetrn(){
//
//		string Name;
//		/*****************************************/
//		cout << "Student Enter Name" << endl;
//		cin >> Name;
//		cout << "----------------------------------------------" << endl;
//		cout << "FIle: " << __FILE__ << " Date: " << __DATE__ << endl;
//		cout << "Student Name: " << Name << endl;
//		cout << "----------------------------------------------" << endl;
//		/*****************************************/
//        //dog, cat, mammal, bat, lion, frog, rabbit, tiger, snake, horse,
//        //mouse, hog, bat, deer, cow, giraffe, gorilla, whale, camel, penguin
//
//        Node n1("dog");
//        Node n2("cat");
//        Node n3("mammal");
//        Node n4("bat");
//        Node n5("lion");    
//        Node n6("frog");    
//        Node n7("rabbit");   
//        Node n8("tigger");    
//        Node n9("snake");    
//        Node n10("horse");  
//        Node n11("mouse");
//        Node n12("hog");  
//        Node n13("bat");  
//        Node n14("deer");    
//        Node n15("cow");    
//        Node n16("giraffe");   
//        Node n17("gorilla");   
//        Node n18("whale");  
//        Node n19("camel");   
//        Node n20("penguin");   
//        Linkedlist Led;
//        Led.insertNode(&n1);
//        Led.insertNode(&n2);
//        Led.insertNode(&n3);
//        Led.insertNode(&n4);
//        Led.insertNode(&n5);
//        Led.insertNode(&n6);
//        Led.insertNode(&n7);
//        Led.insertNode(&n8);
//        Led.insertNode(&n9);
//        Led.insertNode(&n10);
//        Led.insertNode(&n11);
//        Led.insertNode(&n12);
//        Led.insertNode(&n13);
//        Led.insertNode(&n14);
//        Led.insertNode(&n15);
//        Led.insertNode(&n16);
//        Led.insertNode(&n17);
//        Led.insertNode(&n18);
//        Led.insertNode(&n19);
//        Led.insertNode(&n20);
//
//        Led.printList();
//
//        Led.printList('r');
//        
//        Led.deleteNode(12);
//        Led.deleteNode('o');
//        Led.printList();
//        
//        Node n21("whale");
//        Led.insertNode(&n21, 6);
//        Led.printList();
//
//        
//
//
//		return 0;
//};
