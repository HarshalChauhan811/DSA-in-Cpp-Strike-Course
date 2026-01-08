// Link:
// https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1
// Topic : Missing Number in Array
// Platforms : GeeksforGeeks & LeetCode

// =======================================================
// APPROACH 1: Brute Force (❌ TLE aayega)
// =======================================================
// Reason: 2 nested loops use ho rahe hain → O(n^2)

int missingNum(vector<int>& arr) {
    int size = arr.size();

    // 1 se (size + 1) tak har number check kar rahe hain
    for(int i = 1; i <= size + 1; i++) {

        bool found = false;

        // Array traverse karke check karte hain
        // kya current number i present hai ya nahi
        for(int j = 0; j < size; j++) {
            if(arr[j] == i) {
                found = true;
                break;
            }
        }

        // Agar number array me nahi mila
        // wahi missing number hoga
        if(found == false) {
            return i;
        }
    }
}



// =======================================================
// APPROACH 2: Sum Formula (✅ Efficient)
// =======================================================
// Time Complexity : O(n)
// Space Complexity: O(1)

int missingNum(vector<int>& arr) {
    int size = arr.size();

    int sum = 0;
    long long n = size + 1;

    // Array ke saare elements ka sum
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // First n natural numbers ka sum
    // Formula: n * (n + 1) / 2
    n = n * (n + 1) / 2;

    // Missing number = expected sum - actual sum
    return n - sum;
}



// =======================================================
// APPROACH 3: XOR Method (⭐ Interview Favorite)
// =======================================================
// Time Complexity : O(n)
// Space Complexity: O(1)

class Solution {
public:
    int missingNum(vector<int>& arr) {

        int size = arr.size();
        int ans = 0;

        // Step 1: Array ke saare elements ka XOR
        for(int i = 0; i < size; i++) {
            ans = ans ^ arr[i];
        }

        // Step 2: 1 se (size + 1) tak ka XOR
        int x = 0;
        for(int i = 1; i <= size + 1; i++) {
            x = x ^ i;
        }

        // Step 3: Final XOR
        // Jo number missing hai wahi result bachega
        return ans ^ x;
    }
};



// =======================================================
// LEETCODE EQUIVALENT
// Problem: 268. Missing Number
// =======================================================

class Solution {
public:
    int missingNumber(vector<int>& arr) {

        int n = arr.size();
        int sum = 0;

        // Array me present elements ka sum
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }

        // 0 se n tak ke numbers ka expected sum
        // Formula: n * (n + 1) / 2
        int totalSum = n * (n + 1) / 2;

        // Missing number = expected sum - actual sum
        return totalSum - sum;
    }
};
