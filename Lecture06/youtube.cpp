#include<iostream>
using namespace std;

/*
========================================================
FUNCTION: youtube
========================================================
Real-life idea:
YouTube jaise platforms par har video ka layout SAME hota hai
sirf DATA change hota hai (photo, title, views, time).

Isi liye function use karte hain → SAME LOGIC, DIFFERENT DATA
*/

// Ye function ek YouTube video ki details print karta hai
void youtube(string photo, string title, int views, int time){

    // Thumbnail show
    cout << "Print the thumbnail: " << photo << endl;

    // Video title show
    cout << "Print the title: " << title << endl;

    // Views count show
    cout << "Print the views: " << views << endl;

    // Upload time show
    cout << "Print the upload time: " << time << endl;

    // Sirf output ko clean dikhane ke liye
    cout << "-----------------------------" << endl;
}

int main(){ 
    
    /* ====================================================
       VIDEO DATA (INPUT)
       ==================================================== */

    // Video 1 details
    string photo1 = "photo1.jpg";
    string title1 = "Hook1";
    int views1 = 420;
    int time1  = 3;

    // Video 2 details
    string photo2 = "photo2.jpg";
    string title2 = "React";
    int views2 = 500;
    int time2  = 7;

    /* ====================================================
       ✅ WITH FUNCTION (BEST PRACTICE)
       ==================================================== */

    // Same function, different data
    youtube(photo1, title1, views1, time1);
    youtube(photo2, title2, views2, time2);

    /* ====================================================
       ❌ WITHOUT FUNCTION (MANUAL / BAD PRACTICE)
       ====================================================
       Neeche SAME KAAM function ke bina kiya gaya hai.
       Yahin se samajh aata hai function kyun zaroori hai.
    */

    // Video 1 (manual printing)
    cout << "Print the thumbnail: " << photo1 << endl;
    cout << "Print the title: " << title1 << endl;
    cout << "Print the views: " << views1 << endl;
    cout << "Print the upload time: " << time1 << endl;
    cout << "-----------------------------" << endl;

    // Video 2 (manual printing)
    cout << "Print the thumbnail: " << photo2 << endl;
    cout << "Print the title: " << title2 << endl;
    cout << "Print the views: " << views2 << endl;
    cout << "Print the upload time: " << time2 << endl;
    cout << "-----------------------------" << endl;

    /*
    ❌ WITHOUT FUNCTION PROBLEMS:
    - Same code baar-baar likhna padta hai
    - 10 videos → 10 baar same code
    - Format change? → har jagah change karna padega

    ✅ FUNCTION BENEFITS:
    - Code reuse
    - Clean & readable
    - Easy maintenance
    - Real-world software design
    */

    return 0;
}
