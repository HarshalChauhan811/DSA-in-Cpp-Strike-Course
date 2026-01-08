#include <iostream>
#include <vector>
using namespace std;

int main() {

    /*
    -----------------------------------------
    ARRAY (Fixed Size) – Example
    -----------------------------------------

    int arr[5] = {10, 20, 30, 40, 50};

    ❌ Problem:
    - Size pehle se fix hota hai
    - Runtime par size badha ya ghata nahi sakte
    */

    /*
    -----------------------------------------
    VECTOR (Dynamic Size)
    -----------------------------------------
    */

    // Empty vector declaration
    vector<int> arr;

    // push_back() → element add karta hai (end me)
    arr.push_back(90);
    arr.push_back(10);

    // pop_back() → last element remove karta hai
    arr.pop_back();

    // Vector ka current size
    int n = arr.size();

    // Vector ke elements print kar rahe hain
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Vector ka size print
    cout << n << " ";

    return 0;
}

/*
OUTPUT:
90 1
*/
