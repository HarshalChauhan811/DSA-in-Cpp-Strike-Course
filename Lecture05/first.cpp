#include <iostream>
// iostream → input (cin) aur output (cout) ke liye

using namespace std;
// std namespace use karte hain taki std::cout na likhna pade

int main(){

    /* =====================================================
       🔁 LOOPS OVERVIEW
       ===================================================== */

    // for loop   → jab iterations pehle se pata ho
    // while loop → jab condition ke basis pe loop chale
    // do-while   → kam se kam ek baar execute hota hai

    /*
    int i = 1;

    // while loop:
    // jab tak condition true hai tab tak chalega
    while(i < 10){
        cout << i << " ";
        i++;
    }

    // do-while loop:
    // pehle execute hota hai, baad me condition check hoti hai
    do{
        cout << i << " ";
        i++;
    }while(i < 10);
    */

    /* =====================================================
       🔢 NUMBER REVERSE (DECIMAL)
       ===================================================== */

    /*
    int num = 100000;
    int ans = 0;

    // Logic:
    // last digit nikaalo → %10
    // number chhota karo → /10
    // ans ko left shift karo → ans*10

    while(num != 0){
        int lastDigit = num % 10;   // last digit fetch
        num = num / 10;             // last digit remove
        ans = ans * 10 + lastDigit; // reverse build
    }

    cout << ans << endl;
    */

    /* =====================================================
       🔢 DECIMAL TO BINARY CONVERSION
       ===================================================== */

    /*
    int num = 17;        // decimal number
    int ans = 0;         // binary result (stored as number)
    int mul = 1;         // place value (1, 10, 100...)

    // Logic:
    // rem = num % 2  → last binary bit
    // num = num / 2  → number reduce
    // mul = mul * 10 → next binary place

    while(num != 0){

        // remainder (binary digit)
        // int rem = num % 2;

        // optimized way using bitwise AND
        int rem = num & 1;   // same as num % 2

        // divide by 2
        // num = num / 2;
        // optimized using right shift
        num = num >> 1;

        ans = ans + rem * mul;
        mul = mul * 10;
    }

    cout << ans << endl;
    */

    /* =====================================================
       🔄 BINARY NUMBER REVERSE
       ===================================================== */

    /*
    num = ans;
    ans = 0;

    while(num != 0){
        int lastDigit = num % 10;
        num = num / 10;
        ans = ans * 10 + lastDigit;
    }

    cout << ans << endl;
    */

    /* =====================================================
       🔁 BINARY TO DECIMAL CONVERSION (ACTIVE CODE)
       ===================================================== */

    int num = 11011;
    // num ek binary number hai (base 2)

    int ans = 0;   // final decimal answer
    int mul = 1;   // power of 2 → 1, 2, 4, 8, 16...

    // Logic:
    // last digit nikaalo → %10
    // agar bit = 1 → uski power add karo
    // mul *= 2 → next power of 2

    while(num != 0){

        int rem = num % 10;   // last binary digit (0 or 1)
        num = num / 10;       // binary number chhota karo

        ans = ans + rem * mul;
        // agar rem = 1 → value add hogi
        // agar rem = 0 → kuch add nahi hoga

        mul = mul * 2;        // next power of 2
    }

    cout << ans << endl;
    // Output: binary 11011 → decimal 27

    return 0;
    // program successfully end
}
