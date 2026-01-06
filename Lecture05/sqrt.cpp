#include <iostream>
using namespace std;

int main(){

    // =====================================================
    // 🔢 PROBLEM:
    // Kisi number ka floor square root nikalna
    // (largest integer jiska square <= num ho)
    // =====================================================

    int num = 0;
    int ans = 1;
    // ans me hum square root ka answer store karenge

    /* =====================================================
       🔴 EDGE CASE: num == 0
       ===================================================== */

    // 0 ka square root 0 hota hai
    // is case me loop chalane ki zarurat nahi
    if(num == 0){
        cout << 0 << endl;   
        return 0;           // program yahin end
    }

    /* =====================================================
       🔁 LOGIC:
       i*i <= num
       jab tak i ka square num se chhota ya barabar hai,
       tab tak i possible answer ho sakta hai
       ===================================================== */

    // i = 1 se start karte hain
    // condition: i*i <= num
    // jaise hi square num se bada hoga, loop ruk jayega
    for(int i = 1; i * i <= num; i++){
        ans = i;
        // har valid i ko answer me store karte ja rahe hain
        // last valid i hi floor square root hoga
    }

    // final answer print
    cout << ans << endl;

    return 0;
    // program successful end
}
