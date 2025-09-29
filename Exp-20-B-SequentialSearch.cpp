//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
//Exp 20 B : Sequential Search In cpp
#include <iostream>
using namespace std;
int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> key;
    
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    
    if(!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}/*
Output :
Enter number of elements: 7
Enter elements: 2
1
5
4
3
4
2
Enter element to search: 2
Element found at index 0
Enter number of elements: 7
Enter elements: 2
1
5
4
3
4
2
Enter element to search: 7
Element not found in the array.
*/
