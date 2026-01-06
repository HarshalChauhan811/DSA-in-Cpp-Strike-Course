#include <iostream>
using namespace std;

/* =====================================================
   🔢 FUNCTION: factorial
   ===================================================== */

// Function declaration + definition
// return_type functionName(parameter)

// factorial(n):
// Ye function n ka factorial return karega
// Example: factorial(5) → 120
int factorial(int n){

    int fact = 1;
    // fact = 1 se isliye initialize kiya
    // kyunki multiplication ka neutral element 1 hota hai

    // Loop 1 se n tak chalega
    // har step par fact = fact * i hoga
    for(int i = 1; i <= n; i++){
        fact *= i;
    }

    // Final factorial value return
    return fact;
}


/* =====================================================
   ➕ FUNCTION: sum
   ===================================================== */

// Ye function do numbers ka sum return karta hai
// Simple example to understand function calling
int sum(int a, int b){

    return a + b;
    // a aur b ka addition karke result return
}


/* =====================================================
   🚀 MAIN FUNCTION
   ===================================================== */

int main(){

    // main() → program execution yahin se start hota hai

    /* =================================================
       🔢 FUNCTION CALLING (FACTORIAL)
       ================================================= */

    int num  = 5;
    int num2 = 7;
    int num3 = 8;
    // Teen alag-alag numbers

    // Yahan hum factorial function ko call kar rahe hain
    // Argument pass ho raha hai (num, num2, num3)
    // Function calculate karke value return karega

    int answer1 = factorial(num);   // factorial(5)
    int answer2 = factorial(num2);  // factorial(7)
    int answer3 = factorial(num3);  // factorial(8)

    // Teenon factorial print
    cout << answer1 << endl;
    cout << answer2 << endl;
    cout << answer3 << endl;

    /* =================================================
       ➕ FUNCTION CALLING (SUM)
       ================================================= */

    int sum1 = sum(3, 4);
    // sum function ko call kiya
    // a = 3, b = 4

    cout << sum1 << endl;

    /* =================================================
       ❌ OLD WAY (WITHOUT FUNCTION) – COMMENTED
       ================================================= */

    // Neeche ka code dikhata hai ki
    // bina function ke same logic baar-baar likhna padta
    // Ye BAD PRACTICE hai ❌
    //
    // Functions ka fayda:
    // ✔ Code reuse
    // ✔ Clean code
    // ✔ Easy maintenance
    // ✔ Interview friendly

    /*
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    cout << fact << endl;

    fact = 1;
    for(int i = 1; i <= num2; i++){
        fact *= i;
    }
    cout << fact << endl;

    fact = 1;
    for(int i = 1; i <= num3; i++){
        fact *= i;
    }
    cout << fact << endl;
    */

    return 0;
    // Program successfully end
}
