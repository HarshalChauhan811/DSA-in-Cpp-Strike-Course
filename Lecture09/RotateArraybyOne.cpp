// GFG: Cyclically Rotate an Array by One
// Right Rotation by 1

class Solution {
  public:
    void rotate(vector<int> &arr) {
        
        int n = arr.size();
        
        // ---------------- STEP 1 ----------------
        // last element ko temporary variable me store kar lo
        // taaki shift ke time lost na ho
        int temp = arr[n - 1];
        
        // ---------------- STEP 2 ----------------
        // RIGHT SE LEFT shift kar rahe hain
        // i = n-2 se 0 tak
        for(int i = n - 2; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        
        // ---------------- STEP 3 ----------------
        // saved last element ko front (0th index) pe daal do
        arr[0] = temp;
        
        /*
        ================= DRY RUN =================
        Input:  [1, 2, 3, 4, 5]
        n = 5
        
        temp = 5
        
        i = 3 → arr[4] = arr[3] → [1,2,3,4,4]
        i = 2 → arr[3] = arr[2] → [1,2,3,3,4]
        i = 1 → arr[2] = arr[1] → [1,2,2,3,4]
        i = 0 → arr[1] = arr[0] → [1,1,2,3,4]
        
        arr[0] = temp → [5,1,2,3,4]
        
        Final Output: [5,1,2,3,4]
        ===========================================
        */
        
        /*
        ========== LEFT SE RIGHT KYUN NAHI? ==========
        
        Agar left se right shift karenge:
        
        for(i = 0 to n-2)
            arr[i+1] = arr[i];
        
        Example:
        [1,2,3,4,5]
        
        i=0 → arr[1]=1 → [1,1,3,4,5]
        i=1 → arr[2]=1 → [1,1,1,4,5]
        
        ❌ Data overwrite ho jata hai
        ❌ Original values lost ho jaati hain
        
        Isliye:
        ✔ Right rotation → RIGHT SE LEFT (i--)
        ✔ Left rotation  → LEFT SE RIGHT (i++)
        =============================================
        */
    }
};
