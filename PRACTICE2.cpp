/*
#include<iostream>
int main()
{
    int arr[15] = {11,12,13};
    std::cout<<arr[15];
    return 0;
}
*/
/*
#include<iostream>
int main()
{
  system("cls");  
  int x =5;
  int &y = x; 
  y=10;// reference variable, it is an alias for the variable x, it is not a new variable, it is just another name for the variable x.
  std::cout<<x; // both x and y will print the same

    return 0;
}
*/
/*
#include<iostream>
void fun(int a)
{
    a =  20;
}
int main()
{
  int a =10;
 fun(a);
 std::cout<<a;

    return 0;
}
*/
/*
#include<iostream>

class Test {

    int x;
   // public:
    Test(){
        x=5;
    }
};

int main()
{
    system("cls");
   Test T1; // undefined

   

    return 0;
}
*/
/*
#include<iostream>
int main()
{
  int i=1;
  while(i<5){  std::cout<<i; i++;}


    return 0;
}
    */
/*
    #include<iostream>
int main()
{
    for(int i=1;i<=4;i++){

         for(int j=1;j<=i;j++){
           
          std::cout<<i*j<<" ";
    }
    std::cout<<"\n";
    }


    return 0;
}
    */
   /*
#include<iostream>  
int main(){
    system("cls");
    int c=0;
    int n;
    int rem=0,rev=0,temp;
    std::cout<<"Enter a number: ";
    std::cin>>n;
    temp = n;
    while(temp != 0){
        rem = temp%10;
        rev = rev*10 + rem;
        temp = temp/10;
        c++;
    }
      std :: cout<<"Digits : "<<c<<"\n";
      if(rev == n){std::cout<<"Palindrome";}
      else{std::cout<<"Not Palindrome";}
    
    return 0;
}
    */
   
#include<iostream>
using namespace std;
class inv{
  int n=0,arr[50];
  public:
  inv(){
    n = 50;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
}
   void sum(){
       int sum = 0;
       for(int i=0;i<=n;i++){
       sum += arr[i];
     }
     std::cout<<"sum : "<<sum;
}
     void cheep(){
        for(int i=0;i<5;i++){
            int min_i=i;
            for(int j=i;j<n;j++){
                if(arr[j]<arr[min_i]){
                    min_i=j;
                }
            }
            int temp = arr[i];
            arr[i]=arr[min_i];
            arr[min_i]=temp;
        }
        cout<<"cheapest items : ";
        for(int i=0;i<5;i++){
        cout<<"price : "<<arr[i];
        }
     } 
  

};
int main(){
   inv obj;
   obj.sum();
   obj.cheep();
    return 0;
}


// dangling 

