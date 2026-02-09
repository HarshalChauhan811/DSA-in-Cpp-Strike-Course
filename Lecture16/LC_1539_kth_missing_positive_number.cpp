#include <bits/stdc++.h>
using namespace std;

/*
====================================================
LeetCode 1539 — Kth Missing Positive Number
====================================================

PROBLEM:
----------------------------------------------------
- Ek strictly increasing sorted array diya hota hai
- Array me kuch positive integers missing hote hain
- Tumhe k-th missing positive number find karna hai

Example:
----------------------------------------------------
arr = [2,3,4,7,11]
k = 5

Missing numbers:
1, 5, 6, 8, 9, ...

Answer = 9

====================================================
FIRST-THOUGHT PRINCIPLE (INTUITION)
----------------------------------------------------
Socho tum natural numbers likh rahe ho:

1, 2, 3, 4, 5, 6, 7, 8, 9, ...

Aur saath-saath array se compare kar rahe ho.

Observation:
----------------------------------------------------
- Agar array ka element current expected number se bada hai
  → matlab ek number missing mil gaya
- Jaise-jaise missing milta hai,
  k ko aage shift kar dete hain

Is approach me:
----------------------------------------------------
- missingNumber = k se start karte hain
- Har array element ke saath compare karte hain
- Jaise hi arr[i] > missingNumber,
  wahi k-th missing number hota hai

👉 Simple linear scan
👉 No extra space
====================================================
*/

int findKthPositive(vector<int>& arr, int k) {

    /*
    ------------------------------------------------
    missingNumber ka matlab:
    ------------------------------------------------
    - Ye wo number hai jo hum currently expect kar rahe hain
    - Initially k rakha gaya hai kyunki:
      k missing numbers milne ke baad
      answer wahi shift hota hai
    */
    int missingNumber = k;

    /*
    ------------------------------------------------
    Array traversal
    ------------------------------------------------
    Har element ke liye:
    - Agar arr[i] > missingNumber
      → matlab missingNumber array me nahi aaya
      → wahi k-th missing number hai
    - Warna:
      → ek missing number cross ho gaya
      → missingNumber ko aage badha do
    */
    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] > missingNumber) {
            return missingNumber;
        }
        else {
            // Ek number skip ho gaya
            missingNumber++;
        }
    }

    /*
    ------------------------------------------------
    Agar array ke end tak pahunch gaye,
    aur k-th missing abhi bhi nahi mila,
    to missingNumber hi answer hoga
    ------------------------------------------------
    */
    return missingNumber;
}

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

arr = [2,3,4,7,11]
k = 5

Initial:
missingNumber = 5

i=0 → arr[0]=2
2 > 5 ? NO → missingNumber = 6

i=1 → arr[1]=3
3 > 6 ? NO → missingNumber = 7

i=2 → arr[2]=4
4 > 7 ? NO → missingNumber = 8

i=3 → arr[3]=7
7 > 8 ? NO → missingNumber = 9

i=4 → arr[4]=11
11 > 9 ? YES → return 9

====================================================
TIME COMPLEXITY
====================================================
O(n)

WHY?
----------------------------------------------------
- Single pass array traversal
- No nested loops

====================================================
SPACE COMPLEXITY
====================================================
O(1)

WHY?
----------------------------------------------------
- Sirf ek variable use ho raha hai
- No extra array or data structure

====================================================
IMPORTANT INTERVIEW NOTES
====================================================
- Ye approach linear hai
- Binary search based optimized solution bhi exist karta hai
- Ye solution clarity ke liye best hai
- Constraints chhote ho to ye approach perfect hai

====================================================
INTERVIEW GOLD LINE
====================================================
"We simulate missing numbers by shifting k forward
whenever an array element is encountered, allowing
us to find the k-th missing positive number in a
single pass with constant space."
====================================================
*/
