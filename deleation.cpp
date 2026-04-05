#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[6] = {1, 2, 3, 4, 5}; //12345// 12445 // 12455
    int n = 5, pos = 2; // delete element at index 2

    for(int i=pos; i<n-1; i++) {
        arr[i] = arr[i+1];
         for(int i=0; i<n; i++) cout << arr[i] << " ";
         cout<<"\n";
    }
    n--;
    cout<<"\n";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    return 0;
}