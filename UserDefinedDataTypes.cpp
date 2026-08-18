#include <bits/stdc++.h>
using namespace std;

// user defined datatype
class Student{
public:
    
    string name;
    int rno;
    float gpa;
};


// class is a blueprint, something that exists in real world
// class -> collection of things. 
// object is a instance of a class. 
class Car{ 
public:
    int year;
    string model;
    string manufacture;
    int bhp;
    float price;
};


int main(){
    Student s1;
    // s1 is object of class student
    // object contain diff details. 
    s1.name = "chirag";
    s1.rno = 19;
    // cin >> s1.rno;
    s1.gpa = 7.5;

    Student s2;
    s2.name = "anand";
    s2.rno = 29;
    s2.gpa = 6.5;

    // cout << s1.rno << '\n';
    Car c1;
    c1.bhp = 60;
    c1.manufacture = "wolksvagon";
    c1.model = "Vento";
    c1.year  = 2020;
    c1.price = 800000;

    // cout << c1.bhp << '\n';     
    return 0;
}