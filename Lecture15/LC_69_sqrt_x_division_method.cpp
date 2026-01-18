#include <bits/stdc++.h>
using namespace std;

/*
====================================================
LeetCode 69 — Sqrt(x)
====================================================

PROBLEM:
----------------------------------------------------
- Ek non-negative integer x diya hota hai
- x ka square root nikaalna hai
- Decimal part ignore karna hai (floor value)
- Built-in sqrt() use nahi karna

EXAMPLE:
----------------------------------------------------
x = 8
sqrt(8) ≈ 2.82 → answer = 2

====================================================
FIRST-THOUGHT PRINCIPLE (INTUITION)
----------------------------------------------------
Hume aisa maximum number dhoondhna hai jiske liye:

mid * mid ≤ x

BUT:
----------------------------------------------------
mid * mid se overflow ho sakta hai
(especially jab x bada ho)

👉 Isliye comparison ko rewrite karte hain:
mid ≤ x / mid

👉 Ye condition monotonic hai
👉 Sorted search space
👉 Binary Search BEST choice
====================================================
*/

int mySqrt(int x) {

    /*
    ------------------------------------------------
    EDGE CASES
    ------------------------------------------------
    0 ka sqrt = 0
    1 ka sqrt = 1
    */
    if(x <= 1) {
        return x;
    }

    /*
    ------------------------------------------------
    SEARCH SPACE DEFINITION
    ------------------------------------------------
    sqrt(x) hamesha 1 se x ke beech hota hai
    */
    int start = 1;
    int end = x;
    int ans;   // floor sqrt store karega

    // Binary Search
    while(start <= end) {

        // Safe mid calculation
        int mid = start + (end - start) / 2;

        // -------------------------------
        // CASE 1: Perfect square
        // mid * mid == x
        // (division form me likha hai)
        // -------------------------------
        if(mid == x / mid) {
            return mid;
        }

        // -------------------------------
        // CASE 2: mid² < x
        // mid ek possible answer ho sakta hai
        // Right side me better answer dhoondo
        // -------------------------------
        else if(mid < x / mid) {
            ans = mid;          // floor value store
            start = mid + 1;    // right side move
        }

        // -------------------------------
        // CASE 3: mid² > x
        // mid zyada bada ho gaya
        // Left side move karo
        // -------------------------------
        else {
            end = mid - 1;
        }
    }

    // Jab exact square na mile
    // tab last stored ans hi floor sqrt hoga
    return ans;
}

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

x = 8

start = 1, end = 8
mid = 4
4 == 8/4 ?  → NO
4 < 8/4 ?   → 4 < 2 → NO
→ end = 3

start = 1, end = 3
mid = 2
2 == 8/2 ?  → NO
2 < 8/2 ?   → 2 < 4 → YES
ans = 2
start = 3

start = 3, end = 3
mid = 3
3 == 8/3 ?  → NO
3 < 8/3 ?   → 3 < 2 → NO
→ end = 2

Loop ends → return ans = 2

====================================================
TIME COMPLEXITY
====================================================
O(log x)

WHY?
----------------------------------------------------
- Har iteration me search space half ho jaati hai
- Binary Search apply ho raha hai

====================================================
SPACE COMPLEXITY
====================================================
O(1)

WHY?
----------------------------------------------------
- Sirf constant variables use ho rahe hain
- No extra array / recursion stack

====================================================
IMPORTANT INTERVIEW NOTES
====================================================
- x/mid comparison use karna
  overflow-safe approach hai
- Ye method mid*mid se zyada safe hai
- Floor sqrt return karta hai
- Binary Search > Linear Search

====================================================
INTERVIEW GOLD LINE
====================================================
"We use binary search with division-based comparison
(mid <= x/mid) to avoid overflow and compute the floor
square root in O(log x) time."

====================================================
*/
