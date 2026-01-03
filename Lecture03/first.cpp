#include<iostream>
// iostream → Input Output Stream
// Is header file ke bina hum console se input (cin)
// aur output (cout) nahi le sakte

using namespace std;
// std namespace ka use isliye karte hain
// taki baar-baar std::cout, std::cin na likhna pade

int main(){
    // 🔥 Program execution yahin se start hota hai
    // Operating System sabse pehle main() ko call karta hai

    /* =====================================================
       EVEN NUMBER PRINT KARNE KE TAREEKE
       ===================================================== */

    // 👉 Method 1:
    // Direct even numbers print karna
    // Logic: Har even number ka gap 2 hota hai
    // 2, 4, 6, 8 ...
    /*
    for(int i = 2; i <= 20; i = i + 2){
        cout << i << endl;
    }
    */

    // 👉 Method 2:
    // Modulus (%) operator ka use
    // i % 2 == 0 → number even hota hai
    /*
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }
    */

    /* =====================================================
       ODD NUMBER PRINT
       ===================================================== */

    // Odd numbers ka bhi same logic
    // 1, 3, 5, 7 ...
    /*
    for(int i = 1; i <= 20; i = i + 2){
        cout << i << endl;
    }
    */

    /* =====================================================
       a TO z PRINT (ASCII CONCEPT)
       ===================================================== */

    // char datatype internally ASCII values pe kaam karta hai
    // 'a' = 97, 'b' = 98 ...
    // Isliye char ko loop me use kar sakte hain
    /*
    for(char ch = 'a'; ch <= 'z'; ch++){
        cout << ch << endl;
    }
    */

    /* =====================================================
       GARBAGE VALUE CONCEPT (VERY IMPORTANT)
       ===================================================== */

    // Agar variable ko value nahi dete
    // to memory me jo random data hota hai
    // wahi variable ke andar hota hai
    // Ise GARBAGE VALUE kehte hain
    //
    // ❌ int sum;      // wrong
    // ✅ int sum = 0;  // correct

    /* =====================================================
       FIRST 10 NATURAL NUMBERS KA SUM
       ===================================================== */

    /*
    int sum = 0;   // initialization is MUST

    for(int i = 1; i <= 10; i++){
        sum = sum + i;   // accumulate kar rahe hain
    }

    cout << sum;
    */

    /* =====================================================
       FIRST 10 NUMBERS KE SQUARE KA SUM
       ===================================================== */

    /*
    int sum = 0;

    for(int i = 1; i <= 10; i++){
        sum = sum + (i * i);  // square add ho raha hai
    }

    cout << sum;
    */

    /* =====================================================
       NESTED LOOP CONCEPT (PATTERN FOUNDATION)
       ===================================================== */

    // 🔑 GOLDEN RULE:
    // Outer loop → Rows control karta hai
    // Inner loop → Columns control karta hai

    /* ================= NUMBER PATTERN ================= */

    // Expected Output:
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    /*
    for(int row = 1; row <= 5; row++){
        for(int col = 1; col <= 5; col++){
            cout << col << " ";
        }
        cout << endl;
    }
    */

    /* ================= CHARACTER PATTERN ================= */

    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e

    /*
    for(int row = 1; row <= 5; row++){
        for(char ch = 'a'; ch <= 'e'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    */

    /* =====================================================
       SIMPLE LOOP EXECUTION
       ===================================================== */

    /*
    for(int i = 1; i <= 5; i++){
        cout << "Hello Coder Army" << endl;
    }
    */

    /* =====================================================
       REVERSE COUNTING
       ===================================================== */

    // Loop reverse direction me bhi chal sakta hai
    /*
    for(int i = 10; i >= 1; i--){
        cout << i << " ";
    }
    */

    /* =====================================================
       TABLE PROGRAM
       ===================================================== */

    /*
    int table = 7;

    for(int i = 1; i <= 10; i++){
        cout << table * i << endl;
    }
    */

    /* =====================================================
       STAR PATTERNS (MOST IMPORTANT FOR LOGIC)
       ===================================================== */

    // ⭐ Square Pattern
    // *****
    // *****
    // *****
    // *****
    // *****

    /*
    for(int row = 0; row < 5; row++){
        for(int col = 0; col < 5; col++){
            cout << "*";
        }
        cout << endl;
    }
    */

    // ⭐ Right Triangle
    // *
    // **
    // ***
    // ****
    // *****

    /*
    for(int row = 1; row <= 5; row++){
        for(int col = 0; col < row; col++){
            cout << "*";
        }
        cout << endl;
    }
    */

    // ⭐ Inverted Triangle
    // *****
    // ****
    // ***
    // **
    // *

    /*
    for(int row = 5; row >= 1; row--){
        for(int col = 0; col < row; col++){
            cout << "*";
        }
        cout << endl;
    }
    */

    // ⭐ Right Aligned Triangle
    //     *
    //    **
    //   ***
    //  ****
    // *****

    /*
    for(int row = 4; row >= 0; row--){
        for(int space = 0; space < row; space++){
            cout << " ";
        }
        for(int star = 0; star < 5 - row; star++){
            cout << "*";
        }
        cout << endl;
    }
    */

    /* =====================================================
       CONTINUOUS NUMBER GRID (MOST INTELLIGENT PART)
       ===================================================== */

    // Output:
    // 1  2  3  4  5
    // 6  7  8  9  10
    // 11 12 13 14 15
    // 16 17 18 19 20
    // 21 22 23 24 25

    int num = 1;
    // num ko bahar isliye declare kiya
    // taki value reset na ho

    for(int row = 0; row < 5; row++){
        for(int col = 0; col < 5; col++){
            cout << num << " ";
            num++;  // har print ke baad number increase
        }
        cout << endl;
    }

    return 0;
    // Program successfully terminate
}
