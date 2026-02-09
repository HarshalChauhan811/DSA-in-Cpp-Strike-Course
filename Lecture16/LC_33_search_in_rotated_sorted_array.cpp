#include <bits/stdc++.h>
using namespace std;

/*
====================================================
LeetCode 33 — Search in Rotated Sorted Array
====================================================

PROBLEM:
----------------------------------------------------
- Ek sorted array diya hota hai
- Array ko kuch times rotate kar diya gaya hota hai
- Elements UNIQUE hote hain
- Ek key/target diya hota hai
- Target ka index return karna hai
- Agar target nahi mile → -1 return

Example:
----------------------------------------------------
arr = [4,5,6,7,0,1,2]
key = 0
Answer = 4

====================================================
FIRST-THOUGHT PRINCIPLE (INTUITION)
----------------------------------------------------
Rotated sorted array ka nature:
- Array do sorted parts me divided hota hai
- Har mid par:
  👉 ya to LEFT part sorted hota hai
  👉 ya RIGHT part sorted hota hai

Binary Search ka idea:
----------------------------------------------------
- Pehle identify karo kaunsa part sorted hai
- Phir check karo key us sorted part ke range me aati hai ya nahi
- Agar aati hai → usi side jao
- Nahi aati → doosri side jao

👉 Condition MONOTONIC hai
👉 Binary Search BEST choice
====================================================
*/

int search(vector<int>& arr, int key) {

    int n = arr.size() - 1;

    int left = 0;
    int right = n;

    // Jab tak search space valid hai
    while(left <= right) {

        // Safe mid calculation
        int mid = left + (right - left) / 2;

        // -------------------------------
        // Case 1: Key mil gayi
        // -------------------------------
        if(arr[mid] == key) {
            return mid;
        }

        /*
        =================================================
        Case 2: LEFT part sorted hai
        =================================================
        Condition:
        arr[mid] >= arr[0]
        matlab:
        left se mid tak sorted hai
        */
        else if(arr[mid] >= arr[0]) {

            /*
            Agar key LEFT sorted range me aati hai:
            arr[left] <= key < arr[mid]
            to LEFT side search karo
            */
            if(key >= arr[left] && key < arr[mid]) {
                right = mid - 1;
            }
            // warna RIGHT side search karo
            else {
                left = mid + 1;
            }
        }

        /*
        =================================================
        Case 3: RIGHT part sorted hai
        =================================================
        mid se right tak sorted hoga
        */
        else {

            /*
            Agar key RIGHT sorted range me aati hai:
            arr[mid] < key <= arr[right]
            to RIGHT side search karo
            */
            if(key > arr[mid] && key <= arr[right]) {
                left = mid + 1;
            }
            // warna LEFT side search karo
            else {
                right = mid - 1;
            }
        }
    }

    // Agar key array me nahi mili
    return -1;
}

/*
====================================================
DRY RUN (STEP-BY-STEP)
====================================================

arr = [4,5,6,7,0,1,2]
key = 0

left=0, right=6
mid=3 → arr[mid]=7

arr[mid] >= arr[0] → LEFT part sorted

Check:
key>=arr[left]? 0>=4 → NO
→ RIGHT side search

left=4, right=6
mid=5 → arr[mid]=1

arr[mid] < arr[0] → RIGHT part sorted

Check:
key>arr[mid]? 0>1 → NO
→ LEFT side search

left=4, right=4
mid=4 → arr[mid]=0
FOUND → return 4

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
- Duplicates ke liye logic thoda change hota hai (LC 81)
- Linear search O(n) hota,
  binary search O(log n) me solve karta hai

====================================================
INTERVIEW GOLD LINE
====================================================
"We determine which half of the rotated array is sorted
and decide the search direction accordingly, achieving
O(log n) time complexity using binary search."
====================================================
*/
