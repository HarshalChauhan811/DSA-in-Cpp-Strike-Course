#include <iostream>
using namespace std;

int main(){

    // =====================================================
    // PROBLEM:
    // 1 se 20 tak numbers ko print karna
    // 4 rows me, har row me 5 numbers
    // =====================================================


    // =====================================================
    // ❌ MANUAL APPROACH (SAMJHNE KE LIYE)
    // =====================================================
    // Neeche ka code kaam karta hai,
    // lekin real programming / interview ke liye sahi nahi hai


    // Row 1: 1 se 5 tak numbers print honge
    // for(int j = 1; j <= 5; j++){
    //     cout << j << " ";
    // }
    // cout << endl;   // next line

    // Row 2: 6 se 10 tak numbers print honge
    // for(int j = 6; j <= 10; j++){
    //     cout << j << " ";
    // }
    // cout << endl;

    // Row 3: 11 se 15 tak numbers print honge
    // for(int j = 11; j <= 15; j++){
    //     cout << j << " ";
    // }
    // cout << endl;

    // Row 4: 16 se 20 tak numbers print honge
    // for(int j = 16; j <= 20; j++){
    //     cout << j << " ";
    // }
    // cout << endl;


    // =====================================================
    // ❌ PROBLEMS IN ABOVE MANUAL CODE
    // =====================================================
    // 1️⃣ Same loop baar-baar likhna pad raha hai (code repetition)
    // 2️⃣ Agar rows/columns badh jaye to pura code dobara likhna padega
    // 3️⃣ Numbers hard-coded hain (dynamic nahi)
    // 4️⃣ DSA / pattern logic develop nahi hoti
    // 5️⃣ Interview me ye approach weak mani jati hai


    // =====================================================
    // ✅ OPTIMIZED / PROFESSIONAL APPROACH
    // =====================================================
    // Nested loop + ek extra variable ka use
    // Ye real programming aur interview-ready solution hai


    int num = 1;
    // num ek continuous counter hai
    // Isko loop ke bahar declare kiya gaya hai
    // taki har row ke baad value reset na ho


    // Outer loop:
    // 👉 Kitni rows print karni hain (yahan 4 rows)
    for(int row = 1; row <= 4; row++){

        // Inner loop:
        // 👉 Har row me kitne numbers print karne hain (yahan 5)
        for(int col = 1; col <= 5; col++){

            // Current number print karo
            cout << num << " ";

            // Next number ke liye increment
            num++;
        }

        // Ek row complete hone ke baad
        // next line me jane ke liye
        cout << endl;
    }


    // =====================================================
    // OUTPUT:
    // 1  2  3  4  5
    // 6  7  8  9  10
    // 11 12 13 14 15
    // 16 17 18 19 20
    // =====================================================


    return 0;
    // Program successful termination
}
