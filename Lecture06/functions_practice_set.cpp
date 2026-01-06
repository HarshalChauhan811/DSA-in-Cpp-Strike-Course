#include<iostream>
#include<cmath>
using namespace std;

/* =====================================================
   1️⃣ PRIME NUMBER CHECK (USING FUNCTION)
   ===================================================== */

// Prime number:
// 1 se bada ho
// sirf 1 aur khud se divisible ho

bool isPrime(int num){

    // 0, 1 prime nahi hote
    if(num < 2){
        return false;
    }

    // 2 se sqrt(num) tak check karna kaafi hota hai
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return false;   // divisible mila → prime nahi
        }
    }

    return true;            // koi divisor nahi mila → prime
}


/* =====================================================
   2️⃣ ARMSTRONG NUMBER CHECK (USING FUNCTION)
   ===================================================== */

// Armstrong number:
// digits ke cube ka sum == original number
// (yahan 3-digit Armstrong handle kar rahe hain)

bool isArmstrong(int num){

    int original = num;
    int sum = 0;

    while(num != 0){
        int digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    return sum == original;
}


/* =====================================================
   3️⃣ SWAP 3 VARIABLES USING FUNCTION
   ===================================================== */

// a = 10, b = 20, c = 30
// Output: a = 20, b = 30, c = 10

void swapThree(int &a, int &b, int &c){

    int temp = a;   // a ko save kiya
    a = b;          // b → a
    b = c;          // c → b
    c = temp;       // old a → c
}


/* =====================================================
   4️⃣ FLOATING POINT PRECISION PROBLEM
   ===================================================== */

// 0.1 + 0.2 exactly 0.3 kyun nahi hota?
// Kyunki floating point numbers binary (base-2) me
// exactly represent nahi ho pate.

void floatingPointDemo(){

    double a = 0.1;
    double b = 0.2;
    double sum = a + b;

    cout << "0.1 + 0.2 = " << sum << endl;
    cout << "Reason: Floating point numbers are stored in binary," << endl;
    cout << "binary me 0.1 aur 0.2 exact represent nahi hote." << endl;
}


/* =====================================================
   🚀 MAIN FUNCTION (TESTING ALL)
   ===================================================== */

int main(){

    // ---------- PRIME CHECK ----------
    int p = 17;
    if(isPrime(p))
        cout << p << " is Prime Number" << endl;
    else
        cout << p << " is NOT Prime Number" << endl;


    // ---------- ARMSTRONG CHECK ----------
    int a = 153;
    if(isArmstrong(a))
        cout << a << " is Armstrong Number" << endl;
    else
        cout << a << " is NOT Armstrong Number" << endl;


    // ---------- SWAP 3 VARIABLES ----------
    int x = 10, y = 20, z = 30;
    swapThree(x, y, z);

    cout << "After swapping:" << endl;
    cout << "a = " << x << ", b = " << y << ", c = " << z << endl;


    // ---------- FLOATING POINT ISSUE ----------
    floatingPointDemo();

    return 0;
}
