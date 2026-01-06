#include<iostream>
using namespace std;

int main(){

    /* =====================================================
       🔢 SUM OF DIGITS
       ===================================================== */

    /*
    Sum of digits ka matlab:
    --------------------------------
    Kisi number ke har digit ko add karna.

    Example:
    345128
    = 3 + 4 + 5 + 1 + 2 + 8
    = 23
    */

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    // sum variable me digits ka total store hoga

    /* =====================================================
       🔁 DIGITS EXTRACT KARNA
       ===================================================== */

    while(num != 0){

        int digit = num % 10;
        // %10 se last digit milta hai

        sum = sum + digit;
        // digit ko sum me add kar diya

        num = num / 10;
        // /10 se last digit remove kar diya
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
