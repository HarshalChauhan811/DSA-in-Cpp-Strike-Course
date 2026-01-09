#include <bits/stdc++.h>
using namespace std;

/*
====================================================
PROBLEM: Rotate Array Clockwise by k
====================================================
GFG Link:
https://www.geeksforgeeks.org/problems/rotate-array-clockwise/1

LeetCode Equivalent:
189. Rotate Array
====================================================
*/


// ===================================================
// APPROACH 1: Repeated Right Rotation (❌ TLE)
// ===================================================
// Time Complexity : O(n * k)
// Space Complexity: O(1)
//
// Idea:
// - Har iteration me array ko right by 1 rotate karte hain
// - Ye process k times repeat hoti hai
//
// ❌ Jab k bada hota hai (LeetCode constraints),
//    to Time Limit Exceeded aa jaata hai
// ===================================================

void rotate_clockwise_bruteforce(vector<int>& arr, int k) {

    int n = arr.size();

    while(k--) {

        // Step 1: Last element ko store kar lo
        int temp = arr[n - 1];

        // Step 2: Baaki elements ko ek step right shift karo
        for(int i = n - 2; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }

        // Step 3: Last element ko first position pe daal do
        arr[0] = temp;
    }
}


// ===================================================
// APPROACH 2: Extra Array + Modulo (✅ Accepted)
// ===================================================
// Time Complexity : O(n)
// Space Complexity: O(n)
//
// Idea:
// - Ek helper array banao
// - (i + k) % n use karke
//   har element ko uski new position pe daalo
//
// ✅ Fast hai, TLE nahi aata
// ❌ Extra space lagta hai
// ===================================================

void rotate_clockwise_extra_array(vector<int>& arr, int k) {

    int n = arr.size();

    // Agar k size se bada hai, to reduce kar do
    k = k % n;

    // Helper array
    vector<int> temp(n);

    // Har element ko rotated position pe daal rahe hain
    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Helper array ko original array me copy
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}


// ===================================================
// APPROACH 3: Reverse Method (⭐ BEST / OPTIMAL)
// ===================================================
// Time Complexity : O(n)
// Space Complexity: O(1)
//
// Idea:
// 1) Poora array reverse karo
// 2) First k elements reverse karo
// 3) Remaining n-k elements reverse karo
//
// ⭐ LeetCode interview favourite
// ===================================================

void reverse_part(vector<int>& arr, int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate_clockwise_reverse(vector<int>& arr, int k) {

    int n = arr.size();

    // k ko n ke andar le aate hain
    k = k % n;

    // Step 1: Poora array reverse
    reverse_part(arr, 0, n - 1);

    // Step 2: First k elements reverse
    reverse_part(arr, 0, k - 1);

    // Step 3: Remaining elements reverse
    reverse_part(arr, k, n - 1);
}


// ===================================================
// LEETCODE VERSION
// Problem: 189. Rotate Array
// (Extra Array Approach shown here)
// ===================================================

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        // Extra rotations ka koi fayda nahi
        k = k % n;

        // Helper array
        vector<int> arr(n);

        // Har element ko k steps right move kar rahe hain
        for(int i = 0; i < n; i++) {
            arr[(i + k) % n] = nums[i];
        }

        // Result ko original array me copy
        for(int i = 0; i < n; i++) {
            nums[i] = arr[i];
        }
    }
};


/*
====================================================
INTERVIEW QUICK SUMMARY
====================================================
Approach                    Time        Space   Verdict
----------------------------------------------------
Repeated Rotation           O(n * k)    O(1)    ❌ TLE
Extra Array + Modulo        O(n)        O(n)    ✅ Accepted
Reverse Method              O(n)        O(1)    ⭐ Best

Golden Interview Line:
"Brute force is simple but slow. Extra array works fine,
but the most optimal solution uses the reverse technique
with O(1) extra space."
====================================================
*/
