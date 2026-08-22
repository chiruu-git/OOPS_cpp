/*
    ============================
          CONSTRUCTORS IN C++
    ============================

    Constructor:
    - A special member function of a class.
    - It is automatically called when an object is created.
    - It is mainly used to initialize an object.
    - It has the same name as the class.
    - It does not have a return type, not even void.
    - It can be overloaded.

    Types of constructors:
    1. Non-parameterized (default) constructor
    2. Parameterized constructor
    3. Copy constructor


    ============================
             THIS POINTER
    ============================

    'this' is a pointer available inside non-static member functions.

    It points to the current object that called the member function.

    Example:

        this->student_name

    is equivalent to:

        (*this).student_name

    The 'this' pointer is useful when local variables/parameters
    have the same names as class data members.

    Example:

        Student(string student_name)
        {
            this->student_name = student_name;
        }

    Here:

        this->student_name
            -> class data member

        student_name
            -> constructor parameter


    ============================
          COPY CONSTRUCTOR
    ============================

    A copy constructor is a constructor used to initialize a new
    object using an existing object of the same class.

    Syntax:

        ClassName(const ClassName &obj);

    Example:

        Student s2(s1);

    Here, s2 is created as a copy of s1.

    C++ provides a compiler-generated copy constructor if we don't
    define one ourselves.

    Our own copy constructor is called a user-defined copy constructor.
*/


#include <bits/stdc++.h>
using namespace std;


class Student {

public:

    // Data members
    string student_name;
    string college_name;
    int usn;


    // ========================================
    // 1. NON-PARAMETERIZED CONSTRUCTOR
    // ========================================

    /*
    Student() {
        cout << "Constructor called!" << '\n';

        college_name = "NIE MYSORE";
    }
    */


    // ========================================
    // 2. PARAMETERIZED CONSTRUCTOR
    // ========================================

    /*
    Student(string sn, string cn, int u) {
        student_name = sn;
        college_name = cn;
        usn = u;
    }
    */


    // ========================================
    // PARAMETERIZED CONSTRUCTOR USING 'this'
    // ========================================

    Student(string student_name, string college_name, int usn) {

        this->student_name = student_name;
        this->college_name = college_name;
        this->usn = usn;
    }


    // ========================================
    // 3. COPY CONSTRUCTOR
    // ========================================

    Student(const Student &obj) {

        this->student_name = obj.student_name;
        this->college_name = obj.college_name;
        this->usn = obj.usn;

        cout << "User-defined copy constructor called!"
             << '\n';
    }
};


// ========================================
// FUNCTION TO PRINT STUDENT DETAILS
// ========================================

// Pass by const reference so that an unnecessary
// copy of the Student object is not created.
void print(const Student &s) {

    cout << "College : " << s.college_name << '\n';
    cout << "Name    : " << s.student_name << '\n';
    cout << "USN     : " << s.usn << '\n';
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    // ========================================
    // PARAMETERIZED CONSTRUCTOR
    // ========================================

    Student s1("Chirag", "NIE MYSORE", 404);


    // ========================================
    // COPY CONSTRUCTOR
    // ========================================

    // Creates a new object 's2' as a copy of 's1'.
    Student s2(s1);


    // Print copied object's details
    print(s2);


    return 0;
}