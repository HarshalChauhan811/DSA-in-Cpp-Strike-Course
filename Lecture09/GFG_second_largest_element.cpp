// Link:
// https://www.geeksforgeeks.org/problems/second-largest3735/1
//
// Topic : Second Largest Element in Array
// Platform : GeeksforGeeks
// TC : O(n)
// SC : O(1)

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {

        int n = arr.size();

        // =========================================
        // STEP 1: Find the largest element
        // =========================================
        int largest = arr[0];

        // Pure array ko traverse karke
        // maximum (largest) element nikaal rahe hain
        for(int i = 1; i < n; i++) {
            if(arr[i] > largest) {
                largest = arr[i];
            }
        }

        // =========================================
        // STEP 2: Find the second largest element
        // =========================================
        // Initially -1 rakha hai (GFG constraint ke hisaab se)
        int second_largest = -1;

        for(int i = 0; i < n; i++) {

            // Largest element ko ignore kar rahe hain
            // kyunki second largest distinct hona chahiye
            if(arr[i] == largest) {
                continue;
            }

            // Largest ke alawa jo sabse bada element hoga
            // wahi second largest hoga
            else if(arr[i] > second_largest) {
                second_largest = arr[i];
            }
        }

        // Agar second largest exist nahi karta
        // to -1 hi return hoga (problem requirement)
        return second_largest;
    }
};
