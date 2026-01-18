#include <bits/stdc++.h>
using namespace std;

/*
====================================================
ALGORITHM: Insertion Sort
====================================================

PROBLEM:
----------------------------------------------------
- Array diya hota hai
- Use ascending order me sort karna hai

====================================================
FIRST THOUGHT PRINCIPLE (WHY Insertion Sort?)
----------------------------------------------------
Real-life example:
- Cards haath me pakad ke arrange karna
- Har naya card uthao
- Usko apni correct jagah par insert karo

Insertion Sort ka idea:
----------------------------------------------------
- Left part hamesha sorted maana jaata hai
- Right part unsorted hota hai
- Ek-ek element uthao aur
  sorted part me uski correct position pe daal do
====================================================
*/

class Solution {
public:
    vector<int> insertionSort(vector<int>& arr) {

        int n = arr.size();

        /*
        ------------------------------------------------
        Outer loop:
        i = 1 se start hota hai
        kyunki single element already sorted hota hai
        ------------------------------------------------
        */
        for(int i = 1; i < n; i++) {

            /*
            Inner loop:
            - Current element ko left side ke
              sorted part me insert karte hain
            - Jab tak element apni correct jagah
              na paunch jaaye, swap karte raho
            */
            for(int j = i; j > 0; j--) {

                // Agar current element pichhle se chhota hai
                // to swap kar do
                if(arr[j] < arr[j - 1]) {
                    swap(arr[j], arr[j - 1]);
                }
                else {
                    // Jaise hi correct position mil jaaye
                    // further comparisons ki zarurat nahi
                    break;
                }
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

arr = [5, 3, 4, 1]

i = 1:
compare 3 and 5 → swap
[3, 5, 4, 1]

i = 2:
compare 4 and 5 → swap
[3, 4, 5, 1]
compare 4 and 3 → correct position → stop

i = 3:
compare 1 and 5 → swap
[3, 4, 1, 5]
compare 1 and 4 → swap
[3, 1, 4, 5]
compare 1 and 3 → swap
[1, 3, 4, 5]

Sorted ✅

====================================================
TIME COMPLEXITY ANALYSIS
====================================================

WORST CASE:
----------------------------------------------------
Array reverse sorted ho:
[5, 4, 3, 2, 1]

Operations:
i = 1 → 1 comparison
i = 2 → 2 comparisons
i = 3 → 3 comparisons
...
i = n-1 → (n-1) comparisons

Total operations:
1 + 2 + 3 + ... + (n-1)
≈ n²

Time Complexity:
O(n²)

----------------------------------------------------
BEST CASE:
----------------------------------------------------
Array already sorted ho:
[1, 2, 3, 4, 5]

Har iteration me:
- Sirf 1 comparison hota hai
- Inner loop turant break ho jaata hai

Time Complexity:
O(n)

====================================================
SPACE COMPLEXITY
====================================================

O(1)

WHY?
----------------------------------------------------
- Sorting in-place ho rahi hai
- Koi extra array / memory use nahi
- Sirf temporary swap variables

====================================================
IMPORTANT CHARACTERISTICS
====================================================

✔️ In-place Algorithm
✔️ Stable Sort
✔️ Adaptive (already sorted data pe fast)
❌ Large datasets ke liye slow

====================================================
INTERVIEW GOLD LINE
====================================================
"Insertion sort is adaptive and efficient
for nearly sorted arrays, with O(n) best-case
and O(n²) worst-case time complexity."

====================================================
*/
