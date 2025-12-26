# 🚀 Lecture 01: Introduction to C++

---

## 🧠 What is C++?

**C++ ek programming language hai** jiska use hum computer programs likhne ke liye karte hain.

### 🔹 Simple Definition (First Thought Principle)

- Computer khud se kuch nahi soch sakta ❌
- Insaan instructions likhta hai ✅
- **C++ ek aisi language hai jo insaan likhta hai aur computer samajh leta hai**
- Isi language se hum:
  - Software
  - Games
  - Applications
  - System programs
    bana sakte hain

### 👨‍💻 Created By

- **Bjarne Stroustrup** ne 1979 me banayi
- Ye **C language ke upar built** hai
- Goal: **Fast + Powerful + Control-oriented language** banana

📌 *Real-life analogy:*

> Jaise car me manual transmission hota hai jisme driver ka full control hota hai,
> waise hi C++ programmer ko system par full control deta hai.

---

## ❓ Why Do We Need C++?

### ⚡ 1. Speed and Performance

- C++ programs **bahut fast run** karte hain
- Hardware ke bahut close hote hain

**Used in:**

- 🎮 Games: GTA, Call of Duty, Fortnite
- 💻 Operating Systems: Windows, macOS
- 🌐 Browsers: Chrome, Firefox

---

### 🧩 2. Control Over Computer

C++ aapko direct control deta hai:

- Memory par
- Hardware par
- CPU par

📌 Isliye C++ ko **low-level + high-level language** bhi kaha jata hai.

---

### 🌍 3. Real-World Uses of C++

| Field        | Examples              |
| ------------ | --------------------- |
| 🎮 Games     | Unreal Engine, Unity  |
| 🖥 Systems   | Windows, Linux        |
| 🎨 Apps      | Photoshop, MS Office  |
| 🗄 Databases | MySQL, MongoDB        |
| 🌐 Browsers  | Chrome (V8 Engine)    |
| 🚗 Embedded  | Car systems, Drones   |
| 💰 Finance   | Trading / HFT Systems |

➡️ **Extra uses:**

- Database
- NodeJS (internals)
- JavaScript engines
- Game Development
- HFT (High Frequency Trading)
- ML Libraries (TensorFlow core)

---

### 🧱 4. Foundation Language

C++ seekhne se:

- Computer kaise kaam karta hai samajh aata hai
- Memory ka concept clear hota hai
- Baaki languages (Java, Python, JS) easily samajh aati hain

---

## 🔢 Binary Number System

### 🤔 What is Binary?

- **Binary ek number system hai jisme sirf 2 digits hote hain:**
  - `0`
  - `1`

📌 Computer sirf **0 aur 1** hi samajhta hai.

### ⚡ Why Only 0 and 1?

- Computer electricity se chalta hai
- `0` = OFF (no current)
- `1` = ON (current flowing)

💡 *Real-life analogy:*

> Switch band = 0
> Switch on = 1

---

## 🔁 Decimal vs Binary

| Decimal | Binary |
| ------- | ------ |
| 0       | 0      |
| 1       | 1      |
| 2       | 10     |
| 3       | 11     |
| 4       | 100    |
| 5       | 101    |
| 10      | 1010   |

---

## 🔄 Decimal to Binary Conversion

### 📐 Method: Divide by 2

**Steps:**

1. Number ko 2 se divide karo
2. Remainder likho
3. Quotient ko phir 2 se divide karo
4. Jab tak quotient = 0 na ho jaye repeat karo
5. **Remainders ko bottom → top padho**

---

### ✍️ Example: 13 → Binary

```
13 ÷ 2 = 6  remainder 1
6  ÷ 2 = 3  remainder 0
3  ÷ 2 = 1  remainder 1
1  ÷ 2 = 0  remainder 1

Bottom to top: 1101
```

✅ **13 = 1101**

---

## 🔁 Binary to Decimal Conversion

### 📐 Method: Powers of 2

**Steps:**

1. Rightmost digit se 2⁰ start karo
2. Har digit ko uske power se multiply karo
3. Sabko add karo

---

### ✍️ Example: 1101 → Decimal

```
1×8 + 1×4 + 0×2 + 1×1
= 8 + 4 + 0 + 1
= 13
```

✅ **1101 = 13**

---

## 📦 Variables in C++

### ❓ What is a Variable?

Variable ek **container** hota hai jo memory me data store karta hai.

```cpp
int age = 25;  // age naam ka container jisme 25 store hai
```

- `int` → data type (container ka type)
- `age` → variable ka naam
- `25` → value

💡 *Real-life analogy:*

> Bottle = variable
> Bottle ka type = data type
> Pani = value

---

### ✅ Variable Naming Rules

**Allowed:**

```cpp
int age;
int student_name;
int rollNo123;
int _value;
```

**Not Allowed:**

```cpp
int 123roll;      // number se start nahi
int student-name; // hyphen allowed nahi
int int;          // keyword use nahi
int my name;      // space allowed nahi
```

---

### 🧾 Declaring Variables

```cpp
// Method 1: declare then assign
int age;
age = 25;

// Method 2: declare + assign
int age = 25;

// Method 3: multiple variables
int a = 5, b = 10, c = 15;
```

---

## 🧬 Data Types in C++

### 🔹 Basic Data Types

| Data Type | Use              | Size    | Example                  |
| --------- | ---------------- | ------- | ------------------------ |
| int       | Whole numbers    | 4 bytes | int age = 25;            |
| double    | Decimal          | 8 bytes | double price = 99.9;     |
| char      | Single character | 1 byte  | char grade = 'A';        |
| bool      | True / False     | 1 byte  | bool isPassed = true;    |
| string    | Text             | Varies  | string name = "Harshal"; |

---

### 💻 Example Program (With Comments)

```cpp
#include <iostream>   // input-output library
#include <string>     // string support
using namespace std;  // std:: likhne se bachata hai

int main() {
    int age = 25;           // integer variable
    double height = 5.9;    // decimal value
    char grade = 'A';       // single character
    bool isStudent = true;  // true/false
    string name = "Harshal"; // string text

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student: " << isStudent << endl;

    return 0; // program successful end
}
```

---

### ⚠️ Important Notes

**char:** single quotes use karo

```cpp
char letter = 'A';  // ✅
char letter = "A";  // ❌
```

**string:** double quotes use karo

```cpp
string name = "Harshal"; // ✅
string name = 'Harshal';  // ❌
```

---

## 🔤 Strings in C++

### 🔹 Basic String Operations

```cpp
string name = "Harshal";

cout << name.length(); // length = 5

string firstName = "Harshal";
string lastName = "Chauhan";
string fullName = firstName + " " + lastName;

cout << fullName; // Harshal Chauhan

cout << name[0]; // R
cout << name[1]; // o
```

---

### 🧾 String Input with Spaces

❌ Problem:

```cpp
cin >> name;  // sirf first word leta hai
```

✅ Solution:

```cpp
getline(cin, name);  // poori line leta hai
```

---

## 📚 Final Summary (One-Glance Revision)

- C++ ek **fast & powerful programming language** hai
- System, games, browsers, finance sab me use hoti hai
- Computer sirf **binary (0 & 1)** samajhta hai
- Decimal ↔ Binary conversion important foundation hai
- Variable = memory container
- Data types decide karte hain data ka nature
- Strings text handle karti hain

🚀 **Strong foundation = Strong future in programming**

---

✨ *Prepared with ❤️ for deep understanding & long-term clarity*

