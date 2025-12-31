#include<iostream>                 // Input-Output ke liye
using namespace std;

int main(){

    // =====================================================
    // 🔹 BASIC INPUT / OUTPUT
    // =====================================================

    // int a, b;
    // cout << "Enter first number: ";
    // cin >> a;                      // Input lena
    // cout << "Enter second number: ";
    // cin >> b;
    // cout << "Sum is: " << a + b;   // Output dikhana


    // =====================================================
    // 🔹 CHARACTER + ASCII
    // =====================================================

    // char ch = 'a';        // 'a' ka ASCII = 97
    // int c = ch + 1;       // 97 + 1 = 98
    // cout << c;

    // 👉 Interview Tip:
    // Char arithmetic ASCII values pe hoti hai


    // =====================================================
    // 🔹 ARITHMETIC OPERATORS
    // =====================================================

    // int a = 20, b = 10;
    // cout << a + b << endl;   // Addition
    // cout << a - b << endl;   // Subtraction
    // cout << a * b << endl;   // Multiplication
    // cout << a / b << endl;   // Division (integer)
    // cout << a % b << endl;   // Remainder


    // =====================================================
    // 🔹 ASSIGNMENT OPERATORS
    // =====================================================

    // a += b;   // a = a + b
    // a -= b;
    // a *= b;
    // a /= b;
    // a %= b;


    // =====================================================
    // 🔹 COMPARISON OPERATORS
    // =====================================================

    // > , < , >= , <= , == , !=
    // int a = 20, b = 10;
    // cout << (a > b);     // true = 1


    // =====================================================
    // 🔹 LOGICAL OPERATORS
    // =====================================================

    // &&  AND
    // ||  OR
    // !   NOT

    // cout << (1 && 0);   // 0
    // cout << (1 || 0);   // 1
    // cout << (!1);       // 0


    // =====================================================
    // 🔹 BITWISE OPERATORS
    // =====================================================
    // &  AND
    // |  OR
    // ^  XOR
    // ~  NOT
    // << Left shift
    // >> Right shift

    // int a = 5;      // 0101
    // int b = 3;      // 0011
    // cout << (a & b);   // 1
    // cout << (a | b);   // 7
    // cout << (a ^ b);   // 6


    // =====================================================
    // 🔹 SHIFT OPERATORS
    // =====================================================

    // int a = 10;
    // cout << (a << 1);   // 10 * 2 = 20
    // cout << (a >> 1);   // 10 / 2 = 5


    // =====================================================
    // 🔹 INCREMENT / DECREMENT
    // =====================================================

    // int a = 10;
    // cout << ++a;   // Pre-increment → 11
    // cout << a++;   // Post-increment → pehle print phir increment
    // cout << a;


    // =====================================================
    // 🔹 TERNARY OPERATOR (?:)
    // =====================================================
    // Short form of if-else

    // int a = 10, b = 20;
    // int max = (a > b) ? a : b;
    // cout << max;

    // 👉 Interview me frequently pucha jata hai


    // =====================================================
    // 🔹 SIZEOF OPERATOR
    // =====================================================

    // cout << sizeof(int);      // 4 bytes
    // cout << sizeof(char);     // 1 byte
    // cout << sizeof(double);   // 8 bytes


    // =====================================================
    // 🔹 TYPE CASTING
    // =====================================================
    // One data type → another

    // int a = 10;
    // double b = (double)a;   // Explicit casting
    // cout << b;

    // 👉 Important for division & precision


    // =====================================================
    // 🔹 COMMA OPERATOR
    // =====================================================
    // Ek se zyada expression ek line me

    // int a;
    // a = (1, 2, 3);   // last value assign hoti hai
    // cout << a;       // 3


    // =====================================================
    // 🔹 OPERATOR PRECEDENCE (PRIORITY)
    // =====================================================
    // * / %  → High priority
    // + -    → Medium
    // =      → Low

    // int x = 10 + 5 * 2;
    // cout << x;      // 20 (pehle multiplication)


    // =====================================================
    // 🔹 CONSTANT (const keyword)
    // =====================================================

    // const int x = 10;
    // x = 20;   // ❌ Error (value change nahi ho sakti)


    

    cout << (0 & 0);   // Bitwise AND → 0

    return 0;          // Program end successfully
}
