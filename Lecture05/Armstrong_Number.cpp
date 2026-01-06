#include<iostream>
using namespace std;

int main(){

    /* =====================================================
       🔢 ARMSTRONG NUMBER
       ===================================================== */

    /*
    Armstrong Number kya hota hai?
    --------------------------------
    Agar kisi number ke har digit ke cube
    (ya power = number of digits) ka sum
    usi number ke barabar ho,
    to wo Armstrong number hota hai.

    Example:
    153
    = 1³ + 5³ + 3³
    = 1 + 125 + 27
    = 153  ✅ Armstrong
    */

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int originalNum = num;
    // original number ko save kar liya
    // kyunki num ko hum loop me change kar denge

    int sum = 0;
    // yahan digits ke cube ka sum store hoga

    /* =====================================================
       🔁 DIGITS EXTRACT KARNA
       ===================================================== */

    while(num != 0){

        int digit = num % 10;
        // last digit nikala

        sum = sum + (digit * digit * digit);
        // digit ka cube add kiya

        num = num / 10;
        // last digit remove kar diya
    }

    /* =====================================================
       ✅ CHECK ARMSTRONG OR NOT
       ===================================================== */

    if(sum == originalNum){
        cout << "Armstrong Number" << endl;
    }
    else{
        cout << "Not an Armstrong Number" << endl;
    }

    return 0;
}
