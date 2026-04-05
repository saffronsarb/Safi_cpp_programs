#include <iostream>
using namespace std;
// binary search is a searching algorithm that works on sorted arrays by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.    
// works on sorted array only and it is more efficient than linear search because it reduces the number of comparisons needed to find the target value. the time complexity of binary search is O(log n) where n is the number of elements in the array.    

int main() {
    system("cls");
    int arr[6] = {1, 3, 5, 7, 9, 11};
    int key = 7;
    int low = 0, high = 5;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            cout << "Found at index " << mid << endl;
            break;
        }
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}