#include <bits/stdc++.h>
using namespace std;

/*
====================================================
PROBLEM: Majority Element
====================================================
LeetCode:
169. Majority Element

Definition:
- Majority element wo hota hai
  jo array me n/2 se zyada baar appear kare

Note:
- LeetCode guarantee deta hai
  ki majority element hamesha exist karega
====================================================
*/


// ===================================================
// APPROACH 1: Brute Force (❌ Slow / Basic Thinking)
// ===================================================
// Time Complexity : O(n^2)
// Space Complexity: O(1)
//
// Idea:
// - Har element ke liye poore array me count karo
// - Agar kisi element ka count > n/2 ho gaya
//   to wahi majority element hai
//
// ❌ Large input pe slow ho jaata hai
// ===================================================

int majorityElement_Brute(vector<int>& nums) {

    int n = nums.size();

    for(int i = 0; i < n; i++) {

        int count = 0;

        // nums[i] ko poore array me count karo
        for(int j = 0; j < n; j++) {
            if(nums[i] == nums[j])
                count++;
        }

        // Agar count n/2 se zyada ho gaya
        if(count > n / 2)
            return nums[i];
    }

    // LeetCode guarantee deta hai,
    // practically ye line kabhi execute nahi hogi
    return -1;
}


// ===================================================
// APPROACH 2: Moore’s Voting Algorithm (⭐ BEST)
// ===================================================
// Time Complexity : O(n)
// Space Complexity: O(1)
//
// First Thought Principle:
// - Majority element count baaki sab se zyada hota hai
// - Isliye pairing (cancelation) ke baad bhi
//   wahi element bacha reh jaata hai
//
// ⭐ Interview favourite approach
// ===================================================

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = 0;
        int count = 0;

        // STEP 1: Potential majority element find karo
        for(int i = 0; i < nums.size(); i++) {

            // Agar count 0 ho gaya
            // to current element ko naya candidate banao
            if(count == 0) {
                candidate = nums[i];
            }

            // Same element mila → count++
            // Different mila → count--
            if(nums[i] == candidate)
                count++;
            else
                count--;
        }

        /*
        STEP 2: Verification (Optional)

        LeetCode 169 guarantee deta hai
        ki majority element hamesha exist karega,
        isliye verification ki zarurat nahi hoti
        */

        return candidate;
    }
};


/*
====================================================
FIRST-THOUGHT PRINCIPLE (REAL LIFE EXAMPLE)
====================================================
Socho ek room me log khade hain:

- Majority element = wo group
  jisme log baaki sab se zyada hain

Tum har baar:
- Same group ke log dekho → +1
- Different group ke log dekho → -1

Agar majority group exist karta hai,
to pairing ke baad bhi wahi bachega
====================================================
*/


/*
====================================================
INTERVIEW QUICK SUMMARY
====================================================
Approach                Time        Space    Verdict
----------------------------------------------------
Brute Force             O(n^2)      O(1)     ❌ Slow
Moore’s Voting Algo     O(n)        O(1)     ⭐ Best

Golden Interview Line:
"Using Moore’s Voting Algorithm, we can find
the majority element in linear time and
constant space."
====================================================
*/
