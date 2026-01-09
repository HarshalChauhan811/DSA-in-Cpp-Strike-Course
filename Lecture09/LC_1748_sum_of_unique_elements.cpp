#include <bits/stdc++.h>
using namespace std;

/*
====================================================
PROBLEM: Sum of Unique Elements
====================================================
Practice Link:
https://strikes.in/practice/68aedbbf98d05a5eb2de2d4c

LeetCode Equivalent:
1748. Sum of Unique Elements
====================================================
*/


// ===================================================
// APPROACH 1: Brute Force (❌ Simple but Slow)
// ===================================================
// Time Complexity : O(n^2)
// Space Complexity: O(1)
//
// Idea:
// - Har element ke liye poore array me check karo
// - Agar kahin aur same value mil gayi
//   to wo unique nahi hai
// ===================================================

int sumOfUnique_Brute(vector<int>& nums) {

    int n = nums.size();
    int sum = 0;

    // Har element ko check kar rahe hain
    for(int i = 0; i < n; i++) {

        bool foundDuplicate = false;

        // nums[i] ko baaki elements se compare karo
        for(int j = 0; j < n; j++) {

            // Same index skip
            if(i == j) continue;

            // Duplicate mil gaya
            if(nums[i] == nums[j]) {
                foundDuplicate = true;
                break;
            }
        }

        // Agar duplicate nahi mila
        // tabhi sum me add karo
        if(!foundDuplicate) {
            sum += nums[i];
        }
    }

    return sum;
}


// ===================================================
// APPROACH 2: Frequency Array (✅ Optimal)
// ===================================================
// Time Complexity : O(n)
// Space Complexity: O(1)  (Fixed size array)
//
// Idea:
// - Har number ki frequency count karo
// - Jo number sirf ek baar aaya ho
//   usko sum me add karo
//
// NOTE:
// LeetCode constraints ke according
// values 1 se 100 ke beech hoti hain
// ===================================================
// ===================================================
// LEETCODE VERSION
// Problem: 1748. Sum of Unique Elements
// ===================================================

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        vector<int> freq(101, 0);

        // Frequency count
        for(int num : nums) {
            freq[num]++;
        }

        int sum = 0;

        // Add only unique elements
        for(int i = 1; i <= 100; i++) {
            if(freq[i] == 1) {
                sum += i;
            }
        }

        return sum;
    }
};


/*
====================================================
INTERVIEW QUICK SUMMARY
====================================================
Approach           Time        Space    Verdict
------------------------------------------------
Brute Force        O(n^2)      O(1)     ❌ Slow
Frequency Array    O(n)        O(1)     ✅ Best

Golden Interview Line:
"We count frequency of each element and add
only those elements whose frequency is exactly one."
====================================================
*/
