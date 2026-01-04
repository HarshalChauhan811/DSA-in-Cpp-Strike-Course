// ================= NUMBER PYRAMID (MANUAL WAY) =================
//
// Expected Output:
//
//     1
//    121
//   12321
//  1234321
//
// Ye code pyramid ko LINE BY LINE manually print kar raha hai
// Har block ek row ko represent karta hai
// --------------------------------------------------------------


// ================= ROW 1 =================
// 4 spaces print → pyramid ko center me lane ke liye
for(int j = 1; j <= 4; j++){
    cout << " ";
}

// Increasing numbers → sirf 1 print
for(int j = 1; j <= 1; j++){
    cout << 1;
}

cout << endl;   // next row


// ================= ROW 2 =================
// 3 spaces print → ek space kam, kyunki row badh rahi hai
for(int j = 1; j <= 3; j++){
    cout << " ";
}

// Increasing numbers → 1 2
for(int j = 1; j <= 2; j++){
    cout << j;
}

// Decreasing numbers → 1
for(int j = 1; j >= 1; j--){
    cout << j;
}

cout << endl;


// ================= ROW 3 =================
// 2 spaces print
for(int j = 1; j <= 2; j++){
    cout << " ";
}

// Increasing numbers → 1 2 3
for(int j = 1; j <= 3; j++){
    cout << j;
}

// Decreasing numbers → 2 1
for(int j = 2; j >= 1; j--){
    cout << j;
}

cout << endl;


// ================= ROW 4 =================
// 1 space print
for(int j = 1; j <= 1; j++){
    cout << " ";
}

// Increasing numbers → 1 2 3 4
for(int j = 1; j <= 4; j++){
    cout << j;
}

// Decreasing numbers → 3 2 1
for(int j = 3; j >= 1; j--){
    cout << j;
}

cout << endl;
