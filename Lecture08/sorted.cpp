// File Name : check_sorted_monotonic.cpp
// Topic     : Array Order Checking
// TC        : O(n)
// SC        : O(1)

// ----------------------------------------------------
// GFG Problem:
// Check if an Array is Sorted
// Link:
// https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
// ----------------------------------------------------

// Function to check whether array is sorted in non-decreasing order
bool isSorted(int arr[], int n) {

    // Traverse till second last element
    // Compare current element with next element
    for(int i = 0; i < n - 1; i++) {

        // Agar previous element next se bada hai
        // Matlab array sorted nahi hai
        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }

    // Agar koi violation nahi mili
    return true;
}

/*
OUTPUT EXAMPLE:
Input  : [1, 2, 3, 4, 5]
Output : true

Input  : [1, 3, 2, 4]
Output : false
*/


// ----------------------------------------------------
// LeetCode Problem:
// 896. Monotonic Array
// Same core logic, thoda generalized version
// ----------------------------------------------------

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        // Initially maan ke chalte hain array increasing hai
        bool inc = true;

        // Initially maan ke chalte hain array decreasing hai
        bool dec = true;

        // 2nd element se traversal start karte hain
        for(int i = 1; i < nums.size(); i++) {

            // Agar current element previous se chhota hai
            // To increasing order possible nahi hai
            if(nums[i] < nums[i - 1]) {
                inc = false;
            }

            // Agar current element previous se bada hai
            // To decreasing order possible nahi hai
            if(nums[i] > nums[i - 1]) {
                dec = false;
            }
        }

        // Agar increasing ya decreasing me se koi ek true hai
        // To array monotonic hai
        return inc || dec;
    }
};

/*
IMPORTANT UNDERSTANDING:

- Sorted Array (GFG):
  → Sirf non-decreasing order check hota hai

- Monotonic Array (LeetCode):
  → Ya to poora increasing ho
  → Ya poora decreasing ho

- Equal elements allowed hote hain dono cases me
*/
