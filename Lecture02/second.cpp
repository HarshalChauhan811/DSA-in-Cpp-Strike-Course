#include<iostream>          // Input-Output ke liye header file
using namespace std;       // std:: baar-baar likhne se bachne ke liye

int main(){

    // =====================================================
    // 🔹 IF - ELSE (Decision Making)
    // =====================================================

    // int age;                           // age naam ka variable
    // cout << "Enter your age: ";        // user ko message
    // cin >> age;                        // input lena

    // if(age >= 18){                     // condition check
    //     cout << "You are eligible for vote";   // true hua to
    // }
    // else{
    //     cout << "You are not eligible for vote"; // false hua to
    // }

    // 👉 if-else ka use tab hota hai jab condition ke base pe decision lena ho


    // =====================================================
    // 🔹 MARKS & GRADING SYSTEM (if - else if - else)
    // =====================================================

    // int marks;
    // cout << "Enter your marks: ";
    // cin >> marks;

    // NOTE:
    // 👉 Ek hi if hota hai
    // 👉 Multiple else-if ho sakte hain
    // 👉 Last me sirf ek else hota hai

    // if(marks > 90){
    //     cout << "Grade: A+";
    // }
    // else if(marks > 80 && marks <= 90){
    //     cout << "Grade: A";
    // }
    // else if(marks > 70 && marks <= 80){
    //     cout << "Grade: B+";
    // }
    // else if(marks > 60 && marks <= 70){
    //     cout << "Grade: B";
    // }
    // else{
    //     cout << "Grade: C";
    // }

    // 👉 && (AND) tab true hota hai jab dono condition true ho


    // =====================================================
    // 🔹 SWITCH CASE (Multiple choices ke liye)
    // =====================================================

    // int day;
    // cout << "Enter your day number (1-7): ";
    // cin >> day;

    // switch(day){
    //     case 1:
    //         cout << "Monday";
    //         break;      // break na ho to next case bhi execute ho jata hai
    //     case 2:
    //         cout << "Tuesday";
    //         break;
    //     case 3:
    //         cout << "Wednesday";
    //         break;
    //     case 4:
    //         cout << "Thursday";
    //         break;
    //     case 5:
    //         cout << "Friday";
    //         break;
    //     case 6:
    //         cout << "Saturday";
    //         break;
    //     case 7:
    //         cout << "Sunday";
    //         break;
    //     default:
    //         cout << "Invalid day";   // jab koi case match na ho
    // }

    // 👉 switch mostly menu-driven programs me use hota hai


    // =====================================================
    // 🔹 EVEN / ODD PROGRAM
    // =====================================================

    // int num;
    // cout << "Enter your number: ";
    // cin >> num;

    // if(num % 2 == 0){      // remainder 0 aaya
    //     cout << "Even Number";
    // }
    // else{
    //     cout << "Odd Number";
    // }

    // 👉 % operator remainder nikalta hai


    // =====================================================
    // 🔹 GREATER NUMBER CHECK
    // =====================================================

    // int num1 = 10;
    // int num2 = 14;

    // if(num1 > num2){
    //     cout << "num1 is greater";
    // }
    // else if(num2 > num1){
    //     cout << "num2 is greater";
    // }
    // else{
    //     cout << "Both are equal";
    // }


    // =====================================================
    // 🔹 LOOPS (Repetition ke liye)
    // =====================================================

    // Without loop (boring & lengthy)
    // cout << "Hello Coder Army\n";
    // cout << "Hello Coder Army\n";
    // cout << "Hello Coder Army\n";

    // 👉 Loop ka use tab hota hai jab same kaam baar-baar karna ho


    // =====================================================
    // 🔹 FOR LOOP
    // =====================================================
    // Syntax:
    // for(initialization; condition; increment/decrement)

    // for(int i = 1; i <= 5; i++){
    //     cout << "Hello Coder Army\n";
    // }

    // Working:
    // 1️⃣ i = 1 (start)
    // 2️⃣ i <= 5 (condition check)
    // 3️⃣ code execute
    // 4️⃣ i++ (update)
    // 5️⃣ repeat until condition false


    // =====================================================
    // 🔹 PRINT NUMBERS 1 TO 10
    // =====================================================

    for(int i = 1; i <= 10; i++){
        cout << i << " ";    // numbers print honge same line me
    }

    // Last iteration ke baad:
    // i = 11 → condition false → loop stop

    return 0;   // program successfully end
}
