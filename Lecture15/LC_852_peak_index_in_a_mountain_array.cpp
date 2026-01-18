#include <bits/stdc++.h>
using namespace std;

/*
====================================================
LeetCode 852 — Peak Index in a Mountain Array
====================================================

PROBLEM:
----------------------------------------------------
- Ek mountain array diya hota hai
- Mountain array ka structure:
  strictly increasing → peak → strictly decreasing
- Peak element ka index return karna hai

Example:
----------------------------------------------------
arr = [0, 2, 4, 3, 1]
Peak element = 4
Answer = index 2

====================================================
FIRST-THOUGHT PRINCIPLE (INTUITION)
----------------------------------------------------
Mountain array me:
- Peak ke left side → increasing order
- Peak ke right side → decreasing order

Observation:
----------------------------------------------------
- Agar arr[mid] < arr[mid + 1]
  → hum increasing slope par hain
  → peak RIGHT side me hoga

- Agar arr[mid] > arr[mid + 1]
  → hum decreasing slope par hain
  → peak LEFT side ya mid ho sakta hai

👉 Ye condition MONOTONIC hai
👉 Isliye Binary Search BEST choice
====================================================
*/

int peakIndexInMountainArray(vector<int>& arr) {

    int start = 0;
    int end = arr.size() - 1;

    /*
    ------------------------------------------------
    Binary Search on Mountain Array
    ------------------------------------------------
    Note:
    - mid-1 aur mid+1 access hota hai
    - Mountain array guarantee karta hai
      ki peak ke dono side elements exist karte hain
    */
    while(start <= end) {

        // Safe mid calculation
        int mid = start + (end - start) / 2;

        // -------------------------------
        // Case 1: mid hi peak hai
        // -------------------------------
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }

        // -------------------------------
        // Case 2: Increasing slope
        // Peak right side me hoga
        // -------------------------------
        else if(arr[mid] > arr[mid - 1]) {
            start = mid + 1;
        }

        // -------------------------------
        // Case 3: Decreasing slope
        // Peak left side me hoga
        // -------------------------------
        else {
            end = mid - 1;
        }
    }

    // Safety return (practically kabhi nahi aayega)
    return -1;
}

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

arr = [0, 2, 4, 3, 1]

start = 0, end = 4
mid = 2

arr[2] = 4
arr[1] = 2
arr[3] = 3

Condition:
4 > 2 && 4 > 3 → TRUE

return 2

====================================================
TIME COMPLEXITY
====================================================
O(log n)

WHY?
----------------------------------------------------
- Har step me search space half ho rahi hai
- Binary search use ho raha hai

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
- Mountain array guaranteed hota hai
  (peak always exists)
- Condition monotonic hone ki wajah se
  binary search apply hota hai
- Linear scan O(n) hota,
  binary search O(log n) me solve karta hai

====================================================
INTERVIEW GOLD LINE
====================================================
"We leverage the monotonic property of a mountain
array and apply binary search to locate the peak
element in O(log n) time."
====================================================
*/
