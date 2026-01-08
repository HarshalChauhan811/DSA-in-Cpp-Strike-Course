#include <iostream>
using namespace std;

// Array ko name ke basis pe pass kar rahe hain
// Saath me array ka size bhi pass karna zaroori hota hai
// NOTE: Array function me by default by reference pass hota hai
void printvalue(int a[], int n) {

    // Array ke saare elements print kar rahe hain
    for(int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    // Array ka first element modify kar rahe hain
    // Ye change main() ke array me bhi reflect hoga
    a[0] = 90;
}

int main() {

    // Original array declaration & initialization
    int arr[5] = {10, 20, 11, 18, 30};

    // Second array declaration
    int arr2[5];

    // arr ko arr2 me copy kar rahe hain (Deep Copy)
    for(int i = 0; i < 5; i++) {
        arr2[i] = arr[i];
    }

    // Function call
    printvalue(arr, 5);

    // Function ke andar a[0] = 90 kiya gaya tha
    // Isliye yaha arr[0] ki updated value print hogi
    cout << arr[0];

    /*
    ---------------- OUTPUT ----------------
    10
    20
    11
    18
    30
    90
    ----------------------------------------
    */

    // cout << arr;  // Ye array ka base address print karega

    return 0;
}
