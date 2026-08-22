C++ OOPs Notes & Practice

This repository contains my C++ learning notes, examples, and practice programs related to Object-Oriented Programming (OOPs).

📚 Topics
Topic	Notes / Examples
Class & Object	01_class_object.cpp
Constructors	constructors.cpp
Constructor Practice	constructor
Encapsulation	encapsulation, encapsulation.cpp
Pass by Reference	pass_by_ref.cpp
Pass Object to Function	pass_object_to_function.cpp
User Defined Data Types	UserDefinedDataTypes
Important Points	imp_points.md
🧠 OOPs Notes
1. Class and Object
Class

A class is a user-defined data type that groups data members and member functions together.

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << " " << age;
    }
};

Object

An object is an instance of a class.

Student s1;
s1.name = "Rahul";
s1.age = 20;
s1.display();

Key Points
Class is a blueprint/template.
Object is an instance of a class.
A class can contain variables and functions.
Multiple objects can be created from one class.
2. Constructors

A constructor is a special member function that is automatically called when an object is created.

Properties
Constructor has the same name as the class.
It has no return type.
It is automatically invoked when an object is created.
Constructors are generally used to initialize objects.

Example:

class Student {
public:
    Student() {
        cout << "Constructor called";
    }
};

int main() {
    Student s1;
}

Types of Constructors
Default Constructor
Parameterized Constructor
Copy Constructor

Example of a parameterized constructor:

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }
};

3. Constructor Practice

Constructors can be used to initialize different objects with different values.

Student s1("Rahul", 20);
Student s2("Aman", 21);


Each object gets its own initialized values.

📁 Open constructor practice

4. Encapsulation

Encapsulation means wrapping data and functions together inside a class and controlling access to that data.

Example:

class Account {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};


Here, balance cannot be directly accessed from outside the class.

Access Specifiers
Access Specifier	Accessible From
public	Anywhere
private	Only inside the class
protected	Class and derived classes
Benefits of Encapsulation
Data protection
Better security
Controlled access
Easier maintenance
Reduces accidental modification of data

📁 encapsulation
📁 encapsulation.cpp

5. Pass by Reference

In pass by reference, a function receives a reference to the original variable rather than a copy.

void change(int &x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);

    cout << a;  // 100
}


The original variable is modified.

Pass by Value vs Pass by Reference
Pass by Value	Pass by Reference
Copy is passed	Reference is passed
Original value is not changed	Original value can be changed
Uses additional copy	Avoids unnecessary copy

📁 pass_by_ref.cpp

6. Passing Object to Function

Objects can also be passed as arguments to functions.

class Student {
public:
    int marks;
};

void display(Student s) {
    cout << s.marks;
}


An object can be passed:

By value
By reference
By pointer

Passing by reference is often useful because it avoids making an unnecessary copy.

Example:

void display(const Student &s) {
    cout << s.marks;
}


📁 pass_object_to_function.cpp

7. User Defined Data Types

C++ allows us to create our own data types.

Common user-defined types include:

class
struct
union
enum

Example:

class Student {
public:
    string name;
    int age;
};


Now Student becomes a new type that can be used to create objects.

Student s1;
Student s2;


📁 User Defined Data Types

⭐ 8. Important Points
OOPs Main Concepts

The four major pillars of OOP are:

1. Encapsulation

Binding data and functions together and controlling access to data.

2. Abstraction

Showing only essential information and hiding unnecessary implementation details.

3. Inheritance

Allowing one class to acquire properties and behavior of another class.

class Animal {
public:
    void eat() {
        cout << "Eating";
    }
};

class Dog : public Animal {
};


Dog inherits from Animal.

4. Polymorphism

The same function/interface can behave differently in different situations.

Types:

Compile-time polymorphism
Run-time polymorphism

Examples include:

Function overloading
Operator overloading
Function overriding
Virtual functions
🔑 Quick Revision
Class       → Blueprint
Object      → Instance of class
Constructor → Initializes object
Encapsulation → Data + Functions + Data hiding
Inheritance → Reusing properties of another class
Polymorphism → One interface, multiple behaviors
Abstraction  → Hiding implementation details

📂 Repository Structure
.
├── apnacollege/
│   ├── class-object-access...
│   ├── constructor
│   ├── constructor.cpp
│   ├── encapsulation
│   └── encapsulation.cpp
│
├── college_wallah/
│   ├── 01_class_object.cpp
│   ├── constructors.cpp
│   ├── imp_points.md
│   ├── pass_by_ref.cpp
│   ├── pass_object_to_function.cpp
│   └── UserDefinedDataTypes.cpp
│
├── .gitignore
└── readme.md

🚀 Goal

Learn and practice the fundamentals of C++ Object-Oriented Programming through simple examples and gradually build a strong foundation in OOPs.

Practice → Understand → Implement → Revise