#include<iostream>
using namespace std;
class node {
    public:

    int data;
    node *next;

   node(int a){ // Constructor to initialize the data and set the next pointer to nullptr.
    // It takes an integer a as input and assigns it to the data member of the node, while initializing the next pointer to nullptr.
    data = a; // The data member of the node is assigned the value of a, which is passed as an argument when creating a new node.
    next = nullptr; // The next pointer is initialized to nullptr, indicating that it does not point to any other node in the linked list at the time of creation.
   } 
   
};

void display(node* head){
    node* p = head;
    while(p){
        cout<<p->data<<"->";
        p = p->next;
    }
};

int main(){
  system("CLS");
  int a;
  int entry;
  node *head;
  node *tail;
  cout<<"Enter number of entries : "; cin>>entry;
 for(int i=0; i<entry;i++){
  cout<<"Enter data : "; cin>>a;
  tail->next = new node(a);
  tail = tail->next;

  // Create the head node with the input data, and its next pointer is set to nullptr.

}
  // The head pointer is updated to point to the next node in the linked list, which is currently nullptr since we only created one node.
  display(tail); // The display function is called to print the linked list starting from the head node, which will show the data of each node followed by an arrow (->) until it reaches the end of the list (nullptr).

    return 0;
}