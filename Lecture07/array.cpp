#include<iostream>
using namespace std;

int main(){

    // =====================================================
    // 🔹 BASIC PROBLEM UNDERSTANDING
    // =====================================================
    // 5 students, store the marks of 5 students
    // Agar sirf 5 students ho to kaam chal sakta hai,
    // lekin agar 100 students ke marks store karne ho
    // aur unka average nikalna ho,
    // to individual variables approach fail ho jaati hai ❌

    // 100 students ke marks ko store karna hai, average of all students marks??

    // =====================================================
    // 🔹 WITHOUT ARRAY (POOR APPROACH – LEARNING PURPOSE)
    // =====================================================
    // Har student ke liye alag variable banana scalable nahi hota

    // int marks1 = 70, marks2 = 80, marks3 = 40, marks4 = 50, marks5 = 90;

    // cout<<marks1<<endl;
    // cout<<marks2<<endl;
    // cout<<marks3<<endl;
    // cout<<marks4<<endl;
    // cout<<marks5<<endl;

    
    // =====================================================
    // 🔹 AVERAGE CALCULATION (WITHOUT ARRAY)
    // =====================================================
    // Loop ka proper use possible nahi
    // Code repetitive ho jaata hai

    // // int sum = 0;
    // // for(int i=0;i<5;i++){
    // //     sum+=marks1;
    // // }

    // Direct calculation possible hai
    // cout<<(marks1+marks2+marks3+marks4+marks5)/5<<endl;
    

    // =====================================================
    // 🔹 ARRAY INTRODUCTION
    // =====================================================
    // Array same type ke multiple values ko ek hi variable me store karta hai
    // Array ka size pehle se define hota hai
    // Index hamesha 0 se start hota hai

    // array size ko declare, type
    // int marks[5] = {70,80,40,50,90};

    // Element access using index
    // // cout<<marks[2]<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;


    // =====================================================
    // 🔹 ARRAY TRAVERSAL USING LOOP
    // =====================================================
    // Loop ke through poora array easily access ho jaata hai

    // for(int i=0;i<5;i++){
    // cout<<marks[i]<<endl;
    // }
    

    // =====================================================
    // 🔹 ARRAY DECLARATION + ASSIGNMENT
    // =====================================================
    // Pehle array declare, baad me values assign kar sakte hain

    // int arr[3];

    // arr[0] = 5;
    // arr[1] = 7;
    // arr[2] = 2;

    // for(int i=0;i<3;i++){
    //     cout<<arr[i]<<endl;
    // }


    // =====================================================
    // 🔹 PARTIAL INITIALIZATION
    // =====================================================
    // Agar sirf first value initialize karte ho,
    // baaki values automatically 0 ho jaati hain

    // first value hi insert kari, baaki sab zero ban jaayenge
    // int arr[4] = {12};

    // for(int i=0;i<4;i++){
    //     cout<<arr[i]<<endl;
    // }


    // =====================================================
    // 🔹 WHY ARRAY INDEX STARTS FROM 0
    // =====================================================
    // Array internally memory address + offset ke concept pe kaam karta hai
    // First element ka offset = 0 hota hai

    // array, index zero se start kyon hota hai?
    // int arr[10]
    // int n;
    // cin>>n;
    // int arr[n];
    

    // =====================================================
    // 🔹 USER INPUT IN ARRAY
    // =====================================================
    // Runtime pe array ke elements lene ke liye loop use hota hai

    // int n;
    // cout<<"Tell me the size of an array\n";
    // cin>>n;

    // int arr[8];

    // cout<<"Enter the value in array";
    // for(int i=0;i<8;i++){
    //     cin>>arr[i];
    // }

    // for(int i=0;i<8;i++){
    //     cout<<arr[i]<<endl;
    // }


    // =====================================================
    // 🔹 MEMORY ADDRESS CONCEPT
    // =====================================================
    // Har variable ka alag memory address hota hai
    // Array elements contiguous memory me store hote hain

    // int a = 10;
    // int b = 10;

    // b = 20;
    // a = 50;

    // cout<<&a<<endl;
    // cout<<&b<<endl;


    // =====================================================
    // 🔹 LINEAR SEARCH
    // =====================================================
    // Array ke andar kisi value ko search karne ka simplest method

    int marks[5] = {70,80,40,30,20};
    
    int student_mark = 10;

    // Direct approach bhi possible hai
    // for(int i=0;i<5;i++){
    //     if(student_mark==marks[i]){
    //         cout<<"YES";
    //         return 0;
    //     }
    // }

    // Agar upar se return nahi hua
    // to value exist nahi karti
    // cout<<"No"<<endl;


    // =====================================================
    // 🔹 FLAG BASED SEARCH (BETTER PRACTICE)
    // =====================================================
    // found = true → value mili
    // found = false → value nahi mili

    // found= true??
    bool found = false;

    for(int i=0;i<5;i++){
        if(marks[i]==student_mark){
            found = true;
            break;   // value mil gayi, aage search ki zarurat nahi
        }
    }

    if(found){
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }


    // =====================================================
    // 🔹 FIND HIGHEST ELEMENT
    // =====================================================
    // Pehle element ko highest maan lo
    // Phir compare karte jao

    // 
    // int heightest = marks[0];
    // int index = 0;

    // for(int i=1;i<5;i++){
    //     if(marks[i]>heightest){
    //         heightest = marks[i];
    //         index = i;
    //     }
    // }

    // cout<<heightest<<endl<<index<<endl;


    // =====================================================
    // 🔹 AVERAGE USING ARRAY
    // =====================================================
    // Loop ke through sum nikalna easy hota hai

    // int sum = 0;

    // for(int i=0;i<5;i++){
    //     sum+=marks[i];
    // }

    // cout<<sum/5<<endl;


    // =====================================================
    // 🔹 ARRAY MEMORY ADDRESSES
    // =====================================================
    // Array elements continuous memory me store hote hain

    // int a = 10;
    // cout<<&a;

    // for(int i=0;i<5;i++){
    //     cout<<&marks[i]<<endl;
    // }


    // =====================================================
    // 🔹 FIND MINIMUM ELEMENT IN ARRAY
    // =====================================================
    // First element ko minimum maan kar comparison karte hain

    int minimum = marks[0];

    for(int i=1;i<5;i++){
        if(marks[i] < minimum){
            minimum = marks[i];
        }
    }

    cout<<"Minimum element: "<<minimum<<endl;


    // =====================================================
    // 🔹 REVERSE THE ARRAY
    // =====================================================
    // Two pointer approach:
    // start → first index
    // end → last index
    // Jab tak start < end, swap karte jao

    int start = 0;
    int end = 4;

    while(start < end){
        int temp = marks[start];
        marks[start] = marks[end];
        marks[end] = temp;

        start++;
        end--;
    }

    // Reversed array print
    cout<<"Reversed array: ";
    for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
    }

    return 0;
}
