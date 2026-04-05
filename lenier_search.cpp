#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[5] = {3, 8, 1, 7, 5};
    int key = 7;
    bool found = false;

    for(int i=0; i<5; i++) {
        if(arr[i] == key) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Not found" << endl;
    return 0;
}