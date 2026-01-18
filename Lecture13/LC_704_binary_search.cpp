#include <bits/stdc++.h>
using namespace std;

/*
====================================================
LeetCode 704 — Binary Search
====================================================

PROBLEM STATEMENT:
----------------------------------------------------
- Ek sorted array diya hota hai
- Ek target value di hoti hai
- Target ka index return karo
- Agar target exist nahi karta → -1 return karo

IMPORTANT CONDITION:
----------------------------------------------------
Binary Search tabhi kaam karta hai jab
array SORTED ho

====================================================
FIRST THOUGHT PRINCIPLE (WHY Binary Search?)
----------------------------------------------------
Sochne wali baat:
- Array sorted hai
- Agar middle element chhota hai → left part useless
- Agar middle element bada hai → right part useless

👉 Har comparison me aadha array eliminate ho jaata hai
👉 Isliye Binary Search = FAST (log n)

====================================================
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        // Search space define kar rahe hain
        int start = 0;
        int end = n - 1;

        // Jab tak search space valid hai
        while(start <= end) {

            /*
            MID CALCULATION:
            ------------------------------------------------
            ❌ int mid = (start + end) / 2;
               (Overflow ka risk hota hai)

            ✅ Correct & Safe Formula:
               start + (end - start) / 2
            */
            int mid = (start + end) / 2;

            // Case 1: Target mil gaya
            if(nums[mid] == target) {
                return mid;
            }

            // Case 2: Target mid se bada hai
            // Right half me search karna hai
            else if(nums[mid] < target) {
                start = mid + 1;
            }

            // Case 3: Target mid se chhota hai
            // Left half me search karna hai
            else {
                end = mid - 1;
            }
        }

        // Agar target array me kahin nahi mila
        return -1;
    }
};

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

nums = [1, 3, 5, 7, 9]
target = 7

start = 0, end = 4
mid = 2 → nums[2] = 5 < 7
→ start = 3

start = 3, end = 4
mid = 3 → nums[3] = 7
→ FOUND → return 3

====================================================
TIME COMPLEXITY:
----------------------------------------------------
O(log n)

WHY?
- Har iteration me search space half ho rahi hai

====================================================
SPACE COMPLEXITY:
----------------------------------------------------
O(1)

WHY?
- Sirf constant variables (start, end, mid)
- No extra array / recursion

====================================================
INTERVIEW GOLD LINE:
----------------------------------------------------
"Binary search works by repeatedly dividing
the search space into half, achieving O(log n)
time on sorted arrays."

====================================================
*/
