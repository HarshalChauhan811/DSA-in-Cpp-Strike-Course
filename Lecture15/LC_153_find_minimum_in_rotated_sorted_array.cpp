#include <bits/stdc++.h>
using namespace std;

/*
====================================================
LeetCode 153 — Find Minimum in Rotated Sorted Array
====================================================

PROBLEM:
----------------------------------------------------
- Ek sorted array diya hota hai
- Usko kuch times rotate kar diya gaya hai
- Array me UNIQUE elements hote hain
- Minimum element find karna hai

Example:
----------------------------------------------------
nums = [4,5,6,7,0,1,2]
Minimum = 0

====================================================
FIRST-THOUGHT PRINCIPLE (INTUITION)
----------------------------------------------------
Original array sorted hota hai:
[0,1,2,4,5,6,7]

Rotation ke baad:
- Array do sorted parts me divide ho jaata hai
- Minimum element wahi hota hai
  jahan rotation hua hota hai

Observation:
----------------------------------------------------
- Agar nums[mid] > nums[end]
  → mid left sorted part me hai
  → minimum RIGHT side me hoga

- Agar nums[mid] <= nums[end]
  → mid right sorted part me hai
  → minimum LEFT side ya mid ho sakta hai

👉 Condition MONOTONIC hai
👉 Binary Search BEST choice
====================================================
*/

int findMin(vector<int>& nums) {

    int start = 0;
    int end = nums.size() - 1;

    /*
    ------------------------------------------------
    Binary Search on Rotated Sorted Array
    ------------------------------------------------
    Loop condition:
    start < end
    Kyunki hume ek single index pe converge karna hai
    */
    while (start < end) {

        // Safe mid calculation
        int mid = start + (end - start) / 2;

        // -------------------------------
        // Case 1: nums[mid] > nums[end]
        // Minimum RIGHT side me hoga
        // -------------------------------
        if (nums[mid] > nums[end]) {
            start = mid + 1;
        }
        // -------------------------------
        // Case 2: nums[mid] <= nums[end]
        // Minimum LEFT side ya mid ho sakta hai
        // -------------------------------
        else {
            end = mid;
        }
    }

    /*
    ------------------------------------------------
    Loop ke baad:
    start == end
    wahi index minimum element ka hoga
    ------------------------------------------------
    */
    return nums[start];
}

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

nums = [4,5,6,7,0,1,2]

start=0, end=6
mid=3 → nums[mid]=7 > nums[end]=2
→ start = 4

start=4, end=6
mid=5 → nums[mid]=1 <= nums[end]=2
→ end = 5

start=4, end=5
mid=4 → nums[mid]=0 <= nums[end]=1
→ end = 4

start == end == 4
return nums[4] = 0

====================================================
TIME COMPLEXITY
====================================================
O(log n)

WHY?
----------------------------------------------------
- Har iteration me search space half ho rahi hai
- Binary Search apply ho raha hai

====================================================
SPACE COMPLEXITY
====================================================
O(1)

WHY?
----------------------------------------------------
- Sirf constant variables use ho rahe hain
- No extra array / recursion

====================================================
IMPORTANT INTERVIEW NOTES
====================================================
- Ye solution UNIQUE elements ke liye hai
- Agar duplicates allowed ho,
  to slightly different logic lagega (LC 154)
- Linear scan O(n) hota,
  binary search O(log n) me solve karta hai

====================================================
INTERVIEW GOLD LINE
====================================================
"We use binary search by comparing mid with end
to identify the unsorted half, allowing us to find
the minimum element in a rotated sorted array
in logarithmic time."
====================================================
*/
