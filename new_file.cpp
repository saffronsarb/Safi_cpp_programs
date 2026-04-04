#include<iostream>
class BaseStack{
  protected:
  int arr[100];
  int top;
  public:
  BaseStack(){
    top = -1;
  }
  void push(int x){
    arr[++top] = x;
  }
  int pop(){
    if(top == -1){
        std::cout<<"Undefined";
    }
}
    void display(){
        for(int i = top;i >= 0;i--){
            std::cout<<arr[i];
        }
    }
  
};
// it is a machenism to inherit from base to child
class BrowserStack : public BaseStack{
    public :
    void visitPage(int Page){
        push(Page);
    }
};
// implement template
class SecureBrowser{

};// user  actions are stored in stack, user stack store ,undo last opp, redo store reverted opp, logger record stack store opperation to file edditor stack maneger manage every thing 
class undoStack : virtual public BaseStack{
 // pop();
};
class redoStack : virtual public BaseStack{

};
int main(){
    
   
    return 0;
}
