#include <bits/stdc++.h>
using namespace std;

/*
====================================================
ALGORITHM: Bubble Sort
====================================================

PROBLEM:
----------------------------------------------------
- Ek array diya hota hai
- Usko ascending order me sort karna hai

====================================================
FIRST THOUGHT PRINCIPLE (WHY Bubble Sort?)
----------------------------------------------------
Real-life analogy:
--------------------------------
Socho bubbles pani me upar ki taraf jaate hain.
Jo bubble halka hota hai, wo upar chala jaata hai.

Bubble Sort me:
--------------------------------
- Har pass me sabse bada element
  "bubble up" hoke right side chala jaata hai
- Adjacent elements compare hote hain
- Galat order me hue to swap kar dete hain
====================================================
*/

class Solution {
public:
    vector<int> bubbleSort(vector<int>& arr) {

        int n = arr.size();

        /*
        ------------------------------------------------
        Outer loop:
        i = 0 → largest element ko last position pe pahuchaana
        i = 1 → 2nd largest ko second last position pe
        ...
        ------------------------------------------------
        */
        for(int i = 0; i < n - 1; i++) {

            // Optimization flag:
            // check karta hai ki iss pass me koi swap hua ya nahi
            bool swapped = false;

            /*
            Inner loop:
            - Adjacent elements compare karte hain
            - Last i elements already sorted hote hain,
              isliye n-1-i tak hi jaate hain
            */
            for(int j = 0; j < n - 1 - i; j++) {

                // Agar left element bada hai right se
                // to swap kar do
                if(arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }

            /*
            ------------------------------------------------
            EARLY EXIT OPTIMIZATION
            ------------------------------------------------
            Agar is poore pass me:
            - Ek bhi swap nahi hua
            Matlab:
            - Array already sorted hai

            To aage passes chalane ka
            koi matlab nahi
            ------------------------------------------------
            */
            if(!swapped) {
                return arr;
            }
        }

        // Sorted array return
        return arr;
    }
};

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

arr = [5, 1, 4, 2]

PASS 1:
compare 5 & 1 → swap → [1, 5, 4, 2]
compare 5 & 4 → swap → [1, 4, 5, 2]
compare 5 & 2 → swap → [1, 4, 2, 5]

PASS 2:
compare 1 & 4 → ok
compare 4 & 2 → swap → [1, 2, 4, 5]

PASS 3:
compare 1 & 2 → ok
(no swaps → break)

Sorted ✅

====================================================
TIME COMPLEXITY ANALYSIS
====================================================

WORST CASE:
----------------------------------------------------
Array reverse sorted ho:
[5, 4, 3, 2, 1]

Comparisons:
(n-1) + (n-2) + ... + 1
≈ n²

Time Complexity:
O(n²)

----------------------------------------------------
BEST CASE (OPTIMIZED VERSION):
----------------------------------------------------
Array already sorted ho:
[1, 2, 3, 4, 5]

- First pass me koi swap nahi hota
- swapped = false
- Loop turant break ho jaata hai

Time Complexity:
O(n)

====================================================
SPACE COMPLEXITY
====================================================

O(1)

WHY?
----------------------------------------------------
- In-place sorting
- No extra array or memory used
- Sirf ek boolean flag + loop variables

====================================================
IMPORTANT CHARACTERISTICS
====================================================

✔️ In-place Algorithm
✔️ Stable Sort
✔️ Adaptive (with swapped optimization)
❌ Large datasets ke liye inefficient

====================================================
INTERVIEW GOLD LINE
====================================================
"Bubble sort repeatedly swaps adjacent elements
to move the largest element to the end, and with
early-exit optimization, it achieves O(n) best-case
time complexity."

====================================================
*/
