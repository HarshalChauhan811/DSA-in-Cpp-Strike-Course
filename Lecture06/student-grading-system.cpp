#include<iostream>
using namespace std;

void findGrade(int marks){
    
    // Ye function student ke marks ke basis par grade decide karta hai
    // marks → input hai (student ke obtained marks)

    if(marks > 90){
        // Agar marks 90 se zyada hain
        cout << "Grade: A+" << endl;
    }
    else if(marks > 80){
        // 81–90 ke beech aane par
        cout << "Grade: A" << endl;
    }
    else if(marks > 70){
        // 71–80 ke beech aane par
        cout << "Grade: B+" << endl;
    }
    else if(marks > 60){
        // 61–70 ke beech aane par
        cout << "Grade: B" << endl;
    }
    else{
        // 60 ya usse kam marks ke liye
        cout << "Grade: C" << endl;
    }

    // Note:
    // else-if ladder isliye use ki gayi hai
    // kyunki sirf ek hi condition true honi chahiye
}


int main(){
   
    // Teen students ke marks
    int student1 = 78;
    int student2 = 93;
    int student3 = 40;

    // Same grading logic ko baar-baar likhne ke bajaye
    // hum function ko call kar rahe hain (code reuse)

    findGrade(student1);   // 78 → B+
    findGrade(student2);   // 93 → A+
    findGrade(student3);   // 40 → C

    // Yahi functions ka sabse bada fayda hai:
    // ❌ logic repeat nahi hota
    // ✅ code clean & readable rehta hai
    // ✅ changes ek jagah se handle ho jate hain

    return 0;
}
