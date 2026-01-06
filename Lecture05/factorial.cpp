#include <iostream>
// iostream → input (cin) aur output (cout) ke liye

using namespace std;
// std namespace use karte hain taki std::cout likhna na pade

int main(){

    /* =====================================================
       🔢 FACTORIAL CALCULATION
       ===================================================== */

    // Factorial ka matlab:
    // n! = n × (n-1) × (n-2) × ... × 1
    //
    // Example:
    // 5! = 5 × 4 × 3 × 2 × 1 = 120
    // 0! = 1  (VERY IMPORTANT EDGE CASE)

    // ---------------- EDGE CASE ----------------
    // Agar user 0 deta hai:
    // Loop execute hi nahi hoga
    // fact ki initial value 1 rahegi
    // Isliye output sahi aayega (0! = 1)

    int num;
    cout << "Give number: ";
    cin >> num;
    // User se number input liya

    long long fact = 1;
    // fact ko 1 se initialize karna zaroori hai
    // kyunki multiplication ka neutral element 1 hota hai
    //
    // Agar fact = 0 hota → final answer hamesha 0 aata ❌

    // for loop:
    // i = 1 se num tak chalega
    // har step par fact = fact * i hoga
    for(int i = 1; i <= num; i++){
        fact = fact * i;
        // har iteration me factorial grow hota ja raha hai
    }

    // Loop khatam hone ke baad
    // fact ke andar final factorial value hogi

    cout << fact << endl;
    // factorial print kar diya

    return 0;
    // program successful end
}
