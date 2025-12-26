#include<iostream>  
using namespace std;

// iostream → Input Output Stream
// iska use console se input lene (cin) aur output dene (cout) ke liye hota hai
// using namespace std → baar-baar std:: likhne se bachata hai

int main(){
    
    // -------------------- DATA TYPES --------------------
    // Data type batata hai variable kis type ka data store karega

    // int → integers (poore numbers)
    // Size: 4 bytes
    int a = 327;  
    
    // float → decimal values (point wale numbers)
    // Size: 4 bytes
    float b = 2.41;
    
    // char → single character store karta hai
    // Size: 1 byte
    // Character hamesha single quotes (' ') me likhte hain
    char c = 'a';
    
    // bool → true ya false store karta hai
    // Size: 1 byte
    bool num = false;
    
    // long long → bahut bade integer values store karne ke liye
    // Usually Size: 8 bytes
    long long d = 327298314793712;
    
    // string → multiple characters (words/sentence) store karta hai
    // string C++ ka built-in class hai
    // Double quotes (" ") ka use hota hai
    string name = "Rohit Negi";

    // cout → console par output print karne ke liye
    // << → insertion operator (data ko output stream me bhejta hai)

    // name.length() → string ke total characters ki length return karta hai
    // "Rohit Negi" → total 10 characters (space bhi count hota hai)

    cout << name.length();

    // return 0 → program successfully end ho gaya
    return 0;
}
