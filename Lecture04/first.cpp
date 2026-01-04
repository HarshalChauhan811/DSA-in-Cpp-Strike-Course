#include <iostream>
// 👉 iostream ka use hota hai input (cin) aur output (cout) ke liye

using namespace std;
// 👉 std likhne se bachne ke liye

int main(){

    /* =====================================================
       🔢 PART 1: 0–1 ALTERNATE PATTERN
       ===================================================== */

    /*
       Output:
       1
       01
       101
       0101
       10101
    */

    // Idea:
    // bool sirf 0 ya 1 store karta hai
    // ! (not) operator value flip kar deta hai

    /*
    for(int row = 1; row <= 5; row++){

        bool num = row % 2;
        // Agar row odd hai → start with 1
        // Agar row even hai → start with 0

        for(int col = 0; col < row; col++){
            cout << num;
            num = !num;   // 1 → 0, 0 → 1
        }

        cout << endl;     // next row
    }
    */

    /* =====================================================
       🔤 PART 2: CHARACTER PATTERN (A, AB, ABC...)
       ===================================================== */

    /*
       Output:
       A
       AB
       ABC
       ABCD
       ABCDE
    */

    // Idea:
    // char bhi number jaisa hi hota hai (ASCII)
    // 'A' se start karke row ke hisaab se print

    /*
    for(char row = 'B'; row <= 'F'; row++){
        for(char ch = 'A'; ch < row; ch++){
            cout << ch;
        }
        cout << endl;
    }
    */

    /* =====================================================
       🔡 PART 3: SAME LETTER REPEAT PATTERN
       ===================================================== */

    /*
       Output:
       A
       BB
       CCC
       DDDD
       EEEEE
    */

    // Idea:
    // 'A' + (row - 1) → current character
    // row number = kitni baar print

    /*
    for(int row = 1; row <= 5; row++){

        char ch = 'A' + row - 1;
        // row=1 → A
        // row=2 → B
        // row=3 → C

        for(int col = 0; col < row; col++){
            cout << ch;
        }

        cout << endl;
    }
    */

    /* =====================================================
       🔺 PART 4: NUMBER PYRAMID (MOST IMPORTANT)
       ===================================================== */

    /*
           1
          121
         12321
        1234321
       123454321
    */

    // Step-by-step thinking:
    // 1️⃣ Spaces print karo
    // 2️⃣ Numbers badhao (1 → n)
    // 3️⃣ Numbers ghattao (n-1 → 1)

    /*
    for(int row = 4; row >= 0; row--){

        // Step 1: spaces
        for(int s = 0; s < row; s++){
            cout << " ";
        }

        // Step 2: increasing numbers
        for(int num = 1; num <= 5 - row; num++){
            cout << num;
        }

        // Step 3: decreasing numbers
        for(int num = 5 - row - 1; num >= 1; num--){
            cout << num;
        }

        cout << endl;
    }
    */

    /* =====================================================
       🔢 PART 5: PRIME NUMBER CHECK
       ===================================================== */

    /*
       Prime number:
       ✔ 2 se bada
       ✔ sirf 1 aur khud se divisible
    */

    /*
    int n;
    cin >> n;

    if(n < 2){
        cout << "Not Prime";
        return 0;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cout << "Not Prime";
            return 0;
        }
    }

    cout << "Prime Number";
    */

    /* =====================================================
       🔢 PART 6: SUM OF DIGITS
       ===================================================== */

    /*
       Example: 345128
       Last digit → % 10
       Remove digit → / 10
    */

    int num = 345128;
    int sum = 0;

    while(num > 0){
        int lastDigit = num % 10; // last digit nikalo
        sum = sum + lastDigit;    // sum me jodo
        num = num / 10;           // digit hatao
    }

    cout << sum;

    /* =====================================================
       🔁 PART 7: SIMPLE WHILE LOOP
       ===================================================== */

    /*
    int i = 0;
    while(i < 10){
        cout << i << " ";
        i++;
    }
    */

    return 0;
    // Program yahin khatam
}
