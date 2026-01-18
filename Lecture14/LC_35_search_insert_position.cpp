#include <bits/stdc++.h>
using namespace std;

/*
====================================================
LeetCode 35 — Search Insert Position
====================================================

PROBLEM:
----------------------------------------------------
- Ek sorted array diya hota hai
- Ek target value di hoti hai
- Agar target array me exist karta hai
  → uska index return karo
- Agar exist nahi karta
  → us position ka index return karo
    jahan target insert hona chahiye

IMPORTANT:
----------------------------------------------------
- Array sorted hona chahiye
- Insert karne ke baad order maintain rehna chahiye
====================================================

FIRST-THOUGHT PRINCIPLE (INTUITION):
----------------------------------------------------
Socho tum ek sorted shelf me books rakh rahe ho 📚

- Agar exact book mil jaaye → wahi position
- Agar book nahi mile →
  jahan pehli baar koi badi book dikhe,
  wahi insert position hogi

👉 Ye condition monotonic hai
👉 Sorted array + monotonic condition
👉 Binary Search BEST choice
====================================================
*/

int searchInsert(vector<int>& nums, int target) {

    int n = nums.size();

    /*
    ------------------------------------------------
    Search Space Definition
    ------------------------------------------------
    start = 0
    end   = n - 1

    index = n isliye rakha hai kyunki:
    - Agar target sabse bada hua
      to insert position n (last ke baad) hogi
    */
    int start = 0, end = n - 1;
    int index = n;

    // Jab tak search space valid hai
    while(start <= end) {

        // Safe mid calculation
        int mid = start + (end - start) / 2;

        // Case 1: Exact target mil gaya
        if(nums[mid] == target) {
            return mid;
        }

        // Case 2: Target mid se bada hai
        // Right half me search karo
        else if(nums[mid] < target) {
            start = mid + 1;
        }

        // Case 3: nums[mid] > target
        // Ye ek possible insert position ho sakti hai
        else {
            index = mid;      // potential answer store
            end = mid - 1;    // left side me aur check karo
        }
    }

    // Agar target nahi mila,
    // to index hi correct insert position hogi
    return index;
}

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

nums = [1, 3, 5, 6]

CASE 1:
target = 5

start=0, end=3
mid=1 → nums[1]=3 < 5 → start=2
mid=2 → nums[2]=5 → FOUND
return 2

----------------------------------------------------

CASE 2:
target = 2

start=0, end=3
mid=1 → nums[1]=3 > 2
index=1, end=0

start=0, end=0
mid=0 → nums[0]=1 < 2 → start=1

Loop ends → return index = 1

----------------------------------------------------

CASE 3:
target = 7

start=0, end=3
mid=1 → 3 < 7 → start=2
mid=2 → 5 < 7 → start=3
mid=3 → 6 < 7 → start=4

Loop ends → index = 4
(return n)

====================================================
TIME COMPLEXITY
====================================================
O(log n)

WHY?
----------------------------------------------------
- Har iteration me search space half hoti ja rahi hai
- Binary Search use ho raha hai

====================================================
SPACE COMPLEXITY
====================================================
O(1)

WHY?
----------------------------------------------------
- Sirf constant variables use ho rahe hain
- No extra array / recursion

====================================================
INTERVIEW GOLD LINE
====================================================
"We use binary search to find the first index
where the element is greater than or equal to
the target, which gives the correct insert position
in logarithmic time."
====================================================
*/
