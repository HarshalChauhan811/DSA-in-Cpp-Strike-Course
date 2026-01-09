#include <bits/stdc++.h>
using namespace std;

/*
====================================================
Problem: Third Maximum Number
LeetCode: 414
====================================================

Goal:
- Array me distinct elements ke hisaab se
  third maximum element find karna hai
- Agar 3 distinct elements exist nahi karte,
  to maximum (largest) element return karna hai
====================================================
*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        int n = nums.size();

        /*
        🔹 WHY long long + LLONG_MIN ?

        nums[i] ki value int ke extreme negative tak ja sakti hai
        Example:
        nums = {-1, -2, -3}

        Agar hum initial value -1 ya koi normal int le lete,
        to comparison galat ho sakta hai.

        LLONG_MIN ka matlab:
        👉 "Sabse chhoti possible value"
        Taaki array ka koi bhi element usse bada hi ho
        aur comparison safe rahe
        */

        // =================================================
        // STEP 1: Largest (First Maximum) nikaalna
        // =================================================
        long long first = LLONG_MIN;

        for(int i = 0; i < n; i++) {
            if(nums[i] > first) {
                first = nums[i];
            }
        }

        /*
        =================================================
        STEP 2: Second Maximum nikaalna
        - First (largest) ko ignore karke
        =================================================
        */
        long long second = LLONG_MIN;
        bool secondFound = false;

        for(int i = 0; i < n; i++) {
            if(nums[i] != first && nums[i] > second) {
                second = nums[i];
                secondFound = true;
            }
        }

        // Agar second maximum exist hi nahi karta
        // (distinct elements < 2)
        // to problem ke according largest return karna hai
        if(!secondFound) return first;

        /*
        =================================================
        STEP 3: Third Maximum nikaalna
        - First aur Second dono ko ignore karke
        =================================================
        */
        long long third = LLONG_MIN;
        bool thirdFound = false;

        for(int i = 0; i < n; i++) {
            if(nums[i] != first && nums[i] != second && nums[i] > third) {
                third = nums[i];
                thirdFound = true;
            }
        }

        // Agar third distinct element nahi mila
        // to again largest return karna hai
        if(!thirdFound) return first;

        // Third maximum element
        return third;
    }
};
