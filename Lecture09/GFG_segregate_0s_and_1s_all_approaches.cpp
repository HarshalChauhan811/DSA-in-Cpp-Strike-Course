#include <bits/stdc++.h>
using namespace std;

/*
====================================================
PROBLEM: Segregate 0s and 1s
====================================================
GFG Link:
https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1

Goal:
- Array me saare 0s left side me
- Saare 1s right side me lane hain
====================================================
*/


// ===================================================
// APPROACH 1: Counting Method (Simple & Intuitive)
// ===================================================
// Time Complexity : O(n)
// Space Complexity: O(1)
//
// Idea:
// 1) Count karo kitne 0s hain
// 2) Pehle count0 positions me 0 daal do
// 3) Baaki sab positions me 1 daal do
// ===================================================

void segregate0and1_counting(vector<int>& arr) {

    int n = arr.size();
    int count0 = 0;

    // STEP 1: Count number of 0s
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0)
            count0++;
    }

    // STEP 2: First count0 indices me 0 bhar do
    for(int i = 0; i < count0; i++) {
        arr[i] = 0;
    }

    // STEP 3: Remaining positions me 1 bhar do
    for(int i = count0; i < n; i++) {
        arr[i] = 1;
    }
}


// ===================================================
// APPROACH 2: Two Pointer Method (Optimal ⭐)
// ===================================================
// Time Complexity : O(n)
// Space Complexity: O(1)
//
// Idea:
// - Left pointer start se move karega
// - Right pointer end se move karega
// - Galat jagah pade 0 aur 1 ko swap karte jao
//
// ⭐ Interview favourite approach
// ===================================================

void segregate0and1_two_pointer(vector<int>& arr) {

    int left = 0;
    int right = arr.size() - 1;

    while(left < right) {

        // Jab tak left pe 0 mile, aage badhate raho
        while(arr[left] == 0 && left < right)
            left++;

        // Jab tak right pe 1 mile, peeche le jao
        while(arr[right] == 1 && left < right)
            right--;

        // Agar left pe 1 aur right pe 0 mila
        // to swap kar do
        if(left < right) {
            swap(arr[left], arr[right]);
        }
    }
}


/*
====================================================
INTERVIEW QUICK SUMMARY
====================================================
Approach           Time        Space    Verdict
------------------------------------------------
Counting           O(n)        O(1)     ✅ Simple
Two Pointer        O(n)        O(1)     ⭐ Best

Golden Line:
"Since array contains only 0s and 1s, we can
efficiently segregate them using the two-pointer
technique in a single traversal."
====================================================
*/
