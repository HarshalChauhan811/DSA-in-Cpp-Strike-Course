#include<iostream>
using namespace std;

/*
=====================================================
FUNCTION OVERLOADING
=====================================================

Same function name
but:
- different number of parameters
- OR different type of parameters

Compiler compile time par decide karta hai
kaunsa function call hoga (Compile Time Polymorphism)
*/


// sum(int, int)
// 👉 Jab 2 integer pass honge, ye function chalega
int sum(int a, int b){
    return a + b;
}


// sum(int, int, int)
// 👉 Jab 3 integer pass honge, ye wala function chalega
int sum(int a, int b, int c){
    return a + b + c;
}


// sum(float, float)
// 👉 Jab float values pass hongi, ye function chalega
float sum(float a, float b){
    return a + b;
}


int main(){

    // float type variables
    float a = 3.1, b = 3.4;

    // 🔹 Compiler argument ke basis par function choose karta hai

    cout << sum(3, 4) << endl;
    // Calls → sum(int, int)

    cout << sum(3, 4, 5) << endl;
    // Calls → sum(int, int, int)

    cout << sum(a, b) << endl;
    // Calls → sum(float, float)

    /*
    IMPORTANT NOTE:
    Function overloading sirf parameters par depend karti hai
    Return type par depend nahi karti ❌
    */

    return 0;
}
