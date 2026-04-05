#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[5] = {5, 2, 9, 1, 3};
    for(int i=0; i<5-1; i++) {
        for(int j=0; j<5-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<5; i++) cout << arr[i] << " ";
    return 0;
}
// Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. 
// The pass through the