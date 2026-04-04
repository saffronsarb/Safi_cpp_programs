
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
void insert_S(){
    
}
int main(){
   system("cls");
   Node* n1 = new Node(23);
   Node* n2 = new Node(78);
   Node* n3 = new Node(98);
   Node* n4 = new Node(3);

   n1->nod=n2;
   n2->nod=n3;
   n3->nod=n4;

   display(n1);

    return 0;
}
