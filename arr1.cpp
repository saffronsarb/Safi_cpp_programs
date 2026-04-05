#include<iostream>
using namespace std;

void enter(int arr[],int a){
     cout<<"Enter elements of array : "<<"\n";
    for (int i = 0; i<=a ; i++){
        cin>>arr[i];
    }
}
void display(int arr[], int a){
      cout<<" Elements of array : "<<"\n";
    for (int i = 0; i<=a ; i++){
        cout<<arr[i]<<"\n";
    }
}
void display(int arr[]){
      cout<<"\n"<<" Elements of array : "<<"\n";
    for (int i = 0; i<=6 ; i++){
        cout<<arr[i]<<"\n";
    }
}
int sum(int arr[],int a){
    cout<<"Sum of all elements : ";
    int sum=0;
    for(int i = 0;i<=a;i++){
        sum = sum+arr[i];
    }
    cout<<sum;
    return sum;
}
int sum_arr(int arr[],int arr2[],int a){
    cout<<"\n";
    cout<<"adding elements at same index from 2nd array to 1st array..... ";
    
    for(int i = 0;i<=a;i++){
       arr[i] = arr[i]+arr2[i];
    }

    return arr[a];
}

int main(){
    system("cls");
    int a = 7;
  cout<<"Enter size of array : ";
  cin>>a; 
  int arr[a]; 
  int arr2[a] = {1,2,3,4,5,6,7}; 
  int arr3[a] ={1,23,34,56,76,5,8};// this is called as array initialization we can also initialize the array at the time of declaration by providing the values in curly braces
  enter(arr,a);
  display(arr,a);
  display(arr2); // we can not pass the size of array in this function because it is already defined in the function definition as 7 and we can not change it because it is a fixed size array
  sum(arr,a);
 sum_arr(arr2,arr3,a); //
 display(arr2);
 display(arr,a);
 // sum(arr2);  
  return 0;
}

