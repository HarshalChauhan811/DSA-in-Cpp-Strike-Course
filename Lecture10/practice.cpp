/*
====================================================================
LECTURE 10 — TIME & SPACE COMPLEXITY (LOOPS)
====================================================================

📌 FIRST-THOUGHT PRINCIPLE:
--------------------------------
Time Complexity ka matlab hai:
"Actual instruction kitni baar execute ho rahi hai?"

Space Complexity ka matlab hai:
"Extra memory kitni use ho rahi hai?"

⚠️ IMPORTANT RULES (INTERVIEW GOLD):
------------------------------------
1) Sirf extra memory count hoti hai
   (arrays, vectors, recursion stack, etc.)
2) Loop variables (i, j, k) count nahi hote
3) Constants ignore hote hain
4) Worst case consider hota hai
5) Dominant term hi final complexity hoti hai
====================================================================
*/


// ================================================================
// 1️⃣ SINGLE LOOP — LINEAR TIME
// ================================================================

for(int i = 0; i < n; i++){
    cout << "Hello";
}

/*
🧠 EXPLANATION:
--------------------------------
- Loop 0 se n-1 tak chala
- Total iterations = n
- Har iteration me constant kaam ho raha hai

⏱ TIME COMPLEXITY:
--------------------------------
O(n)

📦 SPACE COMPLEXITY:
--------------------------------
O(1)

WHY O(1)?
- Sirf ek variable 'i'
- Koi array, vector, recursion nahi
*/


// ================================================================
// 2️⃣ DOUBLE NESTED LOOP — QUADRATIC TIME
// ================================================================

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout << "Hello";
    }
}

/*
🧠 EXPLANATION:
--------------------------------
- Outer loop = n times
- Inner loop = n times for EACH outer loop

Total executions:
n × n = n²

⏱ TIME COMPLEXITY:
--------------------------------
O(n²)

📦 SPACE COMPLEXITY:
--------------------------------
O(1)

NOTE:
Nested loop ka matlab hamesha O(n²) nahi hota,
dependency dekhni padti hai (next example).
*/


// ================================================================
// 3️⃣ TRIANGULAR LOOP — DEPENDENT NESTING
// ================================================================

for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
        cout << "Hello";
    }
}

/*
🧠 EXPLANATION:
--------------------------------
i = 0 → 1 iteration
i = 1 → 2 iterations
i = 2 → 3 iterations
...
i = n-1 → n iterations

Total work:
1 + 2 + 3 + ... + n
= n(n + 1) / 2
≈ n²

⏱ TIME COMPLEXITY:
--------------------------------
O(n²)

📦 SPACE COMPLEXITY:
--------------------------------
O(1)

INTERVIEW TIP:
Triangular loops ≠ n² directly
Math laga ke confirm karo.
*/


// ================================================================
// 4️⃣ LOOP WITH SKIP (i += 2)
// ================================================================

for(int i = 0; i < n; i = i + 2){
    cout << "Hello";
}

/*
🧠 EXPLANATION:
--------------------------------
- Loop n/2 times chala
- Constants ignore hote hain

⏱ TIME COMPLEXITY:
--------------------------------
O(n)

📦 SPACE COMPLEXITY:
--------------------------------
O(1)

RULE:
O(n/2), O(3n), O(100n) → sab O(n) hote hain
*/


// ================================================================
// 5️⃣ EXPONENTIAL INCREMENT — LOGARITHMIC TIME
// ================================================================

for(int i = 1; i < n; i = i * 2){
    cout << "Hello";
}

/*
🧠 EXPLANATION:
--------------------------------
i values:
1 → 2 → 4 → 8 → 16 → ...

Har iteration me value double ho rahi hai

Kitni baar double karoge jab tak n na aaye?
👉 log₂(n) times

⏱ TIME COMPLEXITY:
--------------------------------
O(log n)

📦 SPACE COMPLEXITY:
--------------------------------
O(1)

REAL-LIFE EXAMPLE:
Binary Search
*/


// ================================================================
// 6️⃣ EXPONENTIAL DECREMENT — LOGARITHMIC TIME
// ================================================================

for(int i = n; i > 0; i = i / 2){
    cout << "Hello";
}

/*
🧠 EXPLANATION:
--------------------------------
- Har step me value half ho rahi hai
- Same pattern as binary search

⏱ TIME COMPLEXITY:
--------------------------------
O(log n)

📦 SPACE COMPLEXITY:
--------------------------------
O(1)
*/


// ================================================================
// 7️⃣ TRIPLE NESTED LOOP — CUBIC TIME
// ================================================================

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        for(int k = 0; k < n; k++){
            cout << "Hello";
        }
    }
}

/*
🧠 EXPLANATION:
--------------------------------
- Outer = n
- Middle = n
- Inner = n

Total operations:
n × n × n = n³

⏱ TIME COMPLEXITY:
--------------------------------
O(n³)

📦 SPACE COMPLEXITY:
--------------------------------
O(1)

INDUSTRY REALITY:
O(n³) = ❌ almost always rejected
*/


// ================================================================
// 8️⃣ INNER LOOP = i * i
// ================================================================

for(int i = 0; i < n; i++){
    for(int j = 0; j < i * i; j++){
        cout << "Hello";
    }
}

/*
🧠 EXPLANATION:
--------------------------------
Inner loop runs:
0² + 1² + 2² + ... + (n-1)²

Sum of squares:
≈ n³

⏱ TIME COMPLEXITY:
--------------------------------
O(n³)

📦 SPACE COMPLEXITY:
--------------------------------
O(1)
*/


/*
====================================================================
FINAL MASTER SUMMARY (INTERVIEW READY)
====================================================================

Loop Pattern                Time Complexity
--------------------------------------------
Single loop                O(n)
Nested loop                O(n²)
Triangular loop             O(n²)
Logarithmic loop            O(log n)
Triple nested loop          O(n³)

SPACE COMPLEXITY:
--------------------------------------------
Agar koi extra array / memory nahi →
O(1)

GOLDEN INTERVIEW LINE:
--------------------------------------------
"Time complexity is determined by how many
times the innermost statement executes,
not by how many loops are written."

====================================================================
*/
