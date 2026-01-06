#include<iostream>
using namespace std;

int main(){

    /* =====================================================
       🔢 FIBONACCI SERIES
       ===================================================== */

    /*
    Fibonacci series kya hoti hai?
    --------------------------------
    Har next number pichhle do numbers ka sum hota hai.

    Series:
    0 1 1 2 3 5 8 13 21 ...

    Rule:
    next = first + second
    */

    int n;
    cout << "Enter how many terms: ";
    cin >> n;

    // Edge case:
    // Agar user 0 ya negative number de
    if(n <= 0){
        cout << "Invalid input" << endl;
        return 0;
    }

    int first = 0;
    int second = 1;
    // Fibonacci ke first do numbers fixed hote hain

    cout << "Fibonacci Series: ";

    // Agar sirf 1 term chahiye
    if(n == 1){
        cout << first << endl;
        return 0;
    }

    // Pehle do terms print
    cout << first << " " << second << " ";

    // Loop 3rd term se start hoga
    for(int i = 3; i <= n; i++){

        int next = first + second;
        // next Fibonacci number

        cout << next << " ";

        // Values update
        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}
