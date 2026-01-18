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
- Built-in sqrt() function use nahi karna

EXAMPLE:
----------------------------------------------------
x = 8
sqrt(8) ≈ 2.82  → answer = 2

====================================================
FIRST-THOUGHT PRINCIPLE (INTUITION)
----------------------------------------------------
Socho tum number line pe khade ho
aur tumhe aisa number dhoondhna hai jiska:

number × number ≤ x
aur jo maximum possible ho

Observation:
----------------------------------------------------
- Agar mid² < x → left side ke saare number bhi valid
- Agar mid² > x → right side ke saare number invalid

👉 Condition MONOTONIC hai
👉 Search space sorted hai
👉 Binary Search BEST choice
====================================================
*/

class Solution {
public:
    int mySqrt(int x) {

        /*
        ------------------------------------------------
        SEARCH SPACE DEFINITION
        ------------------------------------------------
        sqrt(x) hamesha 0 se x ke beech hi hota hai
        isliye binary search ka range:
        start = 0
        end   = x
        */
        int start = 0;
        int end = x;

        // ans floor sqrt store karega
        int ans = 0;

        // Jab tak search space valid hai
        while (start <= end) {

            /*
            MID CALCULATION (VERY IMPORTANT)
            ------------------------------------------------
            Safe formula use karte hain taaki overflow na ho
            */
            long long mid = start + (end - start) / 2;

            // -------------------------------
            // CASE 1: Exact square mil gaya
            // -------------------------------
            if (mid * mid == x) {
                return mid;
            }

            // -------------------------------
            // CASE 2: mid² < x
            // mid ek possible answer ho sakta hai
            // -------------------------------
            else if (mid * mid < x) {
                ans = mid;        // floor value store
                start = mid + 1;  // bigger value try karo
            }

            // -------------------------------
            // CASE 3: mid² > x
            // mid zyada bada ho gaya
            // -------------------------------
            else {
                end = mid - 1;    // chhota value try karo
            }
        }

        // Agar exact square nahi mila,
        // to last stored ans hi floor sqrt hoga
        return ans;
    }
};

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

x = 8

start = 0, end = 8
mid = 4 → 4*4 = 16 > 8 → end = 3

start = 0, end = 3
mi
