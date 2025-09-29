//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
//Exp 20 A : Linear Search In cpp
#include <iostream>
int search(int arr[], int size, int val) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == val) {
            return i;
        }
    }
    return -1;
}
int main() {
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    int arr[size];
    std::cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    int val;
    std::cout << "Enter the value to be searched: ";
    std::cin >> val;
    int result = search(arr, size, val);
    if(result != -1) {
        std::cout << "Element found at index: " << result << '\n';
    } else {
        std::cout << "Element not found in the array" << '\n';
    }
    return 0;
}
/*
Output :
Enter the number of elements in the array: 5
Enter 5 elements: 10
20
30
40
50
Enter the value to be searched: 40
Element found at index: 3
Enter the number of elements in the array: 5
Enter 5 elements: 10
20
30
40
50
Enter the value to be searched: 25
Element not found in the array
*/
