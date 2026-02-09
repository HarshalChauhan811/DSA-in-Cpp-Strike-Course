#include <bits/stdc++.h>
using namespace std;

/*
====================================================
LeetCode 153 — Find Minimum in Rotated Sorted Array
====================================================

PROBLEM:
----------------------------------------------------
- Ek sorted array diya hota hai
- Array ko kuch times rotate kar diya gaya hota hai
- Elements UNIQUE hote hain
- Minimum element find karna hai

Example:
----------------------------------------------------
nums = [10,20,30,40,50,60,70,1,2,3]
Minimum = 1

====================================================
FIRST-THOUGHT PRINCIPLE (INTUITION)
----------------------------------------------------
Original sorted array:
[1,2,3,10,20,30,40,50,60,70]

Rotation ke baad:
----------------------------------------------------
- Array do sorted parts me divide ho jaata hai
- Minimum element wahi hota hai
  jahan rotation break hota hai

Observation:
----------------------------------------------------
- Agar nums[0] <= nums[n-1]
  → array already sorted hai
  → minimum directly nums[0] hoga

- Otherwise:
  → Minimum element rotated part me hoga

👉 Condition MONOTONIC hai
👉 Binary Search BEST choice
====================================================
*/

class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();

        /*
        ------------------------------------------------
        EDGE CASE: Array already sorted
        ------------------------------------------------
        Example:
        [1,2,3,4,5]

        nums[0] <= nums[n-1]
        → directly first element is minimum
        */
        if(nums[0] <= nums[n - 1]) {
            return nums[0];
        }

        int left = 0;
        int right = n - 1;
        int minElement;   // rotated minimum store karega

        /*
        ------------------------------------------------
        Binary Search on Rotated Sorted Array
        ------------------------------------------------
        */
        while(left <= right) {

            // Safe mid calculation
            int mid = left + (right - left) / 2;

            /*
            --------------------------------------------
            Case 1: mid LEFT sorted portion me hai
            --------------------------------------------
            nums[mid] >= nums[0]
            matlab:
            left se mid tak sorted hai
            minimum RIGHT portion me hoga
            */
            if(nums[mid] >= nums[0]) {
                left = mid + 1;
            }

            /*
            --------------------------------------------
            Case 2: mid RIGHT (rotated) portion me hai
            --------------------------------------------
            nums[mid] < nums[0]
            matlab:
            mid ek possible minimum ho sakta hai
            */
            else {
                minElement = nums[mid]; // store possible answer
                right = mid - 1;        // left side me aur check karo
            }
        }

        // Rotated minimum element return
        return minElement;
    }
};

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

nums = [10,20,30,40,50,60,70,1,2,3]

nums[0] <= nums[n-1] ?
10 <= 3 → FALSE (array rotated)

left=0, right=9
mid=4 → nums[mid]=50 >= nums[0]=10
→ left = 5

left=5, right=9
mid=7 → nums[mid]=1 < nums[0]
→ minElement = 1
→ right = 6

left=5, right=6
mid=5 → nums[mid]=60 >= nums[0]
→ left = 6

left=6, right=6
mid=6 → nums[mid]=70 >= nums[0]
→ left = 7

Loop ends → return minElement = 1

====================================================
TIME COMPLEXITY
====================================================
O(log n)

WHY?
----------------------------------------------------
- Binary search apply ho raha hai
- Har iteration me search space half ho rahi hai

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
- Ye approach UNIQUE elements ke liye hai
- nums[0] ko reference banaya gaya hai
- Alternative approach nums[end] ke comparison se bhi hoti hai
- Duplicates ke liye different problem (LC 154)

====================================================
INTERVIEW GOLD LINE
====================================================
"We first check if the array is already sorted.
Otherwise, we use binary search to locate the
rotation point, which gives the minimum element
in logarithmic time."
====================================================
*/
