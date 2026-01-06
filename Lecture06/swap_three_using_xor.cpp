#include<iostream>
using namespace std;

/*
====================================================
🔄 SWAP 3 VARIABLES WITHOUT THIRD VARIABLE (XOR)
====================================================

Goal:
a = 10, b = 20, c = 30
After swap:
a = 20, b = 30, c = 10

Rule of XOR:
1) x ^ x = 0
2) x ^ 0 = x
3) XOR operation reversible hota hai
*/

void swapThree(int &a, int &b, int &c){

    // Step 1:
    // a ke andar teeno values ko XOR karke store kar do
    // a = a ^ b ^ c
    a = a ^ b ^ c;

    // Step 2:
    // ab b ko update karte hain
    // b = (a ^ b ^ c)
    // yahan original b aur c cancel ho jaate hain
    // b me original a aa jata hai
    b = a ^ b ^ c;

    // Step 3:
    // ab c ko update karte hain
    // c = (a ^ b ^ c)
    // yahan original a aur b cancel ho jaate hain
    // c me original b aa jata hai
    c = a ^ b ^ c;

    // Step 4:
    // ab a ko update karte hain
    // a = (a ^ b ^ c)
    // yahan original b aur c cancel ho jaate hain
    // a me original c aa jata hai
    a = a ^ b ^ c;
}

int main(){

    int a = 10, b = 20, c = 30;

    // Function call:
    // call by reference → original variables change honge
    swapThree(a, b, c);

    // Final output
    cout << "a = " << a << endl;   // 20
    cout << "b = " << b << endl;   // 30
    cout << "c = " << c << endl;   // 10

    return 0;
}
