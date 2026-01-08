// Topic     : Linear Search
// Platform  : GeeksforGeeks (C++) & LeetCode
// TC        : O(n)
// SC        : O(1)

// ----------------------------------------------------
// GFG Problem Link:
// https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
//
// LeetCode Problem where this logic fits:
// 👉 LeetCode 704 – Binary Search
// 👉 Linear search approach (brute force) also works
// ----------------------------------------------------

class Solution {
public:
    // Function to search an element in the array
    int search(int arr[], int n, int x) {

        // Linear Search:
        // Har element ko ek-ek karke check karte hain
        for(int i = 0; i < n; i++) {

            // Agar element mil gaya
            if(arr[i] == x) {
                // Index return kar do
                return i;
            }
        }

        // Agar poore array me element nahi mila
        return -1;
    }
};

/*
IMPORTANT NOTES (GFG - C++):

1️⃣ GFG me normal array (int arr[]) ke saath
    arr.size() ka use nahi hota

2️⃣ Array ka size pehle se 'n' ke form me diya hota hai,
    isi liye loop n tak chalta hai

3️⃣ Linear Search unsorted array ke liye suitable hota hai
*/


// ----------------------------------------------------
// LeetCode Version (Vector Based)
// Problem: LeetCode 704 – Binary Search
// Note   : Ye solution linear search hai (brute force)
// ----------------------------------------------------

class SolutionLC {
public:
    int search(vector<int>& arr, int key) {

        // Vector ke case me arr.size() use hota hai
        for(int i = 0; i < arr.size(); i++) {

            if(arr[i] == key) {
                return i;
            }
        }

        return -1;
    }
};
