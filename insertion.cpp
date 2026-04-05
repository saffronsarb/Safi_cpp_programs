#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[6] = {1, 2, 3, 5, 6}; // 123556 //123356 //123456 
    int n = 5, pos = 3, val = 4;

    for(int i=n; i>pos; i--) { // i-- is done after the loop body is executed because we want to start from the last element and move towards the position where we want to insert the new value    
        arr[i] = arr[i-1]; // we are shifting the elements to the right to create space for the new value at the specified position
    for(int i=0; i<n; i++) cout << arr[i] << " "; 
    cout<<"\n";
    }
    arr[pos] = val;
    n++;
    cout<<"\n";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    return 0;
}