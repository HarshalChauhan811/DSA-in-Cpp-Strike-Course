#include <bits/stdc++.h>
using namespace std;

/*
====================================================
ALGORITHM: Selection Sort
====================================================

Core Idea (First Thought Principle):
-----------------------------------
Har iteration me:
- Remaining unsorted part me se
  sabse chhota element dhoondo
- Us element ko uski correct position
  (starting index) par swap kar do

👉 Isliye naam hai "Selection" Sort
====================================================
*/

class Solution {
public:
    vector<int> selectionSort(vector<int>& arr) {

        int n = arr.size();

        /*
        ------------------------------------------------
        Outer loop:
        i = 0 → smallest element ko index 0 pe laana
        i = 1 → 2nd smallest ko index 1 pe laana
        i = 2 → 3rd smallest ko index 2 pe laana
        ...
        ------------------------------------------------
        */
        for(int i = 0; i < n; i++) {

            // Maan ke chalte hain ki
            // current index i hi sabse chhota hai
            int index = i;

            /*
            Inner loop:
            - i+1 se end tak traverse karte hain
            - actual smallest element dhoondhte hain
            */
            for(int j = i + 1; j < n; j++) {

                // Agar arr[j] current minimum se chhota hai
                // to index update kar do
                if(arr[j] < arr[index]) {
                    index = j;
                }
            }

            /*
            Ab index ke paas smallest element ka index hai
            Usko current position (i) par swap kar dete hain
            */
            swap(arr[index], arr[i]);
        }

        // Sorted array return
        return arr;
    }
};


// 🧠 Dry Run (Clear Understanding)
// arr = [64, 25, 12, 22, 11]

// i = 0 → smallest = 11 → swap with index 0
// [11, 25, 12, 22, 64]

// i = 1 → smallest = 12 → swap with index 1
// [11, 12, 25, 22, 64]

// i = 2 → smallest = 22 → swap with index 2
// [11, 12, 22, 25, 64]

// Sorted ✅



// ⏱️ Time & Space Complexity (Interview Ready)
// ⏱ Time Complexity
// O(n²)

// Why?

// Outer loop → n times

// Inner loop → n-1, n-2, ...

// Total comparisons ≈ n²

// 📦 Space Complexity

// O(1)

// Why?

// Sorting in-place

// No extra array / memory used

// ⚠️ Important Characteristics
// Property	Selection Sort
// In-place	✅ Yes
// Stable	❌ No
// Best Case	O(n²)
// Worst Case	O(n²)
// Adaptive	❌ No

// 🎯 Interview One-Liner
// “Selection sort repeatedly selects the smallest element from the unsorted portion and places it at the correct position, taking O(n²) time and O(1) space.”

// 🧠 When to Use / Avoid
// ✅ Good for learning & interviews

// ❌ Not used in real projects for large data

// ❌ Slower than Quick / Merge / Heap sort

