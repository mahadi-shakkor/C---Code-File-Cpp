#include <iostream>
using namespace std;
typedef float Number;

int main() {
 
	




    return 0;
}

/*

Perfect 👍 Let’s optimize the prime-checking code by reducing the loop condition from `n/2` to `sqrt(n)`.
This makes the program run much faster for large numbers.

Here’s the improved version:

```cpp
#include <iostream>
#include <cmath>  // for sqrt()
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;  // 0 and 1 are not prime
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;  // no need to check further
            }
        }
    }

    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
```

### Example Run

```
Enter a number: 29
29 is a prime number.

Enter a number: 30
30 is not a prime number.
```

⚡ This is much faster than checking up to `n/2`.

👉 Would you like me to extend this further so it prints **all prime numbers up to a given n** (like a prime table)?

================================================================
Here’s a simple **C++ program** to check whether a number is **prime or not** using a `for` loop:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;  // 0 and 1 are not prime
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;  // no need to check further
            }
        }
    }

    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
```

### Example Run

```
Enter a number: 17
17 is a prime number.

Enter a number: 20
20 is not a prime number.
```

👉 Do you want me to also optimize this code (by checking only up to `sqrt(n)` instead of `n/2`)?

=========================================
Here’s a simple C++ program to find the **factorial of a number** using a `for` loop:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;  // use long long for larger results

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        cout << "Factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}
```

### Example Run

```
Enter a number: 5
Factorial of 5 is: 120
```

👉 Do you also want me to show you the **recursive version** of factorial in C++?

----------------------------------------------------
Got it 👍
I think you meant **“first n natural numbers”** (1, 2, 3, …, n).
Here’s a simple C++ program that uses a `for` loop to find their sum:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    // Loop to calculate sum of first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
```

### Example Run

```
Enter the value of n: 5
The sum of first 5 natural numbers is: 15
```

👉 Would you also like me to show you the **formula method** (`n*(n+1)/2`), which is faster than looping?

==============================================
Here’s a simple C++ program that uses a `for` loop to generate a multiplication table:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number to generate multiplication table: ";
    cin >> n;

    cout << "Multiplication Table of " << n << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
```

### Example Output (if you enter `5`):

```
Multiplication Table of 5:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```

👉 Do you want this to generate a table for **just one number** (like above), or a **full table grid** (like 1–10 for all numbers)?

----------------------------------------------------------------
ঠিক আছে 👍 আমি উপরের ব্যাখ্যাটা বাংলায় অনুবাদ করে দিলাম—

---

## 🌍 কেন লিপ ইয়ার থাকে

* পৃথিবী সূর্যের চারপাশে ঘুরতে সময় লাগে **৩৬৫.২৪২২ দিন** (ঠিক ৩৬৫ নয়)।
* যদি আমরা প্রতি বছর ৩৬৫ দিন হিসাব করি → প্রতি বছর আমরা প্রায় **০.২৪২২ দিন হারাই**।
* প্রায় ৪ বছরে: ০.২৪২২ × ৪ ≈ **১ দিন কমে যায়**।
* তাই ঠিক করার জন্য → **প্রতি ৪ বছর পর ১ দিন যোগ করি** (২৯ ফেব্রুয়ারি)।

👉 এজন্য প্রথম নিয়ম:
**যদি বছর ৪ দ্বারা বিভাজ্য হয় → লিপ ইয়ার।**

---

## 📉 শুধু “৪ দ্বারা বিভাজ্য” নিয়মে সমস্যা

ধরি ১০০ বছর:

* ১০০ বছর × ০.২৪২২ ≈ ২৪ অতিরিক্ত দিন।
* যদি আমরা প্রতি ৪ বছরে ১ দিন দিই → ২৫ দিন যোগ হবে।
  ❌ ১ দিন বেশি হয়ে গেল → ক্যালেন্ডার সামনে চলে যাবে।

তাই ঠিক করা হলো:
👉 **যদি ১০০ দ্বারা বিভাজ্য হয় → লিপ ইয়ার নয়।**

---

## 📈 সব শতক বছর বাদ দিলে আবার সমস্যা

এবার ৪০০ বছর ধরি:

* ৪০০ বছর × ০.২৪২২ ≈ ৯৭ অতিরিক্ত দিন।
* যদি শুধু ৪ দ্বারা বিভাজ্য নিয়ম ধরি → ১০০ দিন যোগ হবে।
* যদি শতক বছর (১০০, ২০০, ৩০০, ৪০০) বাদ দিই → ৯৬ দিন যোগ হবে।
* কিন্তু দরকার ৯৭ দিন।
  ❌ এবার ১ দিন কম হয়ে গেল।

তাই আবার ঠিক করা হলো:
👉 **যদি ৪০০ দ্বারা বিভাজ্য হয় → আবার লিপ ইয়ার।**

---

## ✅ চূড়ান্ত নিয়ম (ধাপে ধাপে)

1. **যদি ৪০০ দ্বারা বিভাজ্য → লিপ ইয়ার।**
   (১৬০০, ২০০০, ২৪০০ ✅)

2. **অন্যথায় যদি ১০০ দ্বারা বিভাজ্য → লিপ ইয়ার নয়।**
   (১৭০০, ১৮০০, ১৯০০, ২১০০ ❌)

3. **অন্যথায় যদি ৪ দ্বারা বিভাজ্য → লিপ ইয়ার।**
   (২০১৬, ২০২০, ২০২৪ ✅)

4. **অন্যথায় → লিপ ইয়ার নয়।**
   (২০১৭, ২০১৮, ২০১৯ ❌)

---

## 📝 উদাহরণ রান (Dry Run)

* **বছর = ২০২৪**

  * ৪০০ দ্বারা বিভাজ্য? ❌
  * ১০০ দ্বারা বিভাজ্য? ❌
  * ৪ দ্বারা বিভাজ্য? ✅ → লিপ ইয়ার

* **বছর = ২১০০**

  * ৪০০ দ্বারা বিভাজ্য? ❌
  * ১০০ দ্বারা বিভাজ্য? ✅ → লিপ ইয়ার নয়

* **বছর = ২০০০**

  * ৪০০ দ্বারা বিভাজ্য? ✅ → লিপ ইয়ার

---

অতএব C++ কোডের শর্ত আসলেই এই নিয়মের ছোট রূপঃ

```cpp
if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
```

---

👉 তুমি কি চাও আমি এটাকে **একটা flowchart আকারে চিত্র এঁকে দেখাই**, যাতে চোখে দেখা যায় নিয়মটা কীভাবে চলে?


Here’s a simple **C++ program** to check whether a given year is a **leap year or not**:

```cpp
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // Leap year condition:
    // 1. If divisible by 400 -> Leap year
    // 2. Else if divisible by 100 -> Not a leap year
    // 3. Else if divisible by 4 -> Leap year
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        cout << year << " is a Leap Year." << endl;
    } else {
        cout << year << " is NOT a Leap Year." << endl;
    }

    return 0;
}
```

✅ **Example Runs:**

```
Enter a year: 2024
2024 is a Leap Year.

Enter a year: 2100
2100 is NOT a Leap Year.
```

Do you want me to also write a **switch case version** for leap year check (like your calculator task)?

--------------------------------------------------------------
চমৎকার 😀
এবার আমরা `switch-case` ব্যবহার করে একটা **সাধারণ ক্যালকুলেটর** বানাই, যেটা যোগ, বিয়োগ, গুণ, ভাগ করতে পারবে।

---

## 🔹 ক্যালকুলেটর প্রোগ্রাম (C++)

```cpp
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Result = " << (num1 + num2);
            break;

        case '-':
            cout << "Result = " << (num1 - num2);
            break;

        case '*':
            cout << "Result = " << (num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                cout << "Result = " << (num1 / num2);
            else
                cout << "Error! Division by zero.";
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}
```

---

## 🔹 Sample Run

**Input:**

```
Enter first number: 10
Enter an operator (+, -, *, /): *
Enter second number: 5
```

**Output:**

```
Result = 50
```

---

✅ এভাবে `switch-case` ব্যবহার করে ক্যালকুলেটর বানানো যায়।

চাও কি আমি এটাকে একটু **loop দিয়ে modify** করে দিবো, যাতে তুমি যতবার খুশি নতুন calculation করতে পারো exit না দেওয়া পর্যন্ত?

-----------------------------------------------------------------
ভালো প্রশ্ন 👍
এবার আমি তোমাকে **C++ এ `switch-case` এর ব্যবহার** ব্যাখ্যা করি।

---

## 🔹 `switch-case` কী?

C++ এ `switch-case` হলো একটি **মাল্টিপল ডিসিশন কন্ট্রোল স্টেটমেন্ট**।
যখন একটি ভ্যারিয়েবল/এক্সপ্রেশনের ভ্যালু অনেকগুলো নির্দিষ্ট কন্ডিশনের সাথে মিলিয়ে দেখা লাগে, তখন `if-else` এর বদলে `switch-case` ব্যবহার করা সুবিধাজনক।

---

## 🔹 সিনট্যাক্স

```cpp
switch (expression) {
    case value1:
        // code block
        break;

    case value2:
        // code block
        break;

    ...
    default:
        // code block
}
```

---

## 🔹 কাজ করার নিয়ম

1. `expression` এর ভ্যালু একবার ক্যালকুলেট করা হয়।
2. যেই `case value` এর সাথে মিলে যাবে, সেই ব্লকের কোড চালু হবে।
3. `break;` দিলে switch থেকে বের হয়ে যায়।
4. যদি কোনো case match না করে, তাহলে `default` ব্লকের কোড চালু হয়।

---

## 🔹 উদাহরণ: দিন নম্বর থেকে দিনের নাম বের করা

```cpp
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Saturday";
            break;
        case 2:
            cout << "Sunday";
            break;
        case 3:
            cout << "Monday";
            break;
        case 4:
            cout << "Tuesday";
            break;
        case 5:
            cout << "Wednesday";
            break;
        case 6:
            cout << "Thursday";
            break;
        case 7:
            cout << "Friday";
            break;
        default:
            cout << "Invalid day number!";
    }

    return 0;
}
```

---

## 🔹 আউটপুট (যদি ইনপুট `3` দিই)

```
Monday
```

---

✅ **সংক্ষেপে:**

* `switch-case` অনেকগুলো fixed choice চেক করার জন্য ব্যবহৃত হয়।
* প্রতিটি `case` এর পর `break;` দেওয়া উচিত, না দিলে পরের case ও execute হবে (এটাকে বলে *fall-through*)।
* `default` অংশ optional, তবে দিলে ভালো, কারণ এটা ভুল ইনপুট ধরতে পারে।

---

চাও কি আমি তোমাকে `switch-case` আর `if-else` এর মধ্যে **তুলনা** করে একটা টেবিল বানিয়ে দেখাই?

-------------------------------------------------------------------

ঠিক আছে 👍 এখন আমি ব্যাখ্যাটাকে বাংলায় অনুবাদ করছি—

---

## 🔹 C++ এ Dynamic Declaration

**Dynamic declaration** মানে হলো প্রোগ্রাম চলাকালীন সময়ে (runtime) মেমোরি বরাদ্দ করা, আর সেটা সাধারণত **`new`** এবং **`delete`** অপারেটরের মাধ্যমে করা হয়।

---

### 🟢 Static vs Dynamic Declaration

#### 1. **Static Declaration (Compile-time)**

এখানে ভ্যারিয়েবল/অবজেক্টের মেমোরি প্রোগ্রাম শুরু হওয়ার সময় বরাদ্দ হয়, এবং স্কোপ শেষ হলে স্বয়ংক্রিয়ভাবে মুক্ত হয়।

```cpp
int x = 10;    // statically declared
```

#### 2. **Dynamic Declaration (Runtime)**

এখানে ভ্যারিয়েবল/অবজেক্টের মেমোরি প্রোগ্রাম চলাকালীন বরাদ্দ হয়।

```cpp
int* p = new int;   // dynamically declared integer
*p = 10;

cout << *p << endl; // আউটপুট হবে 10

delete p;           // মেমোরি মুক্ত করা হলো
```

---

### 🔹 কেন Dynamic Declaration ব্যবহার করা হয়?

* যখন ডেটার **size আগে থেকে জানা থাকে না**।
* **runtime এ array/object তৈরি** করতে হলে।
* ভ্যারিয়েবল/অবজেক্টের **lifetime এর উপর নিয়ন্ত্রণ** রাখতে হলে।

---

### 🔹 উদাহরণ: Dynamic Array

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // dynamic declaration of array
    int* arr = new int[n];

    // ইনপুট নেওয়া
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // আউটপুট দেওয়া
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; // মেমোরি মুক্ত করা
    return 0;
}
```

---

✅ **সংক্ষেপে:**
**Dynamic declaration** হলো প্রোগ্রাম চলাকালীন সময়ে (runtime) মেমোরি বরাদ্দ করা (`new` দিয়ে) এবং পরে সেটাকে মুক্ত করা (`delete` দিয়ে)।

---

চাইলে আমি তোমাকে **class/object এর সাথে dynamic declaration** কীভাবে কাজ করে সেটার উদাহরণও বাংলায় বুঝিয়ে দিতে পারি। সেটা কি দেখাব?

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    // Using ||
    if (a > 0 || b > 0) {
        cout << "At least one is positive (using ||)" << endl;
    }

    // Using 'or'
    if (a > 0 or b > 0) {
        cout << "At least one is positive (using or)" << endl;
    }

    return 0;
}

-------------------------------------------------------
Got it 👍
You want a simple **C++ program** that checks whether division `a / b` is possible. If `b != 0`, it should print the result; otherwise, print `"Division not possible (b is 0)"`.

Here’s the program:

```cpp
#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Division not possible (b is 0)" << endl;
    } else {
        double result = a / b;
        cout << "Result of a / b = " << result << endl;
    }

    return 0;
}
```

### Example Run:

```
Enter two numbers (a and b): 10 2
Result of a / b = 5
```

```
Enter two numbers (a and b): 7 0
Division not possible (b is 0)
```

Do you also want me to make it **loop continuously** until valid input is given (i.e., keep asking if `b = 0`)?








---------------------------------------------------------
Check if Number is Odd or Even
Write conditional statement for checking is a number is positive or negative

function OddEven is taking parameter



parameter

n - a integer number



Output

cout<<"odd"

cout<<"even"



Note: if any difficulty in solving, Click on "exercise.h" to see Solution
#include<iostream>
using namespace std;

void OddEven(int n)
{
    
    if(n%2==0)
        cout<<"even";
    else
        cout<<"odd";
}
*/

/*
#include<iostream>

using namespace std;

void Sign(int n)
{
    if(n>=0)
        cout<<"positive";
    else
        cout<<"negative";
}-------------------------------------------------------------
*/

// #include <iostream>
// using namespace std;
// typedef float Number;

// int main() {
// 	Number n1{},n2{};
// 	cout<<"enter 2 number "<<endl;
// 	cin >> n1>>n2;
// 	cout<<n1<< "   "<<n2<<endl;

// 	if (n1>=n2){
// 		cout <<"n1 greater "<<n1;
// 	}
// 	else{
// 		cout <<"n2 greater "<<n2;

// 	}

	




//     return 0;
// }
	
// ========================================================
// #include <iostream>
// using namespace std;
// typedef float Radious;
// typedef float Area;

// int main() {

// 	Radious r1;
// 	Area a1;
// 	cout<<"enter circlr redious : ";
// 	cin>>r1;
// 	a1=((float)22/(float)7)*r1*r1;
// 	cout<<"Area : "<< a1;




//     return 0;
// }
// enter circlr redious : 3
// Area : 28.2857[Finished in 1.5s]
// =======================================================



// #include <iostream>
// using namespace std;
// typedef int marks;
// int main() {
// 	marks m1{10},m2{20};

// 	cout<<m1<<"    "
// 	<<m2;
	


//     return 0;
// }10    20[Finished in 695ms]
// ---------------------------------------

// #include <iostream>
// using namespace std;
// enum cash {taka,dolar};
// int main() {

// 	cout<<dolar;
	


//     return 0;
// }
// 1[Finished in 691ms]



// float r;
// 	cin>> r;
// 	cout <<  3.1416f*r*r;


// 	float r;
// 	cin>> r;
// 	cout << 3.1416f*r*r;

// 12323123
// 4.77081e+14[Finished in 2.0s]


// cout<<"hello";
// ------------------------------------------1
	// int a,b,c;
	// cout<<"enter 2 no"<<endl;
	// cin>>a>>b;
	// c=a+b;
	// cout<<"sum is "<<c;
// -------------------------------------------2
	// string name;
	// cout<<"enter ur name"<<endl;
	// cin>>name;
	// cout<<"hello "<<name<<endl;
// console==========================
// 	enter ur name
// mahadi bhuiyan
// hello mahadi
// [Finished in 9.8s]
// --------------------------------------------------3

// 	string name;
// 	cout<<"enter ur name"<<endl;
// 	getline(cin,name);
// 	cout<<"hello "<<name<<endl;
// enter ur name
// maha ha
// hello maha ha
// [Finished in 5.0s]
// -----------------------------------------------------------4
	// sum of n  number 
// 	int n {0},sum{0};
// 	cout << "enter value of n"<<endl;
// 	cin >>n;
// 	sum=n*(n+1)/2;

// 	cout<<"sum = " <<sum<<endl;

// enter value of n
// 233
// sum = 27261
// [Finished in 3.6s]




// PROBLEN NO----------------------> | 5 |



// int c=0;
// for (c=5; c<1000;c++){
// 	cout<<endl<<endl<<endl<<"// PROBLEN NO----------------------> | "<<c<<" |"<<endl
// 	<<endl<<                endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

// 	cout<<"// console----> | "<<c<<" |"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
// 	cout<<"// console----> | "<<c<<" |"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	

	
// }







// console----> | 5 |










// console----> | 5 |










// PROBLEN NO----------------------> | 6 |

    // // Declare variables for the coefficients (a, b, c) and the roots (r1, r2)
    // float a, b, c, r1, r2;

    // // Prompt the user to enter the coefficients
    // std::cout << "Enter a, b, c: ";
    // std::cin >> a >> b >> c;

    // // Calculate the two roots using the quadratic formula
    // // r = (-b ± sqrt(b^2 - 4ac)) / 2a
    // r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    // r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    // // Print the calculated roots
    // std::cout << "Roots are: " << r1 << " and " << r2 << std::endl;








// console----> | 6 |


// Enter a, b, c: 1 -3 -10
// Roots are: 5 and -2
// [Finished in 33.6s]







// console----> | 6 |










// PROBLEN NO----------------------> | 7 |










// console----> | 7 |










// console----> | 7 |










// PROBLEN NO----------------------> | 8 |










// console----> | 8 |










// console----> | 8 |










// PROBLEN NO----------------------> | 9 |










// console----> | 9 |










// console----> | 9 |










// PROBLEN NO----------------------> | 10 |










// console----> | 10 |










// console----> | 10 |










// PROBLEN NO----------------------> | 11 |










// console----> | 11 |










// console----> | 11 |










// PROBLEN NO----------------------> | 12 |










// console----> | 12 |










// console----> | 12 |










// PROBLEN NO----------------------> | 13 |










// console----> | 13 |










// console----> | 13 |










// PROBLEN NO----------------------> | 14 |










// console----> | 14 |










// console----> | 14 |










// PROBLEN NO----------------------> | 15 |










// console----> | 15 |










// console----> | 15 |










// PROBLEN NO----------------------> | 16 |










// console----> | 16 |










// console----> | 16 |










// PROBLEN NO----------------------> | 17 |










// console----> | 17 |










// console----> | 17 |










// PROBLEN NO----------------------> | 18 |










// console----> | 18 |










// console----> | 18 |










// PROBLEN NO----------------------> | 19 |










// console----> | 19 |










// console----> | 19 |










// PROBLEN NO----------------------> | 20 |










// console----> | 20 |










// console----> | 20 |










// PROBLEN NO----------------------> | 21 |










// console----> | 21 |










// console----> | 21 |










// PROBLEN NO----------------------> | 22 |










// console----> | 22 |










// console----> | 22 |










// PROBLEN NO----------------------> | 23 |










// console----> | 23 |










// console----> | 23 |










// PROBLEN NO----------------------> | 24 |










// console----> | 24 |










// console----> | 24 |










// PROBLEN NO----------------------> | 25 |










// console----> | 25 |










// console----> | 25 |










// PROBLEN NO----------------------> | 26 |










// console----> | 26 |










// console----> | 26 |










// PROBLEN NO----------------------> | 27 |










// console----> | 27 |










// console----> | 27 |










// PROBLEN NO----------------------> | 28 |










// console----> | 28 |










// console----> | 28 |










// PROBLEN NO----------------------> | 29 |










// console----> | 29 |










// console----> | 29 |










// PROBLEN NO----------------------> | 30 |










// console----> | 30 |










// console----> | 30 |










// PROBLEN NO----------------------> | 31 |










// console----> | 31 |










// console----> | 31 |










// PROBLEN NO----------------------> | 32 |










// console----> | 32 |










// console----> | 32 |










// PROBLEN NO----------------------> | 33 |










// console----> | 33 |










// console----> | 33 |










// PROBLEN NO----------------------> | 34 |










// console----> | 34 |










// console----> | 34 |










// PROBLEN NO----------------------> | 35 |










// console----> | 35 |










// console----> | 35 |










// PROBLEN NO----------------------> | 36 |










// console----> | 36 |










// console----> | 36 |










// PROBLEN NO----------------------> | 37 |










// console----> | 37 |










// console----> | 37 |










// PROBLEN NO----------------------> | 38 |










// console----> | 38 |










// console----> | 38 |










// PROBLEN NO----------------------> | 39 |










// console----> | 39 |










// console----> | 39 |










// PROBLEN NO----------------------> | 40 |










// console----> | 40 |










// console----> | 40 |










// PROBLEN NO----------------------> | 41 |










// console----> | 41 |










// console----> | 41 |










// PROBLEN NO----------------------> | 42 |










// console----> | 42 |










// console----> | 42 |










// PROBLEN NO----------------------> | 43 |










// console----> | 43 |










// console----> | 43 |










// PROBLEN NO----------------------> | 44 |










// console----> | 44 |










// console----> | 44 |










// PROBLEN NO----------------------> | 45 |










// console----> | 45 |










// console----> | 45 |










// PROBLEN NO----------------------> | 46 |










// console----> | 46 |










// console----> | 46 |










// PROBLEN NO----------------------> | 47 |










// console----> | 47 |










// console----> | 47 |










// PROBLEN NO----------------------> | 48 |










// console----> | 48 |










// console----> | 48 |










// PROBLEN NO----------------------> | 49 |










// console----> | 49 |










// console----> | 49 |










// PROBLEN NO----------------------> | 50 |










// console----> | 50 |










// console----> | 50 |










// PROBLEN NO----------------------> | 51 |










// console----> | 51 |










// console----> | 51 |










// PROBLEN NO----------------------> | 52 |










// console----> | 52 |










// console----> | 52 |










// PROBLEN NO----------------------> | 53 |










// console----> | 53 |










// console----> | 53 |










// PROBLEN NO----------------------> | 54 |










// console----> | 54 |










// console----> | 54 |










// PROBLEN NO----------------------> | 55 |










// console----> | 55 |










// console----> | 55 |










// PROBLEN NO----------------------> | 56 |










// console----> | 56 |










// console----> | 56 |










// PROBLEN NO----------------------> | 57 |










// console----> | 57 |










// console----> | 57 |










// PROBLEN NO----------------------> | 58 |










// console----> | 58 |










// console----> | 58 |










// PROBLEN NO----------------------> | 59 |










// console----> | 59 |










// console----> | 59 |










// PROBLEN NO----------------------> | 60 |










// console----> | 60 |










// console----> | 60 |










// PROBLEN NO----------------------> | 61 |










// console----> | 61 |










// console----> | 61 |










// PROBLEN NO----------------------> | 62 |










// console----> | 62 |










// console----> | 62 |










// PROBLEN NO----------------------> | 63 |










// console----> | 63 |










// console----> | 63 |










// PROBLEN NO----------------------> | 64 |










// console----> | 64 |










// console----> | 64 |










// PROBLEN NO----------------------> | 65 |










// console----> | 65 |










// console----> | 65 |










// PROBLEN NO----------------------> | 66 |










// console----> | 66 |










// console----> | 66 |










// PROBLEN NO----------------------> | 67 |










// console----> | 67 |










// console----> | 67 |










// PROBLEN NO----------------------> | 68 |










// console----> | 68 |










// console----> | 68 |










// PROBLEN NO----------------------> | 69 |










// console----> | 69 |










// console----> | 69 |










// PROBLEN NO----------------------> | 70 |










// console----> | 70 |










// console----> | 70 |










// PROBLEN NO----------------------> | 71 |










// console----> | 71 |










// console----> | 71 |










// PROBLEN NO----------------------> | 72 |










// console----> | 72 |










// console----> | 72 |










// PROBLEN NO----------------------> | 73 |










// console----> | 73 |










// console----> | 73 |










// PROBLEN NO----------------------> | 74 |










// console----> | 74 |










// console----> | 74 |










// PROBLEN NO----------------------> | 75 |










// console----> | 75 |










// console----> | 75 |










// PROBLEN NO----------------------> | 76 |










// console----> | 76 |










// console----> | 76 |










// PROBLEN NO----------------------> | 77 |










// console----> | 77 |










// console----> | 77 |










// PROBLEN NO----------------------> | 78 |










// console----> | 78 |










// console----> | 78 |










// PROBLEN NO----------------------> | 79 |










// console----> | 79 |










// console----> | 79 |










// PROBLEN NO----------------------> | 80 |










// console----> | 80 |










// console----> | 80 |










// PROBLEN NO----------------------> | 81 |










// console----> | 81 |










// console----> | 81 |










// PROBLEN NO----------------------> | 82 |










// console----> | 82 |










// console----> | 82 |










// PROBLEN NO----------------------> | 83 |










// console----> | 83 |










// console----> | 83 |










// PROBLEN NO----------------------> | 84 |










// console----> | 84 |










// console----> | 84 |










// PROBLEN NO----------------------> | 85 |










// console----> | 85 |










// console----> | 85 |










// PROBLEN NO----------------------> | 86 |










// console----> | 86 |










// console----> | 86 |










// PROBLEN NO----------------------> | 87 |










// console----> | 87 |










// console----> | 87 |










// PROBLEN NO----------------------> | 88 |










// console----> | 88 |










// console----> | 88 |










// PROBLEN NO----------------------> | 89 |










// console----> | 89 |










// console----> | 89 |










// PROBLEN NO----------------------> | 90 |










// console----> | 90 |










// console----> | 90 |










// PROBLEN NO----------------------> | 91 |










// console----> | 91 |










// console----> | 91 |










// PROBLEN NO----------------------> | 92 |










// console----> | 92 |










// console----> | 92 |










// PROBLEN NO----------------------> | 93 |










// console----> | 93 |










// console----> | 93 |










// PROBLEN NO----------------------> | 94 |










// console----> | 94 |










// console----> | 94 |










// PROBLEN NO----------------------> | 95 |










// console----> | 95 |










// console----> | 95 |










// PROBLEN NO----------------------> | 96 |










// console----> | 96 |










// console----> | 96 |










// PROBLEN NO----------------------> | 97 |










// console----> | 97 |










// console----> | 97 |










// PROBLEN NO----------------------> | 98 |










// console----> | 98 |










// console----> | 98 |










// PROBLEN NO----------------------> | 99 |










// console----> | 99 |










// console----> | 99 |










// PROBLEN NO----------------------> | 100 |










// console----> | 100 |










// console----> | 100 |










// PROBLEN NO----------------------> | 101 |










// console----> | 101 |










// console----> | 101 |










// PROBLEN NO----------------------> | 102 |










// console----> | 102 |










// console----> | 102 |










// PROBLEN NO----------------------> | 103 |










// console----> | 103 |










// console----> | 103 |










// PROBLEN NO----------------------> | 104 |










// console----> | 104 |










// console----> | 104 |










// PROBLEN NO----------------------> | 105 |










// console----> | 105 |










// console----> | 105 |










// PROBLEN NO----------------------> | 106 |










// console----> | 106 |










// console----> | 106 |










// PROBLEN NO----------------------> | 107 |










// console----> | 107 |










// console----> | 107 |










// PROBLEN NO----------------------> | 108 |










// console----> | 108 |










// console----> | 108 |










// PROBLEN NO----------------------> | 109 |










// console----> | 109 |










// console----> | 109 |










// PROBLEN NO----------------------> | 110 |










// console----> | 110 |










// console----> | 110 |










// PROBLEN NO----------------------> | 111 |










// console----> | 111 |










// console----> | 111 |










// PROBLEN NO----------------------> | 112 |










// console----> | 112 |










// console----> | 112 |










// PROBLEN NO----------------------> | 113 |










// console----> | 113 |










// console----> | 113 |










// PROBLEN NO----------------------> | 114 |










// console----> | 114 |










// console----> | 114 |










// PROBLEN NO----------------------> | 115 |










// console----> | 115 |










// console----> | 115 |










// PROBLEN NO----------------------> | 116 |










// console----> | 116 |










// console----> | 116 |










// PROBLEN NO----------------------> | 117 |










// console----> | 117 |










// console----> | 117 |










// PROBLEN NO----------------------> | 118 |










// console----> | 118 |










// console----> | 118 |










// PROBLEN NO----------------------> | 119 |










// console----> | 119 |










// console----> | 119 |










// PROBLEN NO----------------------> | 120 |










// console----> | 120 |










// console----> | 120 |










// PROBLEN NO----------------------> | 121 |










// console----> | 121 |










// console----> | 121 |










// PROBLEN NO----------------------> | 122 |










// console----> | 122 |










// console----> | 122 |










// PROBLEN NO----------------------> | 123 |










// console----> | 123 |










// console----> | 123 |










// PROBLEN NO----------------------> | 124 |










// console----> | 124 |










// console----> | 124 |










// PROBLEN NO----------------------> | 125 |










// console----> | 125 |










// console----> | 125 |










// PROBLEN NO----------------------> | 126 |










// console----> | 126 |










// console----> | 126 |










// PROBLEN NO----------------------> | 127 |










// console----> | 127 |










// console----> | 127 |










// PROBLEN NO----------------------> | 128 |










// console----> | 128 |










// console----> | 128 |










// PROBLEN NO----------------------> | 129 |










// console----> | 129 |










// console----> | 129 |










// PROBLEN NO----------------------> | 130 |










// console----> | 130 |










// console----> | 130 |










// PROBLEN NO----------------------> | 131 |










// console----> | 131 |










// console----> | 131 |










// PROBLEN NO----------------------> | 132 |










// console----> | 132 |










// console----> | 132 |










// PROBLEN NO----------------------> | 133 |










// console----> | 133 |










// console----> | 133 |










// PROBLEN NO----------------------> | 134 |










// console----> | 134 |










// console----> | 134 |










// PROBLEN NO----------------------> | 135 |










// console----> | 135 |










// console----> | 135 |










// PROBLEN NO----------------------> | 136 |










// console----> | 136 |










// console----> | 136 |










// PROBLEN NO----------------------> | 137 |










// console----> | 137 |










// console----> | 137 |










// PROBLEN NO----------------------> | 138 |










// console----> | 138 |










// console----> | 138 |










// PROBLEN NO----------------------> | 139 |










// console----> | 139 |










// console----> | 139 |










// PROBLEN NO----------------------> | 140 |










// console----> | 140 |










// console----> | 140 |










// PROBLEN NO----------------------> | 141 |










// console----> | 141 |










// console----> | 141 |










// PROBLEN NO----------------------> | 142 |










// console----> | 142 |










// console----> | 142 |










// PROBLEN NO----------------------> | 143 |










// console----> | 143 |










// console----> | 143 |










// PROBLEN NO----------------------> | 144 |










// console----> | 144 |










// console----> | 144 |










// PROBLEN NO----------------------> | 145 |










// console----> | 145 |










// console----> | 145 |










// PROBLEN NO----------------------> | 146 |










// console----> | 146 |










// console----> | 146 |










// PROBLEN NO----------------------> | 147 |










// console----> | 147 |










// console----> | 147 |










// PROBLEN NO----------------------> | 148 |










// console----> | 148 |










// console----> | 148 |










// PROBLEN NO----------------------> | 149 |










// console----> | 149 |










// console----> | 149 |










// PROBLEN NO----------------------> | 150 |










// console----> | 150 |










// console----> | 150 |










// PROBLEN NO----------------------> | 151 |










// console----> | 151 |










// console----> | 151 |










// PROBLEN NO----------------------> | 152 |










// console----> | 152 |










// console----> | 152 |










// PROBLEN NO----------------------> | 153 |










// console----> | 153 |










// console----> | 153 |










// PROBLEN NO----------------------> | 154 |










// console----> | 154 |










// console----> | 154 |










// PROBLEN NO----------------------> | 155 |










// console----> | 155 |










// console----> | 155 |










// PROBLEN NO----------------------> | 156 |










// console----> | 156 |










// console----> | 156 |










// PROBLEN NO----------------------> | 157 |










// console----> | 157 |










// console----> | 157 |










// PROBLEN NO----------------------> | 158 |










// console----> | 158 |










// console----> | 158 |










// PROBLEN NO----------------------> | 159 |










// console----> | 159 |










// console----> | 159 |










// PROBLEN NO----------------------> | 160 |










// console----> | 160 |










// console----> | 160 |










// PROBLEN NO----------------------> | 161 |










// console----> | 161 |










// console----> | 161 |










// PROBLEN NO----------------------> | 162 |










// console----> | 162 |










// console----> | 162 |










// PROBLEN NO----------------------> | 163 |










// console----> | 163 |










// console----> | 163 |










// PROBLEN NO----------------------> | 164 |










// console----> | 164 |










// console----> | 164 |










// PROBLEN NO----------------------> | 165 |










// console----> | 165 |










// console----> | 165 |










// PROBLEN NO----------------------> | 166 |










// console----> | 166 |










// console----> | 166 |










// PROBLEN NO----------------------> | 167 |










// console----> | 167 |










// console----> | 167 |










// PROBLEN NO----------------------> | 168 |










// console----> | 168 |










// console----> | 168 |










// PROBLEN NO----------------------> | 169 |










// console----> | 169 |










// console----> | 169 |










// PROBLEN NO----------------------> | 170 |










// console----> | 170 |










// console----> | 170 |










// PROBLEN NO----------------------> | 171 |










// console----> | 171 |










// console----> | 171 |










// PROBLEN NO----------------------> | 172 |










// console----> | 172 |










// console----> | 172 |










// PROBLEN NO----------------------> | 173 |










// console----> | 173 |










// console----> | 173 |










// PROBLEN NO----------------------> | 174 |










// console----> | 174 |










// console----> | 174 |










// PROBLEN NO----------------------> | 175 |










// console----> | 175 |










// console----> | 175 |










// PROBLEN NO----------------------> | 176 |










// console----> | 176 |










// console----> | 176 |










// PROBLEN NO----------------------> | 177 |










// console----> | 177 |










// console----> | 177 |










// PROBLEN NO----------------------> | 178 |










// console----> | 178 |










// console----> | 178 |










// PROBLEN NO----------------------> | 179 |










// console----> | 179 |










// console----> | 179 |










// PROBLEN NO----------------------> | 180 |










// console----> | 180 |










// console----> | 180 |










// PROBLEN NO----------------------> | 181 |










// console----> | 181 |










// console----> | 181 |










// PROBLEN NO----------------------> | 182 |










// console----> | 182 |










// console----> | 182 |










// PROBLEN NO----------------------> | 183 |










// console----> | 183 |










// console----> | 183 |










// PROBLEN NO----------------------> | 184 |










// console----> | 184 |










// console----> | 184 |










// PROBLEN NO----------------------> | 185 |










// console----> | 185 |










// console----> | 185 |










// PROBLEN NO----------------------> | 186 |










// console----> | 186 |










// console----> | 186 |










// PROBLEN NO----------------------> | 187 |










// console----> | 187 |










// console----> | 187 |










// PROBLEN NO----------------------> | 188 |










// console----> | 188 |










// console----> | 188 |










// PROBLEN NO----------------------> | 189 |










// console----> | 189 |










// console----> | 189 |










// PROBLEN NO----------------------> | 190 |










// console----> | 190 |










// console----> | 190 |










// PROBLEN NO----------------------> | 191 |










// console----> | 191 |










// console----> | 191 |










// PROBLEN NO----------------------> | 192 |










// console----> | 192 |










// console----> | 192 |










// PROBLEN NO----------------------> | 193 |










// console----> | 193 |










// console----> | 193 |










// PROBLEN NO----------------------> | 194 |










// console----> | 194 |










// console----> | 194 |










// PROBLEN NO----------------------> | 195 |










// console----> | 195 |










// console----> | 195 |










// PROBLEN NO----------------------> | 196 |










// console----> | 196 |










// console----> | 196 |










// PROBLEN NO----------------------> | 197 |










// console----> | 197 |










// console----> | 197 |










// PROBLEN NO----------------------> | 198 |










// console----> | 198 |










// console----> | 198 |










// PROBLEN NO----------------------> | 199 |










// console----> | 199 |










// console----> | 199 |










// PROBLEN NO----------------------> | 200 |










// console----> | 200 |










// console----> | 200 |










// PROBLEN NO----------------------> | 201 |










// console----> | 201 |










// console----> | 201 |










// PROBLEN NO----------------------> | 202 |










// console----> | 202 |










// console----> | 202 |










// PROBLEN NO----------------------> | 203 |










// console----> | 203 |










// console----> | 203 |










// PROBLEN NO----------------------> | 204 |










// console----> | 204 |










// console----> | 204 |










// PROBLEN NO----------------------> | 205 |










// console----> | 205 |










// console----> | 205 |










// PROBLEN NO----------------------> | 206 |










// console----> | 206 |










// console----> | 206 |










// PROBLEN NO----------------------> | 207 |










// console----> | 207 |










// console----> | 207 |










// PROBLEN NO----------------------> | 208 |










// console----> | 208 |










// console----> | 208 |










// PROBLEN NO----------------------> | 209 |










// console----> | 209 |










// console----> | 209 |










// PROBLEN NO----------------------> | 210 |










// console----> | 210 |










// console----> | 210 |










// PROBLEN NO----------------------> | 211 |










// console----> | 211 |










// console----> | 211 |










// PROBLEN NO----------------------> | 212 |










// console----> | 212 |










// console----> | 212 |










// PROBLEN NO----------------------> | 213 |










// console----> | 213 |










// console----> | 213 |










// PROBLEN NO----------------------> | 214 |










// console----> | 214 |










// console----> | 214 |










// PROBLEN NO----------------------> | 215 |










// console----> | 215 |










// console----> | 215 |










// PROBLEN NO----------------------> | 216 |










// console----> | 216 |










// console----> | 216 |










// PROBLEN NO----------------------> | 217 |










// console----> | 217 |










// console----> | 217 |










// PROBLEN NO----------------------> | 218 |










// console----> | 218 |










// console----> | 218 |










// PROBLEN NO----------------------> | 219 |










// console----> | 219 |










// console----> | 219 |










// PROBLEN NO----------------------> | 220 |










// console----> | 220 |










// console----> | 220 |










// PROBLEN NO----------------------> | 221 |










// console----> | 221 |










// console----> | 221 |










// PROBLEN NO----------------------> | 222 |










// console----> | 222 |










// console----> | 222 |










// PROBLEN NO----------------------> | 223 |










// console----> | 223 |










// console----> | 223 |










// PROBLEN NO----------------------> | 224 |










// console----> | 224 |










// console----> | 224 |










// PROBLEN NO----------------------> | 225 |










// console----> | 225 |










// console----> | 225 |










// PROBLEN NO----------------------> | 226 |










// console----> | 226 |










// console----> | 226 |










// PROBLEN NO----------------------> | 227 |










// console----> | 227 |










// console----> | 227 |










// PROBLEN NO----------------------> | 228 |










// console----> | 228 |










// console----> | 228 |










// PROBLEN NO----------------------> | 229 |










// console----> | 229 |










// console----> | 229 |










// PROBLEN NO----------------------> | 230 |










// console----> | 230 |










// console----> | 230 |










// PROBLEN NO----------------------> | 231 |










// console----> | 231 |










// console----> | 231 |










// PROBLEN NO----------------------> | 232 |










// console----> | 232 |










// console----> | 232 |










// PROBLEN NO----------------------> | 233 |










// console----> | 233 |










// console----> | 233 |










// PROBLEN NO----------------------> | 234 |










// console----> | 234 |










// console----> | 234 |










// PROBLEN NO----------------------> | 235 |










// console----> | 235 |










// console----> | 235 |










// PROBLEN NO----------------------> | 236 |










// console----> | 236 |










// console----> | 236 |










// PROBLEN NO----------------------> | 237 |










// console----> | 237 |










// console----> | 237 |










// PROBLEN NO----------------------> | 238 |










// console----> | 238 |










// console----> | 238 |










// PROBLEN NO----------------------> | 239 |










// console----> | 239 |










// console----> | 239 |










// PROBLEN NO----------------------> | 240 |










// console----> | 240 |










// console----> | 240 |










// PROBLEN NO----------------------> | 241 |










// console----> | 241 |










// console----> | 241 |










// PROBLEN NO----------------------> | 242 |










// console----> | 242 |










// console----> | 242 |










// PROBLEN NO----------------------> | 243 |










// console----> | 243 |










// console----> | 243 |










// PROBLEN NO----------------------> | 244 |










// console----> | 244 |










// console----> | 244 |










// PROBLEN NO----------------------> | 245 |










// console----> | 245 |










// console----> | 245 |










// PROBLEN NO----------------------> | 246 |










// console----> | 246 |










// console----> | 246 |










// PROBLEN NO----------------------> | 247 |










// console----> | 247 |










// console----> | 247 |










// PROBLEN NO----------------------> | 248 |










// console----> | 248 |










// console----> | 248 |










// PROBLEN NO----------------------> | 249 |










// console----> | 249 |










// console----> | 249 |










// PROBLEN NO----------------------> | 250 |










// console----> | 250 |










// console----> | 250 |










// PROBLEN NO----------------------> | 251 |










// console----> | 251 |










// console----> | 251 |










// PROBLEN NO----------------------> | 252 |










// console----> | 252 |










// console----> | 252 |










// PROBLEN NO----------------------> | 253 |










// console----> | 253 |










// console----> | 253 |










// PROBLEN NO----------------------> | 254 |










// console----> | 254 |










// console----> | 254 |










// PROBLEN NO----------------------> | 255 |










// console----> | 255 |










// console----> | 255 |










// PROBLEN NO----------------------> | 256 |










// console----> | 256 |










// console----> | 256 |










// PROBLEN NO----------------------> | 257 |










// console----> | 257 |










// console----> | 257 |










// PROBLEN NO----------------------> | 258 |










// console----> | 258 |










// console----> | 258 |










// PROBLEN NO----------------------> | 259 |










// console----> | 259 |










// console----> | 259 |










// PROBLEN NO----------------------> | 260 |










// console----> | 260 |










// console----> | 260 |










// PROBLEN NO----------------------> | 261 |










// console----> | 261 |










// console----> | 261 |










// PROBLEN NO----------------------> | 262 |










// console----> | 262 |










// console----> | 262 |










// PROBLEN NO----------------------> | 263 |










// console----> | 263 |










// console----> | 263 |










// PROBLEN NO----------------------> | 264 |










// console----> | 264 |










// console----> | 264 |










// PROBLEN NO----------------------> | 265 |










// console----> | 265 |










// console----> | 265 |










// PROBLEN NO----------------------> | 266 |










// console----> | 266 |










// console----> | 266 |










// PROBLEN NO----------------------> | 267 |










// console----> | 267 |










// console----> | 267 |










// PROBLEN NO----------------------> | 268 |










// console----> | 268 |










// console----> | 268 |










// PROBLEN NO----------------------> | 269 |










// console----> | 269 |










// console----> | 269 |










// PROBLEN NO----------------------> | 270 |










// console----> | 270 |










// console----> | 270 |










// PROBLEN NO----------------------> | 271 |










// console----> | 271 |










// console----> | 271 |










// PROBLEN NO----------------------> | 272 |










// console----> | 272 |










// console----> | 272 |










// PROBLEN NO----------------------> | 273 |










// console----> | 273 |










// console----> | 273 |










// PROBLEN NO----------------------> | 274 |










// console----> | 274 |










// console----> | 274 |










// PROBLEN NO----------------------> | 275 |










// console----> | 275 |










// console----> | 275 |










// PROBLEN NO----------------------> | 276 |










// console----> | 276 |










// console----> | 276 |










// PROBLEN NO----------------------> | 277 |










// console----> | 277 |










// console----> | 277 |










// PROBLEN NO----------------------> | 278 |










// console----> | 278 |










// console----> | 278 |










// PROBLEN NO----------------------> | 279 |










// console----> | 279 |










// console----> | 279 |










// PROBLEN NO----------------------> | 280 |










// console----> | 280 |










// console----> | 280 |










// PROBLEN NO----------------------> | 281 |










// console----> | 281 |










// console----> | 281 |










// PROBLEN NO----------------------> | 282 |










// console----> | 282 |










// console----> | 282 |










// PROBLEN NO----------------------> | 283 |










// console----> | 283 |










// console----> | 283 |










// PROBLEN NO----------------------> | 284 |










// console----> | 284 |










// console----> | 284 |










// PROBLEN NO----------------------> | 285 |










// console----> | 285 |










// console----> | 285 |










// PROBLEN NO----------------------> | 286 |










// console----> | 286 |










// console----> | 286 |










// PROBLEN NO----------------------> | 287 |










// console----> | 287 |










// console----> | 287 |










// PROBLEN NO----------------------> | 288 |










// console----> | 288 |










// console----> | 288 |










// PROBLEN NO----------------------> | 289 |










// console----> | 289 |










// console----> | 289 |










// PROBLEN NO----------------------> | 290 |










// console----> | 290 |










// console----> | 290 |










// PROBLEN NO----------------------> | 291 |










// console----> | 291 |










// console----> | 291 |










// PROBLEN NO----------------------> | 292 |










// console----> | 292 |










// console----> | 292 |










// PROBLEN NO----------------------> | 293 |










// console----> | 293 |










// console----> | 293 |










// PROBLEN NO----------------------> | 294 |










// console----> | 294 |










// console----> | 294 |










// PROBLEN NO----------------------> | 295 |










// console----> | 295 |










// console----> | 295 |










// PROBLEN NO----------------------> | 296 |










// console----> | 296 |










// console----> | 296 |










// PROBLEN NO----------------------> | 297 |










// console----> | 297 |










// console----> | 297 |










// PROBLEN NO----------------------> | 298 |










// console----> | 298 |










// console----> | 298 |










// PROBLEN NO----------------------> | 299 |










// console----> | 299 |










// console----> | 299 |










// PROBLEN NO----------------------> | 300 |










// console----> | 300 |










// console----> | 300 |










// PROBLEN NO----------------------> | 301 |










// console----> | 301 |










// console----> | 301 |










// PROBLEN NO----------------------> | 302 |










// console----> | 302 |










// console----> | 302 |










// PROBLEN NO----------------------> | 303 |










// console----> | 303 |










// console----> | 303 |










// PROBLEN NO----------------------> | 304 |










// console----> | 304 |










// console----> | 304 |










// PROBLEN NO----------------------> | 305 |










// console----> | 305 |










// console----> | 305 |










// PROBLEN NO----------------------> | 306 |










// console----> | 306 |










// console----> | 306 |










// PROBLEN NO----------------------> | 307 |










// console----> | 307 |










// console----> | 307 |










// PROBLEN NO----------------------> | 308 |










// console----> | 308 |










// console----> | 308 |










// PROBLEN NO----------------------> | 309 |










// console----> | 309 |










// console----> | 309 |










// PROBLEN NO----------------------> | 310 |










// console----> | 310 |










// console----> | 310 |










// PROBLEN NO----------------------> | 311 |










// console----> | 311 |










// console----> | 311 |










// PROBLEN NO----------------------> | 312 |










// console----> | 312 |










// console----> | 312 |










// PROBLEN NO----------------------> | 313 |










// console----> | 313 |










// console----> | 313 |










// PROBLEN NO----------------------> | 314 |










// console----> | 314 |










// console----> | 314 |










// PROBLEN NO----------------------> | 315 |










// console----> | 315 |










// console----> | 315 |










// PROBLEN NO----------------------> | 316 |










// console----> | 316 |










// console----> | 316 |










// PROBLEN NO----------------------> | 317 |










// console----> | 317 |










// console----> | 317 |










// PROBLEN NO----------------------> | 318 |










// console----> | 318 |










// console----> | 318 |










// PROBLEN NO----------------------> | 319 |










// console----> | 319 |










// console----> | 319 |










// PROBLEN NO----------------------> | 320 |










// console----> | 320 |










// console----> | 320 |










// PROBLEN NO----------------------> | 321 |










// console----> | 321 |










// console----> | 321 |










// PROBLEN NO----------------------> | 322 |










// console----> | 322 |










// console----> | 322 |










// PROBLEN NO----------------------> | 323 |










// console----> | 323 |










// console----> | 323 |










// PROBLEN NO----------------------> | 324 |










// console----> | 324 |










// console----> | 324 |










// PROBLEN NO----------------------> | 325 |










// console----> | 325 |










// console----> | 325 |










// PROBLEN NO----------------------> | 326 |










// console----> | 326 |










// console----> | 326 |










// PROBLEN NO----------------------> | 327 |










// console----> | 327 |










// console----> | 327 |










// PROBLEN NO----------------------> | 328 |










// console----> | 328 |










// console----> | 328 |










// PROBLEN NO----------------------> | 329 |










// console----> | 329 |










// console----> | 329 |










// PROBLEN NO----------------------> | 330 |










// console----> | 330 |










// console----> | 330 |










// PROBLEN NO----------------------> | 331 |










// console----> | 331 |










// console----> | 331 |










// PROBLEN NO----------------------> | 332 |










// console----> | 332 |










// console----> | 332 |










// PROBLEN NO----------------------> | 333 |










// console----> | 333 |










// console----> | 333 |










// PROBLEN NO----------------------> | 334 |










// console----> | 334 |










// console----> | 334 |










// PROBLEN NO----------------------> | 335 |










// console----> | 335 |










// console----> | 335 |










// PROBLEN NO----------------------> | 336 |










// console----> | 336 |










// console----> | 336 |










// PROBLEN NO----------------------> | 337 |










// console----> | 337 |










// console----> | 337 |










// PROBLEN NO----------------------> | 338 |










// console----> | 338 |










// console----> | 338 |










// PROBLEN NO----------------------> | 339 |










// console----> | 339 |










// console----> | 339 |










// PROBLEN NO----------------------> | 340 |










// console----> | 340 |










// console----> | 340 |










// PROBLEN NO----------------------> | 341 |










// console----> | 341 |










// console----> | 341 |










// PROBLEN NO----------------------> | 342 |










// console----> | 342 |










// console----> | 342 |










// PROBLEN NO----------------------> | 343 |










// console----> | 343 |










// console----> | 343 |










// PROBLEN NO----------------------> | 344 |










// console----> | 344 |










// console----> | 344 |










// PROBLEN NO----------------------> | 345 |










// console----> | 345 |










// console----> | 345 |










// PROBLEN NO----------------------> | 346 |










// console----> | 346 |










// console----> | 346 |










// PROBLEN NO----------------------> | 347 |










// console----> | 347 |










// console----> | 347 |










// PROBLEN NO----------------------> | 348 |










// console----> | 348 |










// console----> | 348 |










// PROBLEN NO----------------------> | 349 |










// console----> | 349 |










// console----> | 349 |










// PROBLEN NO----------------------> | 350 |










// console----> | 350 |










// console----> | 350 |










// PROBLEN NO----------------------> | 351 |










// console----> | 351 |










// console----> | 351 |










// PROBLEN NO----------------------> | 352 |










// console----> | 352 |










// console----> | 352 |










// PROBLEN NO----------------------> | 353 |










// console----> | 353 |










// console----> | 353 |










// PROBLEN NO----------------------> | 354 |










// console----> | 354 |










// console----> | 354 |










// PROBLEN NO----------------------> | 355 |










// console----> | 355 |










// console----> | 355 |










// PROBLEN NO----------------------> | 356 |










// console----> | 356 |










// console----> | 356 |










// PROBLEN NO----------------------> | 357 |










// console----> | 357 |










// console----> | 357 |










// PROBLEN NO----------------------> | 358 |










// console----> | 358 |










// console----> | 358 |










// PROBLEN NO----------------------> | 359 |










// console----> | 359 |










// console----> | 359 |










// PROBLEN NO----------------------> | 360 |










// console----> | 360 |










// console----> | 360 |










// PROBLEN NO----------------------> | 361 |










// console----> | 361 |










// console----> | 361 |










// PROBLEN NO----------------------> | 362 |










// console----> | 362 |










// console----> | 362 |










// PROBLEN NO----------------------> | 363 |










// console----> | 363 |










// console----> | 363 |










// PROBLEN NO----------------------> | 364 |










// console----> | 364 |










// console----> | 364 |










// PROBLEN NO----------------------> | 365 |










// console----> | 365 |










// console----> | 365 |










// PROBLEN NO----------------------> | 366 |










// console----> | 366 |










// console----> | 366 |










// PROBLEN NO----------------------> | 367 |










// console----> | 367 |










// console----> | 367 |










// PROBLEN NO----------------------> | 368 |










// console----> | 368 |










// console----> | 368 |










// PROBLEN NO----------------------> | 369 |










// console----> | 369 |










// console----> | 369 |










// PROBLEN NO----------------------> | 370 |










// console----> | 370 |










// console----> | 370 |










// PROBLEN NO----------------------> | 371 |










// console----> | 371 |










// console----> | 371 |










// PROBLEN NO----------------------> | 372 |










// console----> | 372 |










// console----> | 372 |










// PROBLEN NO----------------------> | 373 |










// console----> | 373 |










// console----> | 373 |










// PROBLEN NO----------------------> | 374 |










// console----> | 374 |










// console----> | 374 |










// PROBLEN NO----------------------> | 375 |










// console----> | 375 |










// console----> | 375 |










// PROBLEN NO----------------------> | 376 |










// console----> | 376 |










// console----> | 376 |










// PROBLEN NO----------------------> | 377 |










// console----> | 377 |










// console----> | 377 |










// PROBLEN NO----------------------> | 378 |










// console----> | 378 |










// console----> | 378 |










// PROBLEN NO----------------------> | 379 |










// console----> | 379 |










// console----> | 379 |










// PROBLEN NO----------------------> | 380 |










// console----> | 380 |










// console----> | 380 |










// PROBLEN NO----------------------> | 381 |










// console----> | 381 |










// console----> | 381 |










// PROBLEN NO----------------------> | 382 |










// console----> | 382 |










// console----> | 382 |










// PROBLEN NO----------------------> | 383 |










// console----> | 383 |










// console----> | 383 |










// PROBLEN NO----------------------> | 384 |










// console----> | 384 |










// console----> | 384 |










// PROBLEN NO----------------------> | 385 |










// console----> | 385 |










// console----> | 385 |










// PROBLEN NO----------------------> | 386 |










// console----> | 386 |










// console----> | 386 |










// PROBLEN NO----------------------> | 387 |










// console----> | 387 |










// console----> | 387 |










// PROBLEN NO----------------------> | 388 |










// console----> | 388 |










// console----> | 388 |










// PROBLEN NO----------------------> | 389 |










// console----> | 389 |










// console----> | 389 |










// PROBLEN NO----------------------> | 390 |










// console----> | 390 |










// console----> | 390 |










// PROBLEN NO----------------------> | 391 |










// console----> | 391 |










// console----> | 391 |










// PROBLEN NO----------------------> | 392 |










// console----> | 392 |










// console----> | 392 |










// PROBLEN NO----------------------> | 393 |










// console----> | 393 |










// console----> | 393 |










// PROBLEN NO----------------------> | 394 |










// console----> | 394 |










// console----> | 394 |










// PROBLEN NO----------------------> | 395 |










// console----> | 395 |










// console----> | 395 |










// PROBLEN NO----------------------> | 396 |










// console----> | 396 |










// console----> | 396 |










// PROBLEN NO----------------------> | 397 |










// console----> | 397 |










// console----> | 397 |










// PROBLEN NO----------------------> | 398 |










// console----> | 398 |










// console----> | 398 |










// PROBLEN NO----------------------> | 399 |










// console----> | 399 |










// console----> | 399 |










// PROBLEN NO----------------------> | 400 |










// console----> | 400 |










// console----> | 400 |










// PROBLEN NO----------------------> | 401 |










// console----> | 401 |










// console----> | 401 |










// PROBLEN NO----------------------> | 402 |










// console----> | 402 |










// console----> | 402 |










// PROBLEN NO----------------------> | 403 |










// console----> | 403 |










// console----> | 403 |










// PROBLEN NO----------------------> | 404 |










// console----> | 404 |










// console----> | 404 |










// PROBLEN NO----------------------> | 405 |










// console----> | 405 |










// console----> | 405 |










// PROBLEN NO----------------------> | 406 |










// console----> | 406 |










// console----> | 406 |










// PROBLEN NO----------------------> | 407 |










// console----> | 407 |










// console----> | 407 |










// PROBLEN NO----------------------> | 408 |










// console----> | 408 |










// console----> | 408 |










// PROBLEN NO----------------------> | 409 |










// console----> | 409 |










// console----> | 409 |










// PROBLEN NO----------------------> | 410 |










// console----> | 410 |










// console----> | 410 |










// PROBLEN NO----------------------> | 411 |










// console----> | 411 |










// console----> | 411 |










// PROBLEN NO----------------------> | 412 |










// console----> | 412 |










// console----> | 412 |










// PROBLEN NO----------------------> | 413 |










// console----> | 413 |










// console----> | 413 |










// PROBLEN NO----------------------> | 414 |










// console----> | 414 |










// console----> | 414 |










// PROBLEN NO----------------------> | 415 |










// console----> | 415 |










// console----> | 415 |










// PROBLEN NO----------------------> | 416 |










// console----> | 416 |










// console----> | 416 |










// PROBLEN NO----------------------> | 417 |










// console----> | 417 |










// console----> | 417 |










// PROBLEN NO----------------------> | 418 |










// console----> | 418 |










// console----> | 418 |










// PROBLEN NO----------------------> | 419 |










// console----> | 419 |










// console----> | 419 |










// PROBLEN NO----------------------> | 420 |










// console----> | 420 |










// console----> | 420 |










// PROBLEN NO----------------------> | 421 |










// console----> | 421 |










// console----> | 421 |










// PROBLEN NO----------------------> | 422 |










// console----> | 422 |










// console----> | 422 |










// PROBLEN NO----------------------> | 423 |










// console----> | 423 |










// console----> | 423 |










// PROBLEN NO----------------------> | 424 |










// console----> | 424 |










// console----> | 424 |










// PROBLEN NO----------------------> | 425 |










// console----> | 425 |










// console----> | 425 |










// PROBLEN NO----------------------> | 426 |










// console----> | 426 |










// console----> | 426 |










// PROBLEN NO----------------------> | 427 |










// console----> | 427 |










// console----> | 427 |










// PROBLEN NO----------------------> | 428 |










// console----> | 428 |










// console----> | 428 |










// PROBLEN NO----------------------> | 429 |










// console----> | 429 |










// console----> | 429 |










// PROBLEN NO----------------------> | 430 |










// console----> | 430 |










// console----> | 430 |










// PROBLEN NO----------------------> | 431 |










// console----> | 431 |










// console----> | 431 |










// PROBLEN NO----------------------> | 432 |










// console----> | 432 |










// console----> | 432 |










// PROBLEN NO----------------------> | 433 |










// console----> | 433 |










// console----> | 433 |










// PROBLEN NO----------------------> | 434 |










// console----> | 434 |










// console----> | 434 |










// PROBLEN NO----------------------> | 435 |










// console----> | 435 |










// console----> | 435 |










// PROBLEN NO----------------------> | 436 |










// console----> | 436 |










// console----> | 436 |










// PROBLEN NO----------------------> | 437 |










// console----> | 437 |










// console----> | 437 |










// PROBLEN NO----------------------> | 438 |










// console----> | 438 |










// console----> | 438 |










// PROBLEN NO----------------------> | 439 |










// console----> | 439 |










// console----> | 439 |










// PROBLEN NO----------------------> | 440 |










// console----> | 440 |










// console----> | 440 |










// PROBLEN NO----------------------> | 441 |










// console----> | 441 |










// console----> | 441 |










// PROBLEN NO----------------------> | 442 |










// console----> | 442 |










// console----> | 442 |










// PROBLEN NO----------------------> | 443 |










// console----> | 443 |










// console----> | 443 |










// PROBLEN NO----------------------> | 444 |










// console----> | 444 |










// console----> | 444 |










// PROBLEN NO----------------------> | 445 |










// console----> | 445 |










// console----> | 445 |










// PROBLEN NO----------------------> | 446 |










// console----> | 446 |










// console----> | 446 |










// PROBLEN NO----------------------> | 447 |










// console----> | 447 |










// console----> | 447 |










// PROBLEN NO----------------------> | 448 |










// console----> | 448 |










// console----> | 448 |










// PROBLEN NO----------------------> | 449 |










// console----> | 449 |










// console----> | 449 |










// PROBLEN NO----------------------> | 450 |










// console----> | 450 |










// console----> | 450 |










// PROBLEN NO----------------------> | 451 |










// console----> | 451 |










// console----> | 451 |










// PROBLEN NO----------------------> | 452 |










// console----> | 452 |










// console----> | 452 |










// PROBLEN NO----------------------> | 453 |










// console----> | 453 |










// console----> | 453 |










// PROBLEN NO----------------------> | 454 |










// console----> | 454 |










// console----> | 454 |










// PROBLEN NO----------------------> | 455 |










// console----> | 455 |










// console----> | 455 |










// PROBLEN NO----------------------> | 456 |










// console----> | 456 |










// console----> | 456 |










// PROBLEN NO----------------------> | 457 |










// console----> | 457 |










// console----> | 457 |










// PROBLEN NO----------------------> | 458 |










// console----> | 458 |










// console----> | 458 |










// PROBLEN NO----------------------> | 459 |










// console----> | 459 |










// console----> | 459 |










// PROBLEN NO----------------------> | 460 |










// console----> | 460 |










// console----> | 460 |










// PROBLEN NO----------------------> | 461 |










// console----> | 461 |










// console----> | 461 |










// PROBLEN NO----------------------> | 462 |










// console----> | 462 |










// console----> | 462 |










// PROBLEN NO----------------------> | 463 |










// console----> | 463 |










// console----> | 463 |










// PROBLEN NO----------------------> | 464 |










// console----> | 464 |










// console----> | 464 |










// PROBLEN NO----------------------> | 465 |










// console----> | 465 |










// console----> | 465 |










// PROBLEN NO----------------------> | 466 |










// console----> | 466 |










// console----> | 466 |










// PROBLEN NO----------------------> | 467 |










// console----> | 467 |










// console----> | 467 |










// PROBLEN NO----------------------> | 468 |










// console----> | 468 |










// console----> | 468 |










// PROBLEN NO----------------------> | 469 |










// console----> | 469 |










// console----> | 469 |










// PROBLEN NO----------------------> | 470 |










// console----> | 470 |










// console----> | 470 |










// PROBLEN NO----------------------> | 471 |










// console----> | 471 |










// console----> | 471 |










// PROBLEN NO----------------------> | 472 |










// console----> | 472 |










// console----> | 472 |










// PROBLEN NO----------------------> | 473 |










// console----> | 473 |










// console----> | 473 |










// PROBLEN NO----------------------> | 474 |










// console----> | 474 |










// console----> | 474 |










// PROBLEN NO----------------------> | 475 |










// console----> | 475 |










// console----> | 475 |










// PROBLEN NO----------------------> | 476 |










// console----> | 476 |










// console----> | 476 |










// PROBLEN NO----------------------> | 477 |










// console----> | 477 |










// console----> | 477 |










// PROBLEN NO----------------------> | 478 |










// console----> | 478 |










// console----> | 478 |










// PROBLEN NO----------------------> | 479 |










// console----> | 479 |










// console----> | 479 |










// PROBLEN NO----------------------> | 480 |










// console----> | 480 |










// console----> | 480 |










// PROBLEN NO----------------------> | 481 |










// console----> | 481 |










// console----> | 481 |










// PROBLEN NO----------------------> | 482 |










// console----> | 482 |










// console----> | 482 |










// PROBLEN NO----------------------> | 483 |










// console----> | 483 |










// console----> | 483 |










// PROBLEN NO----------------------> | 484 |










// console----> | 484 |










// console----> | 484 |










// PROBLEN NO----------------------> | 485 |










// console----> | 485 |










// console----> | 485 |










// PROBLEN NO----------------------> | 486 |










// console----> | 486 |










// console----> | 486 |










// PROBLEN NO----------------------> | 487 |










// console----> | 487 |










// console----> | 487 |










// PROBLEN NO----------------------> | 488 |










// console----> | 488 |










// console----> | 488 |










// PROBLEN NO----------------------> | 489 |










// console----> | 489 |










// console----> | 489 |










// PROBLEN NO----------------------> | 490 |










// console----> | 490 |










// console----> | 490 |










// PROBLEN NO----------------------> | 491 |










// console----> | 491 |










// console----> | 491 |










// PROBLEN NO----------------------> | 492 |










// console----> | 492 |










// console----> | 492 |










// PROBLEN NO----------------------> | 493 |










// console----> | 493 |










// console----> | 493 |










// PROBLEN NO----------------------> | 494 |










// console----> | 494 |










// console----> | 494 |










// PROBLEN NO----------------------> | 495 |










// console----> | 495 |










// console----> | 495 |










// PROBLEN NO----------------------> | 496 |










// console----> | 496 |










// console----> | 496 |










// PROBLEN NO----------------------> | 497 |










// console----> | 497 |










// console----> | 497 |










// PROBLEN NO----------------------> | 498 |










// console----> | 498 |










// console----> | 498 |










// PROBLEN NO----------------------> | 499 |










// console----> | 499 |










// console----> | 499 |










// PROBLEN NO----------------------> | 500 |










// console----> | 500 |










// console----> | 500 |










// PROBLEN NO----------------------> | 501 |










// console----> | 501 |










// console----> | 501 |










// PROBLEN NO----------------------> | 502 |










// console----> | 502 |










// console----> | 502 |










// PROBLEN NO----------------------> | 503 |










// console----> | 503 |










// console----> | 503 |










// PROBLEN NO----------------------> | 504 |










// console----> | 504 |










// console----> | 504 |










// PROBLEN NO----------------------> | 505 |










// console----> | 505 |










// console----> | 505 |










// PROBLEN NO----------------------> | 506 |










// console----> | 506 |










// console----> | 506 |










// PROBLEN NO----------------------> | 507 |










// console----> | 507 |










// console----> | 507 |










// PROBLEN NO----------------------> | 508 |










// console----> | 508 |










// console----> | 508 |










// PROBLEN NO----------------------> | 509 |










// console----> | 509 |










// console----> | 509 |










// PROBLEN NO----------------------> | 510 |










// console----> | 510 |










// console----> | 510 |










// PROBLEN NO----------------------> | 511 |










// console----> | 511 |










// console----> | 511 |










// PROBLEN NO----------------------> | 512 |










// console----> | 512 |










// console----> | 512 |










// PROBLEN NO----------------------> | 513 |










// console----> | 513 |










// console----> | 513 |










// PROBLEN NO----------------------> | 514 |










// console----> | 514 |










// console----> | 514 |










// PROBLEN NO----------------------> | 515 |










// console----> | 515 |










// console----> | 515 |










// PROBLEN NO----------------------> | 516 |










// console----> | 516 |










// console----> | 516 |










// PROBLEN NO----------------------> | 517 |










// console----> | 517 |










// console----> | 517 |










// PROBLEN NO----------------------> | 518 |










// console----> | 518 |










// console----> | 518 |










// PROBLEN NO----------------------> | 519 |










// console----> | 519 |










// console----> | 519 |










// PROBLEN NO----------------------> | 520 |










// console----> | 520 |










// console----> | 520 |










// PROBLEN NO----------------------> | 521 |










// console----> | 521 |










// console----> | 521 |










// PROBLEN NO----------------------> | 522 |










// console----> | 522 |










// console----> | 522 |










// PROBLEN NO----------------------> | 523 |










// console----> | 523 |










// console----> | 523 |










// PROBLEN NO----------------------> | 524 |










// console----> | 524 |










// console----> | 524 |










// PROBLEN NO----------------------> | 525 |










// console----> | 525 |










// console----> | 525 |










// PROBLEN NO----------------------> | 526 |










// console----> | 526 |










// console----> | 526 |










// PROBLEN NO----------------------> | 527 |










// console----> | 527 |










// console----> | 527 |










// PROBLEN NO----------------------> | 528 |










// console----> | 528 |










// console----> | 528 |










// PROBLEN NO----------------------> | 529 |










// console----> | 529 |










// console----> | 529 |










// PROBLEN NO----------------------> | 530 |










// console----> | 530 |










// console----> | 530 |










// PROBLEN NO----------------------> | 531 |










// console----> | 531 |










// console----> | 531 |










// PROBLEN NO----------------------> | 532 |










// console----> | 532 |










// console----> | 532 |










// PROBLEN NO----------------------> | 533 |










// console----> | 533 |










// console----> | 533 |










// PROBLEN NO----------------------> | 534 |










// console----> | 534 |










// console----> | 534 |










// PROBLEN NO----------------------> | 535 |










// console----> | 535 |










// console----> | 535 |










// PROBLEN NO----------------------> | 536 |










// console----> | 536 |










// console----> | 536 |










// PROBLEN NO----------------------> | 537 |










// console----> | 537 |










// console----> | 537 |










// PROBLEN NO----------------------> | 538 |










// console----> | 538 |










// console----> | 538 |










// PROBLEN NO----------------------> | 539 |










// console----> | 539 |










// console----> | 539 |










// PROBLEN NO----------------------> | 540 |










// console----> | 540 |










// console----> | 540 |










// PROBLEN NO----------------------> | 541 |










// console----> | 541 |










// console----> | 541 |










// PROBLEN NO----------------------> | 542 |










// console----> | 542 |










// console----> | 542 |










// PROBLEN NO----------------------> | 543 |










// console----> | 543 |










// console----> | 543 |










// PROBLEN NO----------------------> | 544 |










// console----> | 544 |










// console----> | 544 |










// PROBLEN NO----------------------> | 545 |










// console----> | 545 |










// console----> | 545 |










// PROBLEN NO----------------------> | 546 |










// console----> | 546 |










// console----> | 546 |










// PROBLEN NO----------------------> | 547 |










// console----> | 547 |










// console----> | 547 |










// PROBLEN NO----------------------> | 548 |










// console----> | 548 |










// console----> | 548 |










// PROBLEN NO----------------------> | 549 |










// console----> | 549 |










// console----> | 549 |










// PROBLEN NO----------------------> | 550 |










// console----> | 550 |










// console----> | 550 |










// PROBLEN NO----------------------> | 551 |










// console----> | 551 |










// console----> | 551 |










// PROBLEN NO----------------------> | 552 |










// console----> | 552 |










// console----> | 552 |










// PROBLEN NO----------------------> | 553 |










// console----> | 553 |










// console----> | 553 |










// PROBLEN NO----------------------> | 554 |










// console----> | 554 |










// console----> | 554 |










// PROBLEN NO----------------------> | 555 |










// console----> | 555 |










// console----> | 555 |










// PROBLEN NO----------------------> | 556 |










// console----> | 556 |










// console----> | 556 |










// PROBLEN NO----------------------> | 557 |










// console----> | 557 |










// console----> | 557 |










// PROBLEN NO----------------------> | 558 |










// console----> | 558 |










// console----> | 558 |










// PROBLEN NO----------------------> | 559 |










// console----> | 559 |










// console----> | 559 |










// PROBLEN NO----------------------> | 560 |










// console----> | 560 |










// console----> | 560 |










// PROBLEN NO----------------------> | 561 |










// console----> | 561 |










// console----> | 561 |










// PROBLEN NO----------------------> | 562 |










// console----> | 562 |










// console----> | 562 |










// PROBLEN NO----------------------> | 563 |










// console----> | 563 |










// console----> | 563 |










// PROBLEN NO----------------------> | 564 |










// console----> | 564 |










// console----> | 564 |










// PROBLEN NO----------------------> | 565 |










// console----> | 565 |










// console----> | 565 |










// PROBLEN NO----------------------> | 566 |










// console----> | 566 |










// console----> | 566 |










// PROBLEN NO----------------------> | 567 |










// console----> | 567 |










// console----> | 567 |










// PROBLEN NO----------------------> | 568 |










// console----> | 568 |










// console----> | 568 |










// PROBLEN NO----------------------> | 569 |










// console----> | 569 |










// console----> | 569 |










// PROBLEN NO----------------------> | 570 |










// console----> | 570 |










// console----> | 570 |










// PROBLEN NO----------------------> | 571 |










// console----> | 571 |










// console----> | 571 |










// PROBLEN NO----------------------> | 572 |










// console----> | 572 |










// console----> | 572 |










// PROBLEN NO----------------------> | 573 |










// console----> | 573 |










// console----> | 573 |










// PROBLEN NO----------------------> | 574 |










// console----> | 574 |










// console----> | 574 |










// PROBLEN NO----------------------> | 575 |










// console----> | 575 |










// console----> | 575 |










// PROBLEN NO----------------------> | 576 |










// console----> | 576 |










// console----> | 576 |










// PROBLEN NO----------------------> | 577 |










// console----> | 577 |










// console----> | 577 |










// PROBLEN NO----------------------> | 578 |










// console----> | 578 |










// console----> | 578 |










// PROBLEN NO----------------------> | 579 |










// console----> | 579 |










// console----> | 579 |










// PROBLEN NO----------------------> | 580 |










// console----> | 580 |










// console----> | 580 |










// PROBLEN NO----------------------> | 581 |










// console----> | 581 |










// console----> | 581 |










// PROBLEN NO----------------------> | 582 |










// console----> | 582 |










// console----> | 582 |










// PROBLEN NO----------------------> | 583 |










// console----> | 583 |










// console----> | 583 |










// PROBLEN NO----------------------> | 584 |










// console----> | 584 |










// console----> | 584 |










// PROBLEN NO----------------------> | 585 |










// console----> | 585 |










// console----> | 585 |










// PROBLEN NO----------------------> | 586 |










// console----> | 586 |










// console----> | 586 |










// PROBLEN NO----------------------> | 587 |










// console----> | 587 |










// console----> | 587 |










// PROBLEN NO----------------------> | 588 |










// console----> | 588 |










// console----> | 588 |










// PROBLEN NO----------------------> | 589 |










// console----> | 589 |










// console----> | 589 |










// PROBLEN NO----------------------> | 590 |










// console----> | 590 |










// console----> | 590 |










// PROBLEN NO----------------------> | 591 |










// console----> | 591 |










// console----> | 591 |










// PROBLEN NO----------------------> | 592 |










// console----> | 592 |










// console----> | 592 |










// PROBLEN NO----------------------> | 593 |










// console----> | 593 |










// console----> | 593 |










// PROBLEN NO----------------------> | 594 |










// console----> | 594 |










// console----> | 594 |










// PROBLEN NO----------------------> | 595 |










// console----> | 595 |










// console----> | 595 |










// PROBLEN NO----------------------> | 596 |










// console----> | 596 |










// console----> | 596 |










// PROBLEN NO----------------------> | 597 |










// console----> | 597 |










// console----> | 597 |










// PROBLEN NO----------------------> | 598 |










// console----> | 598 |










// console----> | 598 |










// PROBLEN NO----------------------> | 599 |










// console----> | 599 |










// console----> | 599 |










// PROBLEN NO----------------------> | 600 |










// console----> | 600 |










// console----> | 600 |










// PROBLEN NO----------------------> | 601 |










// console----> | 601 |










// console----> | 601 |










// PROBLEN NO----------------------> | 602 |










// console----> | 602 |










// console----> | 602 |










// PROBLEN NO----------------------> | 603 |










// console----> | 603 |










// console----> | 603 |










// PROBLEN NO----------------------> | 604 |










// console----> | 604 |










// console----> | 604 |










// PROBLEN NO----------------------> | 605 |










// console----> | 605 |










// console----> | 605 |










// PROBLEN NO----------------------> | 606 |










// console----> | 606 |










// console----> | 606 |










// PROBLEN NO----------------------> | 607 |










// console----> | 607 |










// console----> | 607 |










// PROBLEN NO----------------------> | 608 |










// console----> | 608 |










// console----> | 608 |










// PROBLEN NO----------------------> | 609 |










// console----> | 609 |










// console----> | 609 |










// PROBLEN NO----------------------> | 610 |










// console----> | 610 |










// console----> | 610 |










// PROBLEN NO----------------------> | 611 |










// console----> | 611 |










// console----> | 611 |










// PROBLEN NO----------------------> | 612 |










// console----> | 612 |










// console----> | 612 |










// PROBLEN NO----------------------> | 613 |










// console----> | 613 |










// console----> | 613 |










// PROBLEN NO----------------------> | 614 |










// console----> | 614 |










// console----> | 614 |










// PROBLEN NO----------------------> | 615 |










// console----> | 615 |










// console----> | 615 |










// PROBLEN NO----------------------> | 616 |










// console----> | 616 |










// console----> | 616 |










// PROBLEN NO----------------------> | 617 |










// console----> | 617 |










// console----> | 617 |










// PROBLEN NO----------------------> | 618 |










// console----> | 618 |










// console----> | 618 |










// PROBLEN NO----------------------> | 619 |










// console----> | 619 |










// console----> | 619 |










// PROBLEN NO----------------------> | 620 |










// console----> | 620 |










// console----> | 620 |










// PROBLEN NO----------------------> | 621 |










// console----> | 621 |










// console----> | 621 |










// PROBLEN NO----------------------> | 622 |










// console----> | 622 |










// console----> | 622 |










// PROBLEN NO----------------------> | 623 |










// console----> | 623 |










// console----> | 623 |










// PROBLEN NO----------------------> | 624 |










// console----> | 624 |










// console----> | 624 |










// PROBLEN NO----------------------> | 625 |










// console----> | 625 |










// console----> | 625 |










// PROBLEN NO----------------------> | 626 |










// console----> | 626 |










// console----> | 626 |










// PROBLEN NO----------------------> | 627 |










// console----> | 627 |










// console----> | 627 |










// PROBLEN NO----------------------> | 628 |










// console----> | 628 |










// console----> | 628 |










// PROBLEN NO----------------------> | 629 |










// console----> | 629 |










// console----> | 629 |










// PROBLEN NO----------------------> | 630 |










// console----> | 630 |










// console----> | 630 |










// PROBLEN NO----------------------> | 631 |










// console----> | 631 |










// console----> | 631 |










// PROBLEN NO----------------------> | 632 |










// console----> | 632 |










// console----> | 632 |










// PROBLEN NO----------------------> | 633 |










// console----> | 633 |










// console----> | 633 |










// PROBLEN NO----------------------> | 634 |










// console----> | 634 |










// console----> | 634 |










// PROBLEN NO----------------------> | 635 |










// console----> | 635 |










// console----> | 635 |










// PROBLEN NO----------------------> | 636 |










// console----> | 636 |










// console----> | 636 |










// PROBLEN NO----------------------> | 637 |










// console----> | 637 |










// console----> | 637 |










// PROBLEN NO----------------------> | 638 |










// console----> | 638 |










// console----> | 638 |










// PROBLEN NO----------------------> | 639 |










// console----> | 639 |










// console----> | 639 |










// PROBLEN NO----------------------> | 640 |










// console----> | 640 |










// console----> | 640 |










// PROBLEN NO----------------------> | 641 |










// console----> | 641 |










// console----> | 641 |










// PROBLEN NO----------------------> | 642 |










// console----> | 642 |










// console----> | 642 |










// PROBLEN NO----------------------> | 643 |










// console----> | 643 |










// console----> | 643 |










// PROBLEN NO----------------------> | 644 |










// console----> | 644 |










// console----> | 644 |










// PROBLEN NO----------------------> | 645 |










// console----> | 645 |










// console----> | 645 |










// PROBLEN NO----------------------> | 646 |










// console----> | 646 |










// console----> | 646 |










// PROBLEN NO----------------------> | 647 |










// console----> | 647 |










// console----> | 647 |










// PROBLEN NO----------------------> | 648 |










// console----> | 648 |










// console----> | 648 |










// PROBLEN NO----------------------> | 649 |










// console----> | 649 |










// console----> | 649 |










// PROBLEN NO----------------------> | 650 |










// console----> | 650 |










// console----> | 650 |










// PROBLEN NO----------------------> | 651 |










// console----> | 651 |










// console----> | 651 |










// PROBLEN NO----------------------> | 652 |










// console----> | 652 |










// console----> | 652 |










// PROBLEN NO----------------------> | 653 |










// console----> | 653 |










// console----> | 653 |










// PROBLEN NO----------------------> | 654 |










// console----> | 654 |










// console----> | 654 |










// PROBLEN NO----------------------> | 655 |










// console----> | 655 |










// console----> | 655 |










// PROBLEN NO----------------------> | 656 |










// console----> | 656 |










// console----> | 656 |










// PROBLEN NO----------------------> | 657 |










// console----> | 657 |










// console----> | 657 |










// PROBLEN NO----------------------> | 658 |










// console----> | 658 |










// console----> | 658 |










// PROBLEN NO----------------------> | 659 |










// console----> | 659 |










// console----> | 659 |










// PROBLEN NO----------------------> | 660 |










// console----> | 660 |










// console----> | 660 |










// PROBLEN NO----------------------> | 661 |










// console----> | 661 |










// console----> | 661 |










// PROBLEN NO----------------------> | 662 |










// console----> | 662 |










// console----> | 662 |










// PROBLEN NO----------------------> | 663 |










// console----> | 663 |










// console----> | 663 |










// PROBLEN NO----------------------> | 664 |










// console----> | 664 |










// console----> | 664 |










// PROBLEN NO----------------------> | 665 |










// console----> | 665 |










// console----> | 665 |










// PROBLEN NO----------------------> | 666 |










// console----> | 666 |










// console----> | 666 |










// PROBLEN NO----------------------> | 667 |










// console----> | 667 |










// console----> | 667 |










// PROBLEN NO----------------------> | 668 |










// console----> | 668 |










// console----> | 668 |










// PROBLEN NO----------------------> | 669 |










// console----> | 669 |










// console----> | 669 |










// PROBLEN NO----------------------> | 670 |










// console----> | 670 |










// console----> | 670 |










// PROBLEN NO----------------------> | 671 |










// console----> | 671 |










// console----> | 671 |










// PROBLEN NO----------------------> | 672 |










// console----> | 672 |










// console----> | 672 |










// PROBLEN NO----------------------> | 673 |










// console----> | 673 |










// console----> | 673 |










// PROBLEN NO----------------------> | 674 |










// console----> | 674 |










// console----> | 674 |










// PROBLEN NO----------------------> | 675 |










// console----> | 675 |










// console----> | 675 |










// PROBLEN NO----------------------> | 676 |










// console----> | 676 |










// console----> | 676 |










// PROBLEN NO----------------------> | 677 |










// console----> | 677 |










// console----> | 677 |










// PROBLEN NO----------------------> | 678 |










// console----> | 678 |










// console----> | 678 |










// PROBLEN NO----------------------> | 679 |










// console----> | 679 |










// console----> | 679 |










// PROBLEN NO----------------------> | 680 |










// console----> | 680 |










// console----> | 680 |










// PROBLEN NO----------------------> | 681 |










// console----> | 681 |










// console----> | 681 |










// PROBLEN NO----------------------> | 682 |










// console----> | 682 |










// console----> | 682 |










// PROBLEN NO----------------------> | 683 |










// console----> | 683 |










// console----> | 683 |










// PROBLEN NO----------------------> | 684 |










// console----> | 684 |










// console----> | 684 |










// PROBLEN NO----------------------> | 685 |










// console----> | 685 |










// console----> | 685 |










// PROBLEN NO----------------------> | 686 |










// console----> | 686 |










// console----> | 686 |










// PROBLEN NO----------------------> | 687 |










// console----> | 687 |










// console----> | 687 |










// PROBLEN NO----------------------> | 688 |










// console----> | 688 |










// console----> | 688 |










// PROBLEN NO----------------------> | 689 |










// console----> | 689 |










// console----> | 689 |










// PROBLEN NO----------------------> | 690 |










// console----> | 690 |










// console----> | 690 |










// PROBLEN NO----------------------> | 691 |










// console----> | 691 |










// console----> | 691 |










// PROBLEN NO----------------------> | 692 |










// console----> | 692 |










// console----> | 692 |










// PROBLEN NO----------------------> | 693 |










// console----> | 693 |










// console----> | 693 |










// PROBLEN NO----------------------> | 694 |










// console----> | 694 |










// console----> | 694 |










// PROBLEN NO----------------------> | 695 |










// console----> | 695 |










// console----> | 695 |










// PROBLEN NO----------------------> | 696 |










// console----> | 696 |










// console----> | 696 |










// PROBLEN NO----------------------> | 697 |










// console----> | 697 |










// console----> | 697 |










// PROBLEN NO----------------------> | 698 |










// console----> | 698 |










// console----> | 698 |










// PROBLEN NO----------------------> | 699 |










// console----> | 699 |










// console----> | 699 |










// PROBLEN NO----------------------> | 700 |










// console----> | 700 |










// console----> | 700 |










// PROBLEN NO----------------------> | 701 |










// console----> | 701 |










// console----> | 701 |










// PROBLEN NO----------------------> | 702 |










// console----> | 702 |










// console----> | 702 |










// PROBLEN NO----------------------> | 703 |










// console----> | 703 |










// console----> | 703 |










// PROBLEN NO----------------------> | 704 |










// console----> | 704 |










// console----> | 704 |










// PROBLEN NO----------------------> | 705 |










// console----> | 705 |










// console----> | 705 |










// PROBLEN NO----------------------> | 706 |










// console----> | 706 |










// console----> | 706 |










// PROBLEN NO----------------------> | 707 |










// console----> | 707 |










// console----> | 707 |










// PROBLEN NO----------------------> | 708 |










// console----> | 708 |










// console----> | 708 |










// PROBLEN NO----------------------> | 709 |










// console----> | 709 |










// console----> | 709 |










// PROBLEN NO----------------------> | 710 |










// console----> | 710 |










// console----> | 710 |










// PROBLEN NO----------------------> | 711 |










// console----> | 711 |










// console----> | 711 |










// PROBLEN NO----------------------> | 712 |










// console----> | 712 |










// console----> | 712 |










// PROBLEN NO----------------------> | 713 |










// console----> | 713 |










// console----> | 713 |










// PROBLEN NO----------------------> | 714 |










// console----> | 714 |










// console----> | 714 |










// PROBLEN NO----------------------> | 715 |










// console----> | 715 |










// console----> | 715 |










// PROBLEN NO----------------------> | 716 |










// console----> | 716 |










// console----> | 716 |










// PROBLEN NO----------------------> | 717 |










// console----> | 717 |










// console----> | 717 |










// PROBLEN NO----------------------> | 718 |










// console----> | 718 |










// console----> | 718 |










// PROBLEN NO----------------------> | 719 |










// console----> | 719 |










// console----> | 719 |










// PROBLEN NO----------------------> | 720 |










// console----> | 720 |










// console----> | 720 |










// PROBLEN NO----------------------> | 721 |










// console----> | 721 |










// console----> | 721 |










// PROBLEN NO----------------------> | 722 |










// console----> | 722 |










// console----> | 722 |










// PROBLEN NO----------------------> | 723 |










// console----> | 723 |










// console----> | 723 |










// PROBLEN NO----------------------> | 724 |










// console----> | 724 |










// console----> | 724 |










// PROBLEN NO----------------------> | 725 |










// console----> | 725 |










// console----> | 725 |










// PROBLEN NO----------------------> | 726 |










// console----> | 726 |










// console----> | 726 |










// PROBLEN NO----------------------> | 727 |










// console----> | 727 |










// console----> | 727 |










// PROBLEN NO----------------------> | 728 |










// console----> | 728 |










// console----> | 728 |










// PROBLEN NO----------------------> | 729 |










// console----> | 729 |










// console----> | 729 |










// PROBLEN NO----------------------> | 730 |










// console----> | 730 |










// console----> | 730 |










// PROBLEN NO----------------------> | 731 |










// console----> | 731 |










// console----> | 731 |










// PROBLEN NO----------------------> | 732 |










// console----> | 732 |










// console----> | 732 |










// PROBLEN NO----------------------> | 733 |










// console----> | 733 |










// console----> | 733 |










// PROBLEN NO----------------------> | 734 |










// console----> | 734 |










// console----> | 734 |










// PROBLEN NO----------------------> | 735 |










// console----> | 735 |










// console----> | 735 |










// PROBLEN NO----------------------> | 736 |










// console----> | 736 |










// console----> | 736 |










// PROBLEN NO----------------------> | 737 |










// console----> | 737 |










// console----> | 737 |










// PROBLEN NO----------------------> | 738 |










// console----> | 738 |










// console----> | 738 |










// PROBLEN NO----------------------> | 739 |










// console----> | 739 |










// console----> | 739 |










// PROBLEN NO----------------------> | 740 |










// console----> | 740 |










// console----> | 740 |










// PROBLEN NO----------------------> | 741 |










// console----> | 741 |










// console----> | 741 |










// PROBLEN NO----------------------> | 742 |










// console----> | 742 |










// console----> | 742 |










// PROBLEN NO----------------------> | 743 |










// console----> | 743 |










// console----> | 743 |










// PROBLEN NO----------------------> | 744 |










// console----> | 744 |










// console----> | 744 |










// PROBLEN NO----------------------> | 745 |










// console----> | 745 |










// console----> | 745 |










// PROBLEN NO----------------------> | 746 |










// console----> | 746 |










// console----> | 746 |










// PROBLEN NO----------------------> | 747 |










// console----> | 747 |










// console----> | 747 |










// PROBLEN NO----------------------> | 748 |










// console----> | 748 |










// console----> | 748 |










// PROBLEN NO----------------------> | 749 |










// console----> | 749 |










// console----> | 749 |










// PROBLEN NO----------------------> | 750 |










// console----> | 750 |










// console----> | 750 |










// PROBLEN NO----------------------> | 751 |










// console----> | 751 |










// console----> | 751 |










// PROBLEN NO----------------------> | 752 |










// console----> | 752 |










// console----> | 752 |










// PROBLEN NO----------------------> | 753 |










// console----> | 753 |










// console----> | 753 |










// PROBLEN NO----------------------> | 754 |










// console----> | 754 |










// console----> | 754 |










// PROBLEN NO----------------------> | 755 |










// console----> | 755 |










// console----> | 755 |










// PROBLEN NO----------------------> | 756 |










// console----> | 756 |










// console----> | 756 |










// PROBLEN NO----------------------> | 757 |










// console----> | 757 |










// console----> | 757 |










// PROBLEN NO----------------------> | 758 |










// console----> | 758 |










// console----> | 758 |










// PROBLEN NO----------------------> | 759 |










// console----> | 759 |










// console----> | 759 |










// PROBLEN NO----------------------> | 760 |










// console----> | 760 |










// console----> | 760 |










// PROBLEN NO----------------------> | 761 |










// console----> | 761 |










// console----> | 761 |










// PROBLEN NO----------------------> | 762 |










// console----> | 762 |










// console----> | 762 |










// PROBLEN NO----------------------> | 763 |










// console----> | 763 |










// console----> | 763 |










// PROBLEN NO----------------------> | 764 |










// console----> | 764 |










// console----> | 764 |










// PROBLEN NO----------------------> | 765 |










// console----> | 765 |










// console----> | 765 |










// PROBLEN NO----------------------> | 766 |










// console----> | 766 |










// console----> | 766 |










// PROBLEN NO----------------------> | 767 |










// console----> | 767 |










// console----> | 767 |










// PROBLEN NO----------------------> | 768 |










// console----> | 768 |










// console----> | 768 |










// PROBLEN NO----------------------> | 769 |










// console----> | 769 |










// console----> | 769 |










// PROBLEN NO----------------------> | 770 |










// console----> | 770 |










// console----> | 770 |










// PROBLEN NO----------------------> | 771 |










// console----> | 771 |










// console----> | 771 |










// PROBLEN NO----------------------> | 772 |










// console----> | 772 |










// console----> | 772 |










// PROBLEN NO----------------------> | 773 |










// console----> | 773 |










// console----> | 773 |










// PROBLEN NO----------------------> | 774 |










// console----> | 774 |










// console----> | 774 |










// PROBLEN NO----------------------> | 775 |










// console----> | 775 |










// console----> | 775 |










// PROBLEN NO----------------------> | 776 |










// console----> | 776 |










// console----> | 776 |










// PROBLEN NO----------------------> | 777 |










// console----> | 777 |










// console----> | 777 |










// PROBLEN NO----------------------> | 778 |










// console----> | 778 |










// console----> | 778 |










// PROBLEN NO----------------------> | 779 |










// console----> | 779 |










// console----> | 779 |










// PROBLEN NO----------------------> | 780 |










// console----> | 780 |










// console----> | 780 |










// PROBLEN NO----------------------> | 781 |










// console----> | 781 |










// console----> | 781 |










// PROBLEN NO----------------------> | 782 |










// console----> | 782 |










// console----> | 782 |










// PROBLEN NO----------------------> | 783 |










// console----> | 783 |










// console----> | 783 |










// PROBLEN NO----------------------> | 784 |










// console----> | 784 |










// console----> | 784 |










// PROBLEN NO----------------------> | 785 |










// console----> | 785 |










// console----> | 785 |










// PROBLEN NO----------------------> | 786 |










// console----> | 786 |










// console----> | 786 |










// PROBLEN NO----------------------> | 787 |










// console----> | 787 |










// console----> | 787 |










// PROBLEN NO----------------------> | 788 |










// console----> | 788 |










// console----> | 788 |










// PROBLEN NO----------------------> | 789 |










// console----> | 789 |










// console----> | 789 |










// PROBLEN NO----------------------> | 790 |










// console----> | 790 |










// console----> | 790 |










// PROBLEN NO----------------------> | 791 |










// console----> | 791 |










// console----> | 791 |










// PROBLEN NO----------------------> | 792 |










// console----> | 792 |










// console----> | 792 |










// PROBLEN NO----------------------> | 793 |










// console----> | 793 |










// console----> | 793 |










// PROBLEN NO----------------------> | 794 |










// console----> | 794 |










// console----> | 794 |










// PROBLEN NO----------------------> | 795 |










// console----> | 795 |










// console----> | 795 |










// PROBLEN NO----------------------> | 796 |










// console----> | 796 |










// console----> | 796 |










// PROBLEN NO----------------------> | 797 |










// console----> | 797 |










// console----> | 797 |










// PROBLEN NO----------------------> | 798 |










// console----> | 798 |










// console----> | 798 |










// PROBLEN NO----------------------> | 799 |










// console----> | 799 |










// console----> | 799 |










// PROBLEN NO----------------------> | 800 |










// console----> | 800 |










// console----> | 800 |










// PROBLEN NO----------------------> | 801 |










// console----> | 801 |










// console----> | 801 |










// PROBLEN NO----------------------> | 802 |










// console----> | 802 |










// console----> | 802 |










// PROBLEN NO----------------------> | 803 |










// console----> | 803 |










// console----> | 803 |










// PROBLEN NO----------------------> | 804 |










// console----> | 804 |










// console----> | 804 |










// PROBLEN NO----------------------> | 805 |










// console----> | 805 |










// console----> | 805 |










// PROBLEN NO----------------------> | 806 |










// console----> | 806 |










// console----> | 806 |










// PROBLEN NO----------------------> | 807 |










// console----> | 807 |










// console----> | 807 |










// PROBLEN NO----------------------> | 808 |










// console----> | 808 |










// console----> | 808 |










// PROBLEN NO----------------------> | 809 |










// console----> | 809 |










// console----> | 809 |










// PROBLEN NO----------------------> | 810 |










// console----> | 810 |










// console----> | 810 |










// PROBLEN NO----------------------> | 811 |










// console----> | 811 |










// console----> | 811 |










// PROBLEN NO----------------------> | 812 |










// console----> | 812 |










// console----> | 812 |










// PROBLEN NO----------------------> | 813 |










// console----> | 813 |










// console----> | 813 |










// PROBLEN NO----------------------> | 814 |










// console----> | 814 |










// console----> | 814 |










// PROBLEN NO----------------------> | 815 |










// console----> | 815 |










// console----> | 815 |










// PROBLEN NO----------------------> | 816 |










// console----> | 816 |










// console----> | 816 |










// PROBLEN NO----------------------> | 817 |










// console----> | 817 |










// console----> | 817 |










// PROBLEN NO----------------------> | 818 |










// console----> | 818 |










// console----> | 818 |










// PROBLEN NO----------------------> | 819 |










// console----> | 819 |










// console----> | 819 |










// PROBLEN NO----------------------> | 820 |










// console----> | 820 |










// console----> | 820 |










// PROBLEN NO----------------------> | 821 |










// console----> | 821 |










// console----> | 821 |










// PROBLEN NO----------------------> | 822 |










// console----> | 822 |










// console----> | 822 |










// PROBLEN NO----------------------> | 823 |










// console----> | 823 |










// console----> | 823 |










// PROBLEN NO----------------------> | 824 |










// console----> | 824 |










// console----> | 824 |










// PROBLEN NO----------------------> | 825 |










// console----> | 825 |










// console----> | 825 |










// PROBLEN NO----------------------> | 826 |










// console----> | 826 |










// console----> | 826 |










// PROBLEN NO----------------------> | 827 |










// console----> | 827 |










// console----> | 827 |










// PROBLEN NO----------------------> | 828 |










// console----> | 828 |










// console----> | 828 |










// PROBLEN NO----------------------> | 829 |










// console----> | 829 |










// console----> | 829 |










// PROBLEN NO----------------------> | 830 |










// console----> | 830 |










// console----> | 830 |










// PROBLEN NO----------------------> | 831 |










// console----> | 831 |










// console----> | 831 |










// PROBLEN NO----------------------> | 832 |










// console----> | 832 |










// console----> | 832 |










// PROBLEN NO----------------------> | 833 |










// console----> | 833 |










// console----> | 833 |










// PROBLEN NO----------------------> | 834 |










// console----> | 834 |










// console----> | 834 |










// PROBLEN NO----------------------> | 835 |










// console----> | 835 |










// console----> | 835 |










// PROBLEN NO----------------------> | 836 |










// console----> | 836 |










// console----> | 836 |










// PROBLEN NO----------------------> | 837 |










// console----> | 837 |










// console----> | 837 |










// PROBLEN NO----------------------> | 838 |










// console----> | 838 |










// console----> | 838 |










// PROBLEN NO----------------------> | 839 |










// console----> | 839 |










// console----> | 839 |










// PROBLEN NO----------------------> | 840 |










// console----> | 840 |










// console----> | 840 |










// PROBLEN NO----------------------> | 841 |










// console----> | 841 |










// console----> | 841 |










// PROBLEN NO----------------------> | 842 |










// console----> | 842 |










// console----> | 842 |










// PROBLEN NO----------------------> | 843 |










// console----> | 843 |










// console----> | 843 |










// PROBLEN NO----------------------> | 844 |










// console----> | 844 |










// console----> | 844 |










// PROBLEN NO----------------------> | 845 |










// console----> | 845 |










// console----> | 845 |










// PROBLEN NO----------------------> | 846 |










// console----> | 846 |










// console----> | 846 |










// PROBLEN NO----------------------> | 847 |










// console----> | 847 |










// console----> | 847 |










// PROBLEN NO----------------------> | 848 |










// console----> | 848 |










// console----> | 848 |










// PROBLEN NO----------------------> | 849 |










// console----> | 849 |










// console----> | 849 |










// PROBLEN NO----------------------> | 850 |










// console----> | 850 |










// console----> | 850 |










// PROBLEN NO----------------------> | 851 |










// console----> | 851 |










// console----> | 851 |










// PROBLEN NO----------------------> | 852 |










// console----> | 852 |










// console----> | 852 |










// PROBLEN NO----------------------> | 853 |










// console----> | 853 |










// console----> | 853 |










// PROBLEN NO----------------------> | 854 |










// console----> | 854 |










// console----> | 854 |










// PROBLEN NO----------------------> | 855 |










// console----> | 855 |










// console----> | 855 |










// PROBLEN NO----------------------> | 856 |










// console----> | 856 |










// console----> | 856 |










// PROBLEN NO----------------------> | 857 |










// console----> | 857 |










// console----> | 857 |










// PROBLEN NO----------------------> | 858 |










// console----> | 858 |










// console----> | 858 |










// PROBLEN NO----------------------> | 859 |










// console----> | 859 |










// console----> | 859 |










// PROBLEN NO----------------------> | 860 |










// console----> | 860 |










// console----> | 860 |










// PROBLEN NO----------------------> | 861 |










// console----> | 861 |










// console----> | 861 |










// PROBLEN NO----------------------> | 862 |










// console----> | 862 |










// console----> | 862 |










// PROBLEN NO----------------------> | 863 |










// console----> | 863 |










// console----> | 863 |










// PROBLEN NO----------------------> | 864 |










// console----> | 864 |










// console----> | 864 |










// PROBLEN NO----------------------> | 865 |










// console----> | 865 |










// console----> | 865 |










// PROBLEN NO----------------------> | 866 |










// console----> | 866 |










// console----> | 866 |










// PROBLEN NO----------------------> | 867 |










// console----> | 867 |










// console----> | 867 |










// PROBLEN NO----------------------> | 868 |










// console----> | 868 |










// console----> | 868 |










// PROBLEN NO----------------------> | 869 |










// console----> | 869 |










// console----> | 869 |










// PROBLEN NO----------------------> | 870 |










// console----> | 870 |










// console----> | 870 |










// PROBLEN NO----------------------> | 871 |










// console----> | 871 |










// console----> | 871 |










// PROBLEN NO----------------------> | 872 |










// console----> | 872 |










// console----> | 872 |










// PROBLEN NO----------------------> | 873 |










// console----> | 873 |










// console----> | 873 |










// PROBLEN NO----------------------> | 874 |










// console----> | 874 |










// console----> | 874 |










// PROBLEN NO----------------------> | 875 |










// console----> | 875 |










// console----> | 875 |










// PROBLEN NO----------------------> | 876 |










// console----> | 876 |










// console----> | 876 |










// PROBLEN NO----------------------> | 877 |










// console----> | 877 |










// console----> | 877 |










// PROBLEN NO----------------------> | 878 |










// console----> | 878 |










// console----> | 878 |










// PROBLEN NO----------------------> | 879 |










// console----> | 879 |










// console----> | 879 |










// PROBLEN NO----------------------> | 880 |










// console----> | 880 |










// console----> | 880 |










// PROBLEN NO----------------------> | 881 |










// console----> | 881 |










// console----> | 881 |










// PROBLEN NO----------------------> | 882 |










// console----> | 882 |










// console----> | 882 |










// PROBLEN NO----------------------> | 883 |










// console----> | 883 |










// console----> | 883 |










// PROBLEN NO----------------------> | 884 |










// console----> | 884 |










// console----> | 884 |










// PROBLEN NO----------------------> | 885 |










// console----> | 885 |










// console----> | 885 |










// PROBLEN NO----------------------> | 886 |










// console----> | 886 |










// console----> | 886 |










// PROBLEN NO----------------------> | 887 |










// console----> | 887 |










// console----> | 887 |










// PROBLEN NO----------------------> | 888 |










// console----> | 888 |










// console----> | 888 |










// PROBLEN NO----------------------> | 889 |










// console----> | 889 |










// console----> | 889 |










// PROBLEN NO----------------------> | 890 |










// console----> | 890 |










// console----> | 890 |










// PROBLEN NO----------------------> | 891 |










// console----> | 891 |










// console----> | 891 |










// PROBLEN NO----------------------> | 892 |










// console----> | 892 |










// console----> | 892 |










// PROBLEN NO----------------------> | 893 |










// console----> | 893 |










// console----> | 893 |










// PROBLEN NO----------------------> | 894 |










// console----> | 894 |










// console----> | 894 |










// PROBLEN NO----------------------> | 895 |










// console----> | 895 |










// console----> | 895 |










// PROBLEN NO----------------------> | 896 |










// console----> | 896 |










// console----> | 896 |










// PROBLEN NO----------------------> | 897 |










// console----> | 897 |










// console----> | 897 |










// PROBLEN NO----------------------> | 898 |










// console----> | 898 |










// console----> | 898 |










// PROBLEN NO----------------------> | 899 |










// console----> | 899 |










// console----> | 899 |










// PROBLEN NO----------------------> | 900 |










// console----> | 900 |










// console----> | 900 |










// PROBLEN NO----------------------> | 901 |










// console----> | 901 |










// console----> | 901 |










// PROBLEN NO----------------------> | 902 |










// console----> | 902 |










// console----> | 902 |










// PROBLEN NO----------------------> | 903 |










// console----> | 903 |










// console----> | 903 |










// PROBLEN NO----------------------> | 904 |










// console----> | 904 |










// console----> | 904 |










// PROBLEN NO----------------------> | 905 |










// console----> | 905 |










// console----> | 905 |










// PROBLEN NO----------------------> | 906 |










// console----> | 906 |










// console----> | 906 |










// PROBLEN NO----------------------> | 907 |










// console----> | 907 |










// console----> | 907 |










// PROBLEN NO----------------------> | 908 |










// console----> | 908 |










// console----> | 908 |










// PROBLEN NO----------------------> | 909 |










// console----> | 909 |










// console----> | 909 |










// PROBLEN NO----------------------> | 910 |










// console----> | 910 |










// console----> | 910 |










// PROBLEN NO----------------------> | 911 |










// console----> | 911 |










// console----> | 911 |










// PROBLEN NO----------------------> | 912 |










// console----> | 912 |










// console----> | 912 |










// PROBLEN NO----------------------> | 913 |










// console----> | 913 |










// console----> | 913 |










// PROBLEN NO----------------------> | 914 |










// console----> | 914 |










// console----> | 914 |










// PROBLEN NO----------------------> | 915 |










// console----> | 915 |










// console----> | 915 |










// PROBLEN NO----------------------> | 916 |










// console----> | 916 |










// console----> | 916 |










// PROBLEN NO----------------------> | 917 |










// console----> | 917 |










// console----> | 917 |










// PROBLEN NO----------------------> | 918 |










// console----> | 918 |










// console----> | 918 |










// PROBLEN NO----------------------> | 919 |










// console----> | 919 |










// console----> | 919 |










// PROBLEN NO----------------------> | 920 |










// console----> | 920 |










// console----> | 920 |










// PROBLEN NO----------------------> | 921 |










// console----> | 921 |










// console----> | 921 |










// PROBLEN NO----------------------> | 922 |










// console----> | 922 |










// console----> | 922 |










// PROBLEN NO----------------------> | 923 |










// console----> | 923 |










// console----> | 923 |










// PROBLEN NO----------------------> | 924 |










// console----> | 924 |










// console----> | 924 |










// PROBLEN NO----------------------> | 925 |










// console----> | 925 |










// console----> | 925 |










// PROBLEN NO----------------------> | 926 |










// console----> | 926 |










// console----> | 926 |










// PROBLEN NO----------------------> | 927 |










// console----> | 927 |










// console----> | 927 |










// PROBLEN NO----------------------> | 928 |










// console----> | 928 |










// console----> | 928 |










// PROBLEN NO----------------------> | 929 |










// console----> | 929 |










// console----> | 929 |










// PROBLEN NO----------------------> | 930 |










// console----> | 930 |










// console----> | 930 |










// PROBLEN NO----------------------> | 931 |










// console----> | 931 |










// console----> | 931 |










// PROBLEN NO----------------------> | 932 |










// console----> | 932 |










// console----> | 932 |










// PROBLEN NO----------------------> | 933 |










// console----> | 933 |










// console----> | 933 |










// PROBLEN NO----------------------> | 934 |










// console----> | 934 |










// console----> | 934 |










// PROBLEN NO----------------------> | 935 |










// console----> | 935 |










// console----> | 935 |










// PROBLEN NO----------------------> | 936 |










// console----> | 936 |










// console----> | 936 |










// PROBLEN NO----------------------> | 937 |










// console----> | 937 |










// console----> | 937 |










// PROBLEN NO----------------------> | 938 |










// console----> | 938 |










// console----> | 938 |










// PROBLEN NO----------------------> | 939 |










// console----> | 939 |










// console----> | 939 |










// PROBLEN NO----------------------> | 940 |










// console----> | 940 |










// console----> | 940 |










// PROBLEN NO----------------------> | 941 |










// console----> | 941 |










// console----> | 941 |










// PROBLEN NO----------------------> | 942 |










// console----> | 942 |










// console----> | 942 |










// PROBLEN NO----------------------> | 943 |










// console----> | 943 |










// console----> | 943 |










// PROBLEN NO----------------------> | 944 |










// console----> | 944 |










// console----> | 944 |










// PROBLEN NO----------------------> | 945 |










// console----> | 945 |










// console----> | 945 |










// PROBLEN NO----------------------> | 946 |










// console----> | 946 |










// console----> | 946 |










// PROBLEN NO----------------------> | 947 |










// console----> | 947 |










// console----> | 947 |










// PROBLEN NO----------------------> | 948 |










// console----> | 948 |










// console----> | 948 |










// PROBLEN NO----------------------> | 949 |










// console----> | 949 |










// console----> | 949 |










// PROBLEN NO----------------------> | 950 |










// console----> | 950 |










// console----> | 950 |










// PROBLEN NO----------------------> | 951 |










// console----> | 951 |










// console----> | 951 |










// PROBLEN NO----------------------> | 952 |










// console----> | 952 |










// console----> | 952 |










// PROBLEN NO----------------------> | 953 |










// console----> | 953 |










// console----> | 953 |










// PROBLEN NO----------------------> | 954 |










// console----> | 954 |










// console----> | 954 |










// PROBLEN NO----------------------> | 955 |










// console----> | 955 |










// console----> | 955 |










// PROBLEN NO----------------------> | 956 |










// console----> | 956 |










// console----> | 956 |










// PROBLEN NO----------------------> | 957 |










// console----> | 957 |










// console----> | 957 |










// PROBLEN NO----------------------> | 958 |










// console----> | 958 |










// console----> | 958 |










// PROBLEN NO----------------------> | 959 |










// console----> | 959 |










// console----> | 959 |










// PROBLEN NO----------------------> | 960 |










// console----> | 960 |










// console----> | 960 |










// PROBLEN NO----------------------> | 961 |










// console----> | 961 |










// console----> | 961 |










// PROBLEN NO----------------------> | 962 |










// console----> | 962 |










// console----> | 962 |










// PROBLEN NO----------------------> | 963 |










// console----> | 963 |










// console----> | 963 |










// PROBLEN NO----------------------> | 964 |










// console----> | 964 |










// console----> | 964 |










// PROBLEN NO----------------------> | 965 |










// console----> | 965 |










// console----> | 965 |










// PROBLEN NO----------------------> | 966 |










// console----> | 966 |










// console----> | 966 |










// PROBLEN NO----------------------> | 967 |










// console----> | 967 |










// console----> | 967 |










// PROBLEN NO----------------------> | 968 |










// console----> | 968 |










// console----> | 968 |










// PROBLEN NO----------------------> | 969 |










// console----> | 969 |










// console----> | 969 |










// PROBLEN NO----------------------> | 970 |










// console----> | 970 |










// console----> | 970 |










// PROBLEN NO----------------------> | 971 |










// console----> | 971 |










// console----> | 971 |










// PROBLEN NO----------------------> | 972 |










// console----> | 972 |










// console----> | 972 |










// PROBLEN NO----------------------> | 973 |










// console----> | 973 |










// console----> | 973 |










// PROBLEN NO----------------------> | 974 |










// console----> | 974 |










// console----> | 974 |










// PROBLEN NO----------------------> | 975 |










// console----> | 975 |










// console----> | 975 |










// PROBLEN NO----------------------> | 976 |










// console----> | 976 |










// console----> | 976 |










// PROBLEN NO----------------------> | 977 |










// console----> | 977 |










// console----> | 977 |










// PROBLEN NO----------------------> | 978 |










// console----> | 978 |










// console----> | 978 |










// PROBLEN NO----------------------> | 979 |










// console----> | 979 |










// console----> | 979 |










// PROBLEN NO----------------------> | 980 |










// console----> | 980 |










// console----> | 980 |










// PROBLEN NO----------------------> | 981 |










// console----> | 981 |










// console----> | 981 |










// PROBLEN NO----------------------> | 982 |










// console----> | 982 |










// console----> | 982 |










// PROBLEN NO----------------------> | 983 |










// console----> | 983 |










// console----> | 983 |










// PROBLEN NO----------------------> | 984 |










// console----> | 984 |










// console----> | 984 |










// PROBLEN NO----------------------> | 985 |










// console----> | 985 |










// console----> | 985 |










// PROBLEN NO----------------------> | 986 |










// console----> | 986 |










// console----> | 986 |










// PROBLEN NO----------------------> | 987 |










// console----> | 987 |










// console----> | 987 |










// PROBLEN NO----------------------> | 988 |










// console----> | 988 |










// console----> | 988 |










// PROBLEN NO----------------------> | 989 |










// console----> | 989 |










// console----> | 989 |










// PROBLEN NO----------------------> | 990 |










// console----> | 990 |










// console----> | 990 |










// PROBLEN NO----------------------> | 991 |










// console----> | 991 |










// console----> | 991 |










// PROBLEN NO----------------------> | 992 |










// console----> | 992 |










// console----> | 992 |










// PROBLEN NO----------------------> | 993 |










// console----> | 993 |










// console----> | 993 |










// PROBLEN NO----------------------> | 994 |










// console----> | 994 |










// console----> | 994 |










// PROBLEN NO----------------------> | 995 |










// console----> | 995 |










// console----> | 995 |










// PROBLEN NO----------------------> | 996 |










// console----> | 996 |










// console----> | 996 |










// PROBLEN NO----------------------> | 997 |










// console----> | 997 |










// console----> | 997 |










// PROBLEN NO----------------------> | 998 |










// console----> | 998 |










// console----> | 998 |










// PROBLEN NO----------------------> | 999 |










// console----> | 999 |










// console----> | 999 |







