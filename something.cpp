// insert at beginning and end in linked list and reverse amd sum, of element of array.

#include<iostream>

// using namespace std;
class Node{
  public:
  int x;
  Node* nod;
  Node(int val){
    x=val; 
    nod = nullptr;
  }
};
void display(Node* f){
   Node* p=f;
   while (p){
    std :: cout<<p->x<<"\n";
    p = p -> nod;
   }
}
int count(Node* e,int x){
     Node* p=e;
     int count=0;
   while (p){

   // std :: cout<<p->x<<"\n";
   if(e->x == x){
     count++;
     p = p -> nod;
     
   }
   else{p=p->nod;
         std::cout<<count;
       }

   }
   return count;
}
int main(){ // wap to count no of nodes which contain data as X 
   system("cls");
   Node* n1 = new Node(23);
   Node* n2 = new Node(78);
   Node* n3 = new Node(98); // given a linked list what would be output  of following statement
   Node* n4 = new Node(3); // wap to  to 

   n1->nod=n2;
   n2->nod=n3;
   n3->nod=n4;

   display(n1);
   count(n1,3);
    return 0;
}
