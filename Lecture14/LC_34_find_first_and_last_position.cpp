#include <bits/stdc++.h>
using namespace std;

/*
====================================================
LeetCode 34 — Find First and Last Position of Element
====================================================

PROBLEM:
----------------------------------------------------
- Ek sorted array diya hota hai
- Ek target value di hoti hai
- Target ka:
  👉 first occurrence
  👉 last occurrence
  find karna hai

- Agar target exist nahi karta
  → return [-1, -1]

IMPORTANT:
----------------------------------------------------
Array SORTED hona chahiye
====================================================

FIRST-THOUGHT PRINCIPLE (INTUITION):
----------------------------------------------------
Binary Search normally:
- target milte hi return kar deta hai

But yahan:
----------------------------------------------------
- First occurrence chahiye
  → left side me aur target ho sakta hai
- Last occurrence chahiye
  → right side me aur target ho sakta hai

👉 Isliye:
- Binary Search ko thoda modify karte hain
- Target milne ke baad bhi search continue karte hain
====================================================
*/

vector<int> searchRange(vector<int>& nums, int target) {

    int n = nums.size();

    /*
    =================================================
    PART 1: Find FIRST occurrence of target
    =================================================
    Strategy:
    - Target mile to answer store karo
    - Phir LEFT side me search continue rakho
    */

    int start = 0, end = n - 1;
    int index1 = -1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        // Target mil gaya
        if(nums[mid] == target) {
            index1 = mid;     // possible first occurrence
            end = mid - 1;    // left side me aur dhoondo
        }
        // Target right side me ho sakta hai
        else if(nums[mid] < target) {
            start = mid + 1;
        }
        // Target left side me ho sakta hai
        else {
            end = mid - 1;
        }
    }

    /*
    =================================================
    PART 2: Find LAST occurrence of target
    =================================================
    Strategy:
    - Target mile to answer store karo
    - Phir RIGHT side me search continue rakho
    */

    start = 0;
    end = n - 1;
    int index2 = -1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        // Target mil gaya
        if(nums[mid] == target) {
            index2 = mid;      // possible last occurrence
            start = mid + 1;   // right side me aur dhoondo
        }
        // Target right side me ho sakta hai
        else if(nums[mid] < target) {
            start = mid + 1;
        }
        // Target left side me ho sakta hai
        else {
            end = mid - 1;
        }
    }

    /*
    =================================================
    FINAL ANSWER
    =================================================
    index1 → first occurrence
    index2 → last occurrence
    */

    vector<int> ans;
    ans.push_back(index1);
    ans.push_back(index2);

    return ans;
}

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

nums = [5, 7, 7, 8, 8, 10]
target = 8

FIRST OCCURRENCE:
----------------------------------------------------
start=0, end=5
mid=2 → nums[2]=7 < 8 → start=3

start=3, end=5
mid=4 → nums[4]=8
index1=4 → end=3

start=3, end=3
mid=3 → nums[3]=8
index1=3 → end=2

Loop ends → first index = 3

LAST OCCURRENCE:
----------------------------------------------------
start=0, end=5
mid=2 → nums[2]=7 < 8 → start=3

start=3, end=5
mid=4 → nums[4]=8
index2=4 → start=5

start=5, end=5
mid=5 → nums[5]=10 > 8 → end=4

Loop ends → last index = 4

Final Answer = [3, 4]

====================================================
TIME COMPLEXITY
====================================================
O(log n)

WHY?
----------------------------------------------------
- Binary search use ho raha hai
- Do baar binary search chalaya
- Constants ignore → O(log n)

====================================================
SPACE COMPLEXITY
====================================================
O(1)

WHY?
----------------------------------------------------
- Sirf constant variables
- Output vector ko extra space nahi maante

====================================================
INTERVIEW GOLD LINE
====================================================
"We modify binary search to continue searching
left and right even after finding the target,
to locate the first and last occurrence in O(log n)."
====================================================
*/
