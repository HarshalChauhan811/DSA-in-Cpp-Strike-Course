#include<iostream>
using namespace std;

/* =====================================================
   🔁 CALL BY REFERENCE (BASIC IDEA)
   ===================================================== */

// Reference (&) ka matlab:
// Function ko variable ki COPY nahi,
// balki ORIGINAL variable ka access milta hai

// Example (commented):
// void increment(int &n){
//     n++;   // original variable ki value badlegi
// }

/* =====================================================
   🔄 SWAP USING CALL BY REFERENCE
   ===================================================== */

void swap(int &a, int &b){
    // a aur b original variables ko refer kar rahe hain

    int c = a;  // temporary variable me a store
    a = b;      // b ki value a me daali
    b = c;      // temp ki value b me daali

    // Function ke bahar wale a aur b bhi change ho jayenge
}

/* =====================================================
   🔢 DEFAULT PARAMETER FUNCTION
   ===================================================== */

// Agar function call ke time argument nahi diya
// to default value use hogi
void printing(int num = 5){
    cout << num << endl;
}

/* =====================================================
   🚀 MAIN FUNCTION
   ===================================================== */

int main(){

    /* =================================================
       🔄 SWAP FUNCTION DEMO
       ================================================= */

    int a = 10, b = 20;
    // Initial values:
    // a = 10, b = 20

    swap(a, b);
    // Call by reference:
    // Function ke andar change → yahin reflect hoga

    cout << a << " " << b << endl;
    // Output:
    // 20 10


    /* =================================================
       🔢 DEFAULT PARAMETER DEMO
       ================================================= */

    printing(10);
    // Argument diya → num = 10 print hoga

    printing();
    // Argument nahi diya → default value (5) print hogi


    return 0;
    // Program successfully end
}

/* =====================================================
   🧠 PRACTICE / THINKING QUESTIONS (IMPORTANT)
   ===================================================== */

// 1️⃣ Function ki help se Prime Number check karo
// 2️⃣ Function ki help se Armstrong Number check karo
// 3️⃣ Swap 3 variables using function:
//     a = 10, b = 20, c = 30
//     Output: a = 20, b = 30, c = 10
// 4️⃣ 0.1 + 0.2 ka sum exactly 0.3 kyun nahi hota?
//     (Floating point precision concept)
