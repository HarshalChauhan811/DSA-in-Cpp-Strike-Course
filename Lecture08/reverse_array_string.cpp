// Topic     : Reverse using Two Pointer Technique
// TC        : O(n)
// SC        : O(1)

// ----------------------------------------------------
// Reverse an Array (Using vector<int>)
// ----------------------------------------------------

// Array ko reverse karna hai in-place
void reverseArray(vector<int>& arr) {

    int n = arr.size();

    // Two pointer approach:
    // i → left se start karta hai
    // n-1-i → right se start karta hai
    for(int i = 0; i < n / 2; i++) {

        // Swap left element with right element
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

/*
OUTPUT EXAMPLE:
Input  : [1, 2, 3, 4, 5]
Output : [5, 4, 3, 2, 1]
*/


// ----------------------------------------------------
// LeetCode Problem
// 344. Reverse String
// Same exact logic (Two Pointer Technique)
// ----------------------------------------------------

class Solution {
public:
    void reverseString(vector<char>& s) {

        int n = s.size();

        // Left pointer → start
        // Right pointer → end
        // Dono pointers center ki taraf move karte hain
        for(int i = 0; i < n / 2; i++) {

            // Characters ko swap kar rahe hain
            char temp = s[i];
            s[i] = s[n - 1 - i];
            s[n - 1 - i] = temp;
        }
    }
};

/*
IMPORTANT UNDERSTANDING:

- i           → left side se start karta hai
- n - 1 - i   → right side se start karta hai
- Har iteration me dono elements swap hote hain
- Dono pointers dheere-dheere center ki taraf move karte hain
*/
